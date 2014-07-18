/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2005-2007 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "StdAfx.h"

Corpse::Corpse(uint32 high, uint32 low)
{
	m_objectTypeId = TYPEID_CORPSE;
	internal_object_type = INTERNAL_OBJECT_TYPE_CORPSE;
	m_valuesCount = CORPSE_END;
	m_uint32Values = _fields;
	memset(m_uint32Values, 0,(CORPSE_END)*sizeof(uint32));
	m_updateMask.SetCount(CORPSE_END);
	SetUInt32Value( OBJECT_FIELD_TYPE,TYPE_CORPSE|TYPE_OBJECT);
	SetUInt32Value( OBJECT_FIELD_GUID,low);
	SetUInt32Value( OBJECT_FIELD_GUID+1,high);
	m_wowGuid.Init(GetGUID());

	SetFloatValue( OBJECT_FIELD_SCALE_X, 1 );//always 1
	  

	m_state = CORPSE_STATE_BODY;
	_loadedfromdb = false;

	if(high!=0)
	objmgr.AddCorpse(this);
}

//if mapmanager gets unloaded he might delete us
//we have "despawn" function that will delete us
//eventmanager will delte us in most of the cases
Corpse::~Corpse()
{
	sEventMgr.RemoveEvents( this ); //maybe this lowers the chance that some other event manager deltes us in the background
	objmgr.RemoveCorpse(this);
	//just in case
}

void Corpse::Create( Player *owner, uint32 mapid, float x, float y, float z, float ang )
{
	Object::_Create( mapid, x, y, z, ang);

	SetUInt64Value( CORPSE_FIELD_OWNER, owner->GetGUID() );
	_loadedfromdb = false;  // can't be created from db ;)
	m_zoneId = owner->GetZoneId();
}

void Corpse::SaveToDB()
{
	//save corpse to DB
	std::stringstream ss;
	ss << "DELETE FROM corpses WHERE guid = " << GetLowGUID();
	CharacterDatabase.Execute( ss.str( ).c_str( ) );

	ss.rdbuf()->str("");
	ss << "INSERT INTO corpses (guid, positionX, positionY, positionZ, orientation, zoneId, mapId, data, instanceId) VALUES ("
		<< GetLowGUID() << ", '" << GetPositionX() << "', '" << GetPositionY() << "', '" << GetPositionZ() << "', '" << GetOrientation() << "', '" << m_zoneId << "', '" << GetMapId() << "', '";

	for(uint16 i = 0; i < m_valuesCount; i++ )
		ss << GetUInt32Value(i) << " ";

	ss << "', " << GetInstanceID() << " )";

	CharacterDatabase.Execute( ss.str().c_str() );
}

void Corpse::DeleteFromDB()
{
	//delete corpse from db when its not needed anymore
	char sql[256];

	snprintf(sql, 256, "DELETE FROM corpses WHERE guid=%u", (unsigned int)GetLowGUID());
	CharacterDatabase.Execute(sql);
}

void CorpseData::DeleteFromDB()
{
	char sql[256];

	snprintf(sql, 256, "DELETE FROM corpses WHERE guid=%u", (unsigned int)LowGuid);
	CharacterDatabase.Execute(sql);
}

//we are probably in bones state and eventamanger just called us for cleanup
void Corpse::Despawn()
{
	sEventMgr.RemoveEvents( this ); //maybe this lowers the chance that some other event manager deltes us in the background
	if(this->IsInWorld())
		this->RemoveFromWorld(false);

	sGarbageCollection.AddObject( this );
}

void Corpse::generateLoot()
{
	loot.gold = rand() % 150 + 50; // between 50c and 1.5s, need to fix this!
	loot.gold = (uint32)(loot.gold * sWorld.getRate(RATE_MONEY));
#ifdef BATTLEGRUND_REALM_BUILD
	loot.gold = 1;
#endif 
}

//player logged out or he resurrected
void Corpse::SpawnBones()
{
	SetUInt32Value(CORPSE_FIELD_FLAGS, 5);
	SetUInt64Value(CORPSE_FIELD_OWNER, 0); // remove corpse owner association
	//remove item association
	for (int i = 0; i < EQUIPMENT_SLOT_END; i++)
	{
		if(GetUInt32Value(CORPSE_FIELD_ITEM + i))
			SetUInt32Value(CORPSE_FIELD_ITEM + i, 0);
	}
	DeleteFromDB();
	SetCorpseState(CORPSE_STATE_BONES);
	if( sEventMgr.HasEvent(this, EVENT_CORPSE_DESPAWN) == false )
		sEventMgr.AddEvent(this, &Corpse::Despawn, EVENT_CORPSE_DESPAWN, 600000, 1,0);
}

/*
//not dead sure when we only delink player and not spawn bones. Maybe when player logs out so when he logs back in he can ressurect ?
void Corpse::Delink()
{
	SetUInt32Value(CORPSE_FIELD_FLAGS,5);
	SetUInt64Value(CORPSE_FIELD_OWNER,0);
	SetCorpseState(CORPSE_STATE_BONES);
	DeleteFromDB();
}
*/