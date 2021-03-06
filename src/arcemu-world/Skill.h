#ifndef SKILL_H
#define SKILL_H

#define SKILL_FROST                   6
#define SKILL_FIRE                    8
#define SKILL_ARMS                    26
#define SKILL_COMBAT                  38
#define SKILL_SUBTLETY                39
#define SKILL_SWORDS                  43
#define SKILL_AXES                    44
#define SKILL_BOWS                    45
#define SKILL_GUNS                    46
#define SKILL_BEAST_MASTERY           50
#define SKILL_SURVIVAL                51
#define SKILL_MACES                   54
#define SKILL_2H_SWORDS               55
#define SKILL_HOLY                    56
#define SKILL_SHADOW_MAGIC            78
#define SKILL_DEFENSE                 95
#define SKILL_LANG_COMMON             98
#define SKILL_RACIAL_DWARVEN          101
#define SKILL_LANG_ORCISH             109
#define SKILL_LANG_DWARVEN            111
#define SKILL_LANG_DARNASSIAN         113
#define SKILL_LANG_TAURAHE            115
#define SKILL_DUAL_WIELD              118
#define SKILL_RACIAL_TAUREN           124
#define SKILL_RACIAL_ORC              125
#define SKILL_RACIAL_NIGHT_ELF        126
#define SKILL_FIRST_AID               129
#define SKILL_FERAL_COMBAT            134
#define SKILL_STAVES                  136
#define SKILL_LANG_THALASSIAN         137
#define SKILL_LANG_DRACONIC           138
#define SKILL_LANG_DEMON_TONGUE       139
#define SKILL_LANG_TITAN              140
#define SKILL_LANG_OLD_TONGUE         141
#define SKILL_SURVIVAL2               142
#define SKILL_HORSE_RIDING            148
#define SKILL_WOLF_RIDING             149
#define SKILL_TIGER_RIDING            150
#define SKILL_RAM_RIDING              152
#define SKILL_SWIMMING                155
#define SKILL_2H_MACES                160
#define SKILL_UNARMED                 162
#define SKILL_MARKSMANSHIP            163
#define SKILL_BLACKSMITHING           164
#define SKILL_LEATHERWORKING          165
#define SKILL_ALCHEMY                 171
#define SKILL_2H_AXES                 172
#define SKILL_DAGGERS                 173
#define SKILL_THROWN                  176
#define SKILL_HERBALISM               182
#define SKILL_GENERIC_DND             183
#define SKILL_RETRIBUTION             184
#define SKILL_COOKING                 185
#define SKILL_MINING                  186
#define SKILL_PET_IMP                 188
#define SKILL_PET_FELHUNTER           189
#define SKILL_TAILORING               197
#define SKILL_ENGINEERING             202
#define SKILL_PET_SPIDER              203
#define SKILL_PET_VOIDWALKER          204
#define SKILL_PET_SUCCUBUS            205
#define SKILL_PET_INFERNAL            206
#define SKILL_PET_DOOMGUARD           207
#define SKILL_PET_WOLF                208
#define SKILL_PET_CAT                 209
#define SKILL_PET_BEAR                210
#define SKILL_PET_BOAR                211
#define SKILL_PET_CROCOLISK           212
#define SKILL_PET_CARRION_BIRD        213
#define SKILL_PET_CRAB                214
#define SKILL_PET_GORILLA             215
#define SKILL_PET_RAPTOR              217
#define SKILL_PET_TALLSTRIDER         218
#define SKILL_RACIAL_UNDEAD           220
#define SKILL_CROSSBOWS               226
#define SKILL_WANDS                   228
#define SKILL_POLEARMS                229
#define SKILL_PET_SCORPID             236
#define SKILL_ARCANE                  237
#define SKILL_PET_TURTLE              251
#define SKILL_ASSASSINATION           253
#define SKILL_FURY                    256
#define SKILL_PROTECTION              257
#define SKILL_PROTECTION2             267
#define SKILL_PET_GENERIC_HUNTER      270
#define SKILL_PLATE_MAIL              293
#define SKILL_LANG_GNOMISH            313
#define SKILL_LANG_TROLL              315
#define SKILL_ENCHANTING              333
#define SKILL_DEMONOLOGY              354
#define SKILL_AFFLICTION              355
#define SKILL_FISHING                 356
#define SKILL_ENHANCEMENT             373
#define SKILL_RESTORATION             374
#define SKILL_ELEMENTAL_COMBAT        375
#define SKILL_SKINNING                393
#define SKILL_MAIL                    413
#define SKILL_LEATHER                 414
#define SKILL_CLOTH                   415
#define SKILL_SHIELD                  433
#define SKILL_FIST_WEAPONS            473
#define SKILL_RAPTOR_RIDING           533
#define SKILL_MECHANOSTRIDER_PILOTING 553
#define SKILL_UNDEAD_HORSEMANSHIP     554
#define SKILL_RESTORATION2            573
#define SKILL_BALANCE                 574
#define SKILL_DESTRUCTION             593
#define SKILL_HOLY2                   594
#define SKILL_DISCIPLINE              613
#define SKILL_LOCKPICKING             633
#define SKILL_PET_BAT                 653
#define SKILL_PET_HYENA               654
#define SKILL_PET_BIRD_OF_PREY        655
#define SKILL_PET_WIND_SERPENT        656
#define SKILL_LANG_GUTTERSPEAK        673
#define SKILL_KODO_RIDING             713
#define SKILL_RACIAL_TROLL            733
#define SKILL_RACIAL_GNOME            753
#define SKILL_RACIAL_HUMAN            754
#define SKILL_JEWELCRAFTING           755
#define SKILL_RACIAL_BLOOD_ELF        756
#define SKILL_PET_EVENT_REMOTECONTROL 758
#define SKILL_LANG_DRAENEI            759
#define SKILL_RACIAL_DRAENEI          760
#define SKILL_PET_FELGUARD            761
#define SKILL_RIDING                  762
#define SKILL_PET_DRAGONHAWK          763
#define SKILL_PET_NETHER_RAY          764
#define SKILL_PET_SPOREBAT            765
#define SKILL_PET_WARP_STALKER        766
#define SKILL_PET_RAVAGER             767
#define SKILL_PET_SERPENT             768
#define SKILL_INTERNAL                769
#define SKILL_BLOOD                   770
#define SKILL_FROST2                  771
#define SKILL_UNHOLY                  772
#define SKILL_INSCRIPTION             773
#define SKILL_PET_MOTH                775
#define SKILL_RUNEFORGING             776
#define SKILL_MOUNTS                  777
#define SKILL_COMPANIONS              778
#define SKILL_PET_EXOTIC_CHIMAERA     780
#define SKILL_PET_EXOTIC_DEVLISAUR    781
#define SKILL_PET_GHOUL               782
#define SKILL_PET_EXOTIC_SILITHID     783
#define SKILL_PET_EXOTIC_WORM         784
#define SKILL_PET_WASP                785
#define SKILL_PET_EXOTIC_RHINO        786
#define SKILL_PET_EXOTIC_CORE_HOUND   787
#define SKILL_PET_EXOTIC_SPIRIT_BEAST 788
#define SKILL_RACIAL_WORGEN           789
#define SKILL_RACIAL_GOBLIN           790
#define SKILL_LANG_WORGEN             791
#define SKILL_LANG_GOBLIN             792
#define SKILL_ARCHAEOLOGY             794
#define SKILL_GENERAL_HUNTER          795
#define SKILL_GENERAL_DEATHKNIGHT     796
#define SKILL_GENERAL_ROGUE           797
#define SKILL_GENERAL_DRUID           798
#define SKILL_GENERAL_MAGE            799
#define SKILL_GENERAL_PALADIN         800
#define SKILL_GENERAL_SHAMAN          801
#define SKILL_GENERAL_WARLOCK         802
#define SKILL_GENERAL_WARRIOR         803
#define SKILL_GENERAL_PRIEST          804
#define SKILL_PET_WATER_ELEMENTAL     805
#define SKILL_PET_FOX                 808
#define SKILL_GLYPHS_ALL              810
#define SKILL_PET_DOG                 811
#define SKILL_MONKEY                  815
#define SKILL_SHALE_SPIDER            817
#define SKILL_BEETLE                  818
#define SKILL_GUILD_PERKS_ALL         821
#define SKILL_HYDRA                   824

#define SKILL_TYPE_ATTRIBUTES           5
#define SKILL_TYPE_WEAPON               6
#define SKILL_TYPE_CLASS                7
#define SKILL_TYPE_ARMOR                8
#define SKILL_TYPE_SECONDARY            9
#define SKILL_TYPE_LANGUAGE             10
#define SKILL_TYPE_PROFESSION           11
#define SKILL_TYPE_NA                   12

typedef struct
{
    uint8 itemclass;
    uint32 subclass;
} ItemProf;

const ItemProf* GetProficiencyBySkill(uint32 skill);

static const uint32 class_skillines[12][4]=
{
	{0,0,0,0},
	{SKILL_ARMS,SKILL_FURY,SKILL_PROTECTION,0},								//WARRIOR
	{SKILL_HOLY2,SKILL_PROTECTION2,SKILL_RETRIBUTION,0},					//PALADIN
	{SKILL_BEAST_MASTERY,SKILL_MARKSMANSHIP,SKILL_SURVIVAL,0},				//HUNTER	
	{SKILL_ASSASSINATION,SKILL_COMBAT,SKILL_SUBTLETY,SKILL_LOCKPICKING},	//ROGUE
	{SKILL_DISCIPLINE,SKILL_SHADOW_MAGIC,SKILL_HOLY,0},							//PRIEST
	{SKILL_BLOOD,SKILL_FROST2,SKILL_UNHOLY,SKILL_RUNEFORGING},				//DEATHKNIGHT
	{SKILL_ELEMENTAL_COMBAT,SKILL_ENHANCEMENT,SKILL_RESTORATION,0},			//SHAMAN
	{SKILL_ARCANE,SKILL_FIRE,SKILL_FROST,0},								//MAGE
	{SKILL_AFFLICTION,SKILL_DEMONOLOGY,SKILL_DESTRUCTION,0},				//WARLOCK
	{0,0,0,0},
	{SKILL_BALANCE,SKILL_FERAL_COMBAT,SKILL_RESTORATION2,0},				//DRUID
};
/*
	{26,256,257,0},								//WARRIOR
	{594,267,184,0},					//PALADIN
	{50,163,51,0},				//HUNTER	
	{253,38,39,633},	//ROGUE
	{613,78,56,0},							//PRIEST
	{770,771,772,776},				//DEATHKNIGHT
	{375,373,374,0},			//SHAMAN
	{237,8,6,0},								//MAGE
	{355,354,593,0},				//WARLOCK
	{0,0,0,0},
	{574,134,573,0},				//DRUID*/
#endif
