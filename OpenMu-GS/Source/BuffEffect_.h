#if !defined(__BUFFEFFECT_H__)
#define __BUFFEFFECT_H__

#include "user.h"
#include "ItemAddOption.h"

#define EFFECT_OPTION_REDUCE_HP	18
#define EFFECT_OPTION_REDUCE_HPPERC	19

#define MAX_BUFF_EFFECT	254

enum
{
	BUFF_ADD_ATTACK				=	1,
	BUFF_ADD_DEFENSE			=	2,
	BUFF_NPC_PHANTOM			=	3,
	BUFF_MANASHIELD				=	4,
	BUFF_ADD_CRITDMG			=	5,
	BUFF_INFINITY_ARROW			=	6,
	BUFF_AG_RECOVERYSPEED		=	7,
	BUFF_SWELL_LIFE				=	8,
	BUFF_SWELL_MANA				=	9,
	BUFF_POT_BLESS				=	10,
	BUFF_POT_SOUL				=	11,
	BUFF_REMOVEMAGIC			=	12,
	BUFF_GATESTATUS				=	13,
	BUFF_WATCHTOWER				=	14,
	BUFF_SIEGEGUILD1			=	15,
	BUFF_SIEGEGUILD2			=	16,
	BUFF_SIEGEGUILD3			=	17,
	BUFF_INVISIBILITY			=	18,
	BUFF_BATTLEROD				=	19,
	BUFF_CROWNREGISTER			=	20,
	BUFF_ALTAR_STATUS1			=	21,
	BUFF_ALTAR_STATUS2			=	22,
	BUFF_ALTAR_STATUS3			=	23,
	BUFF_ALTAR_STATUS4			=	24,
	BUFF_ALTAR_STATUS5			=	25,
	BUFF_ALTAR_STATUS6			=	26,
	BUFF_CRYWOLF_TRANSPARENCY	=	27,
	BUFF_GM						=	28,
	BUFF_SEAL_ASCENSION			=	29,
	BUFF_SEAL_WEALTH			=	30,
	BUFF_SEAL_SUSTENANCE		=	31,
	BUFF_IT_QUICKNESS			=	32,
	BUFF_IT_SUBLIMATION			=	33,
	BUFF_IT_PROTECTION			=	34,
	BUFF_JACK_BLESSING			=	35,
	BUFF_JACK_WRATH				=	36,
	BUFF_JACK_CRY				=	37,
	BUFF_JACK_FOOD				=	38,
	BUFF_JACK_DRINK				=	39,
	BUFF_SEAL_ASCENSION2		=	40,
	BUFF_SEAL_WEALTH2			=	41,
	BUFF_SEAL_SUSTENANCE2		=	42,
	BUFF_SEAL_MOBILITY			=	43,
	BUFF_SCROLL_QUICKNESS		=	44,
	BUFF_SCROLL_DEFENSE			=	45,
	BUFF_SCROLL_WRATH			=	46,
	BUFF_SCROLL_WIZARDRY		=	47,
	BUFF_SCROLL_HEALTH			=	48,
	BUFF_SCROLL_MANA			=	49,
	BUFF_ELIXIR_STR				=	50,
	BUFF_ELIXIR_DEX				=	51,
	BUFF_ELIXIR_VIT				=	52,
	BUFF_ELIXIR_ENE				=	53,
	BUFF_ELIXIR_COM				=	54,
	BUFF_POISON					=	55,
	BUFF_ICE					=	56,
	BUFF_ICEARROW				=	57,
	BUFF_DEFENSEDOWN			=	58,
	BUFF_ATTACKDOWN				=	59,
	BUFF_WIZARDRYDOWN			=	60,
	BUFF_STUN					=	61,
	BUFF_MAGICDEFENSE			=	62,
	BUFF_MONSTERMAGIC_RESIST	=	63,
	BUFF_MONCHEMISTRY_RESIST	=	64,
	BUFF_RESTRICTION			=	65,
	BUFF_CRYWOLF_STATUS1		=	66,
	BUFF_CRYWOLF_STATUS2		=	67,
	BUFF_CRYWOLF_STATUS3		=	68,
	BUFF_CRYWOLF_STATUS4		=	69,
	BUFF_CRYWOLF_STATUS5		=	70,
	BUFF_DAMAGEREFLECT			=	71,
	BUFF_SLEEP					=	72,
	BUFF_BLIND					=	73,
	BUFF_REQUIEM				=	74,
	BUFF_EXPLOSION				=	75,
	BUFF_WEAKNESS				=	76,
	BUFF_INNOVATION				=	77,
	BUFF_CHERRY_WINE			=	78,
	BUFF_CHERRY_RICECAKE		=	79,
	BUFF_CHERRY_FLOWERPETAL		=	80,
	BUFF_BERSERKER				=	81,
	BUFF_EXP_WIZARDRY			=	82,
	BUFF_FLAMESTRIKE			=	83,
	BUFF_GIGANTSTORM			=	84,
	BUFF_LIGHTNINGSHOCK			=	85,
	BUFF_COLD					=	86,
	BUFF_SEAL_HEALING			=	87,
	BUFF_SEAL_DIVINITY			=	88,
	BUFF_SCROLL_BATTLE			=	89,
	BUFF_SCROLL_STRENGTH		=	90,
	BUFF_SANTA_CHRISTMAS		=	91,
	BUFF_SANTA_HEALING			=	92,
	BUFF_SANTA_PROTECTION		=	93,
	BUFF_SANTA_STRENGHTHENER	=	94,
	BUFF_SANTA_DEFENSE			=	95,
	BUFF_SANTA_QUICKNESS		=	96,
	BUFF_SANTA_FORTUNE			=	97,
	BUFF_WATCH					=	98,
	BUFF_TALISMAN_GUARDIAN		=	99,
	BUFF_TALISMAN_ITEMPROTECT	=	100,
	BUFF_SEAL_ASCENSIONM		=	101,
	BUFF_SEAL_WEALTHM			=	102,
	BUFF_GLADIATOR_HONOR		=	103,
	BUFF_SEAL_STRENGTH			=	104,
	BUFF_ASCENSION				=	105,
	BUFF_PK_PENALTY				=	106,
	BUFF_PENALTY				=	107,
	BUFF_PENALTY2				=	108,
	BUFF_PARTYEXP				=	112,
	BUFF_MAXAG					=	113,
	BUFF_MAXSD					=	114,
	BUFF_VITALITY_MINIMUM		=	115,
	BUFF_VITALITY_LOW			=	116,
	BUFF_VITALITY_MEDIUM		=	117,
	BUFF_VITALITY_HIGH			=	118,
	BUFF_SEAL_WEALTH3			=	119,
	BUFF_BAN					=	120,
	BUFF_SCROLL_HEALING			=	121,
	BUFF_IGNORE_DEFENSE			=	129,
	BUFF_INCREASE_VIT			=	130,
	BUFF_INCREASE_DEFRATE		=	131,
	BUFF_DECREASE_DEFRATE		=	132,
	BUFF_INVINCIBILITY			=	133,
	BUFF_IRONDEFENSE			=	134,
	BUFF_SWELL_LIFE2			=	135,
	BUFF_SWELL_LIFE3			=	136,
	BUFF_BLEEDING				=	137,
	BUFF_EXP_WIZARDRY2			=	138,
	BUFF_EXP_WIZARDRY3			=	139,
	BUFF_MANASHIELD2			=	140,
	BUFF_DECREASE_ATTACKSPEED	=	141,
	BUFF_BLESS					=	142,
	BUFF_INFINITY_ARROW2		=	143,
	BUFF_BLIND2					=	144,
	BUFF_VAMPIRIC				=	145,
	BUFF_FREEZE					=	146,
	BUFF_EARTHBINDS				=	147,
	BUFF_ADD_CRITDMG2			=	148,
	BUFF_ADD_CRITDMG3			=	149,
	BUFF_BERSERKER2				=	150,
	BUFF_BERSERKER3				=	151,
	BUFF_BERSERKER4				=	152,
	BUFF_INCREASE_DEFRATE2		=	153,
	BUFF_INCREASE_DEFRATE3		=	154,
	BUFF_INCREASE_VIT2			=	155,
	BUFF_IGNORE_DEFENSE2		=	156,
	BUFF_FIRE					=	157,
	BUFF_FROST					=	158,
	BUFF__POISON				=	159,
	BUFF__POISON2				=	160,
	BUFF_BLESS2					=	161,
	BUFF_WEAKNESS2				=	162,
	BUFF_INNOVATION2			=	163,
	BUFF_DECREASE_DEFRATE2		=	164,
	BUFF_IRONDEFENSE2			=	165,
	BUFF_BLOODHOWL				=	166,
	BUFF_BLOODHOWL2				=	167,
	BUFF_PENETRATE_ARMOR		=	169,
	BUFF_FIRE2					=	174,
	BUFF_FROST2					=	175,
	BUFF_TORNADO				=	176,
	BUFF_BIND					=	177,
	BUFF_DARKNESS				=	178,
	BUFF_FIRETOWER				=	179,
	BUFF_WATERTOWER				=	180,
	BUFF_EARTHTOWER				=	181,
	BUFF_WINDTOWER				=	182,
	BUFF_DARKNESSTOWER			=	183,
	BUFF_RESURRECT_PENALTY		=	184,
	BUFF_EXP_VAULT				=	185,
	BUFF_CONFUSION				=	186,
	BUFF_EXPREWARD				=	187,
};

enum eBuffEffectType
{
	AT_NULL_BUFF_EFFECT = 0,
	AT_INCREASE_ATTACK = 1,
	AT_INCREASE_DEFENSE = 2,
	AT_NPC_HELP = 3,
	AT_WIZARD_DEFENSE = 4,
	AT_INCREASE_CRITICAL_DMG = 5,
	AT_INFINITY_ARROW = 6,
	AT_INCREASE_AG_SPEED = 7,
	AT_SWELL_LIFE = 8,
	AT_SWELL_MANA = 9,
	AT_POTION_OF_BLESS = 10,
	AT_POTION_OF_SOUL = 11,
	AT_CANCEL_MAGIC = 12,
	AT_CASTLE_GATE_STATUS = 13,
	AT_WATCHING_TOWER = 14,
	AT_ATTACKING_GUILD1 = 15,
	AT_ATTACKING_GUILD2 = 16,
	AT_ATTACKING_GUILD3 = 17,
	AT_INVISIBILITY = 18,
	AT_DARK_ROD_SKILL = 19,
	AT_CASTLE_CROWN_STATUS = 20,
	AT_CW_ALTAR_ACTIVE = 21,
	AT_CW_ALTAR_INACTIVE = 22,
	AT_CW_ALTAR_STATUS = 23,
	AT_CW_ALTAR_ATTEMPT = 24,
	AT_CW_ALTAR_ATTACKING_STATUS = 25,
	AT_CW_ALTAR_HERO_STATUS = 26,
	AT_CW_NPC_TRANSPARENCY = 27,
	AT_GAMEMASTER_LOGO = 28,
	AT_PCBANG_SEAL_OF_ASCENSION = 29,
	AT_PCBANG_SEAL_OF_WEALTH = 30,
	AT_PCBANG_SEAL_OF_SUSTENANCE = 31,
	AT_ILLUSION_SPELL1 = 32,
	AT_ILLUSION_SPELL2 = 33,
	AT_ILLUSION_SHIELD_SPELL = 34,
	AT_HALLOWEEN_BLESSING = 35,
	AT_HALLOWEEN_RAGE = 36,
	AT_HALLOWEEN_SCREAM = 37,
	AT_HALLOWEEN_FOOD = 38,
	AT_HALLOWEEN_DRINK = 39,
	AT_CSHOP_SEAL_OF_ASCENSION = 40,
	AT_CSHOP_SEAL_OF_WEALTH = 41,
	AT_CSHOP_SEAL_OF_SUSTENANCE = 42,
	AT_CSHOP_SEAL_OF_MOBILITY = 43,
	AT_CSHOP_SCROLL_OF_QUICKNESS = 44,
	AT_CSHOP_SCROLL_OF_DEFENSE = 45,
	AT_CSHOP_SCROLL_OF_WRATH = 46,
	AT_CSHOP_SCROLL_OF_WIZARDRY = 47,
	AT_CSHOP_SCROLL_OF_HEALTH = 48,
	AT_CSHOP_SCROLL_OF_MANA = 49,
	AT_CSHOP_LEAP_OF_STRENGTH = 50,
	AT_CSHOP_LEAP_OF_QUICKNESS = 51,
	AT_CSHOP_LEAP_OF_HEALTH = 52,
	AT_CSHOP_LEAP_OF_ENERGY = 53,
	AT_CSHOP_LEAP_OF_CONTROL = 54,
	AT_POISON = 55,
	AT_ICE = 56,
	AT_ICE_ARROW = 57,
	AT_REDUCE_DEFENSE = 58,
	AT_REDUCE_ATTACK = 59,
	AT_REDUCE_MAGIC = 60,
	AT_STUN = 61,
	AT_MAGIC_DEFENSE = 62,
	AT_IMMUNE_MAGIC = 63,
	AT_IMMUNE_HARM = 64,
	AT_ILLUSION_RESTRICTION_SPELL = 65,
	AT_CRYWOLF_PROTECTION1 = 66,
	AT_CRYWOLF_PROTECTION2 = 67,
	AT_CRYWOLF_PROTECTION3 = 68,
	AT_CRYWOLF_PROTECTION4 = 69,
	AT_CRYWOLF_PROTECTION5 = 70,
	AT_DAMAGE_REFLECTION = 71,
	AT_SLEEP = 72,
	AT_BLIND = 73,
	AT_REQUIEM = 74,
	AT_EXPLOSION = 75,
	AT_WEAKNESS = 76,
	AT_INNOVATION = 77,
	AT_CHERRYBLOSSOM_STAMEN = 78,
	AT_CHERRYBLOSSOM_RICECAKE = 79,
	AT_CHERRYBLOSSOM_FLOWERPETAL = 80,
	AT_BERSERKER = 81,
	AT_EXPANSION_WIZARDRY = 82,
	AT_FLAME_STRIKE = 83,
	AT_GIGANTIC_STORM = 84,
	AT_LIGHTNING_SHOCK = 85,
	AT_DESTRUCTION = 86,
	AT_CSHOP_SEAL_OF_HEALING = 87,
	AT_CSHOP_SEAL_OF_DIVINITY = 88,
	AT_CSHOP_SCROLL_OF_BATTLE = 89,
	AT_CSHOP_SCROLL_OF_STRENGTHENER = 90,
	AT_XMASS_REWARD = 91,
	AT_XMASS_HEALTH = 92,
	AT_XMASS_MANA = 93,
	AT_XMASS_ATTACK = 94,
	AT_XMASS_DEFENSE = 95,
	AT_XMASS_DEXTERITY = 96,
	AT_XMASS_AG_RECOVERY = 97,
	AT_NEWPVPSYSTEM_WATCH_DUEL = 98,
	AT_CSHOP_GUARDIAN_AMULET = 99,
	AT_CSHOP_PROTECT_AMULET = 100,
	AT_CSHOP_MASTER_SEAL_OF_ASCENSION = 101,
	AT_CSHOP_MASTER_SEAL_OF_WEALTH = 102,
	AT_NEWPVPSYSTEM_REWARD = 103,
	AT_PCBANG_SEAL_OF_BALANCE = 104,
	AT_PARTY_EXP_BONUS = 112,
	AT_RFVITALITY = 130,
	AT_SWELL_LIFE2 = 135,
	AT_EXPANSION_WIZARDRY2 = 138,
	AT_EXPANSION_WIZARDRY3 = 139,
	AT_INFINITY_ARROW2 = 143,
	AT_INCREASE_CRITICAL_DMG3 = 148,
	AT_BERSERKER2 = 150,
	AT_BERSERKER3 = 151,
	AT_BERSERKER4 = 152,
};

struct BUFF_EFFECT_INFO
{
	BYTE btNumber;
	BYTE btOptionType;
	BYTE btItemIndex;
	BYTE btItemNumber;
	char BuffName[20];
	BYTE btType;
	BYTE btUnk;
	BYTE btClearType;
	char BuffComment[100];
};

class CEffectOption
{
public:
	CEffectOption();
	virtual ~CEffectOption();

	// Members

	void _SetEffect(LPOBJ lpObj,BYTE iEffectType,int iEffectValue);
	void _ClearItemEffect(LPOBJ lpObj,BYTE btEffectType,int iEffectValue);

	void BeAttackEffect(LPOBJ lpObj,BYTE btEffectType,int iEffectValue);
	void ReduceHP(LPOBJ,int iREDUCE_HP);
	void AbsorbHP(LPOBJ,int iREDUCE_HP);
	void ReduceHPPerc(LPOBJ lpObj,BYTE iREDUCE_PERC);
	void SetEffectInfo1(LPOBJ lpObj);
	void SetEffectInfo2(LPOBJ lpObj);
	void ClearEffect(LPOBJ lpObj);
};

extern CEffectOption g_EffectOption;

class CEffectAddOption
{
public:
	CEffectAddOption();
	virtual ~CEffectAddOption();

	// Members 

	int AddEffect(LPOBJ lpObj,int EffectNumber,BYTE btEffectType1,BYTE btEffectType2,BYTE btEffectType3,int iEffectValue1,int iEffectValue2,int iEffectValue3,int iTimeValue);
	BYTE ClearEffect(LPOBJ lpObj,int BuffNumber);
	BYTE IsEffectActive(LPOBJ lpObj,int BuffNumber);
	void RemoveBuffEffect(LPOBJ lpObj,int BuffNumber);
	int GetClearCount(LPOBJ lpObj,int Type);
	BUFF_EFFECT_INFO* GetEffectInfo(int BuffNumber);
	int GetEffectClearType(int BuffNumber);
	void BeAttackProc(LPOBJ lpObj,BYTE btEffectType,int iEffectValue);
};

extern CEffectAddOption g_EffectAddOption;

class CBuffEffectInfo
{
public:
	CBuffEffectInfo();
	virtual ~CBuffEffectInfo();

	// Members

	void Init();
	BYTE LoadData(char* szFile);
	BYTE AddBuffInfo(BYTE btNumber,BYTE btOptionType,BYTE btItemIndex,BYTE btItemNumber,char* szName,BYTE btType,BYTE btType2,BYTE btClearType,char* szComment);
	BYTE IsBuff(BYTE BuffNumber);
	BUFF_EFFECT_INFO* SearchBuff(BYTE BuffNumber);

	// Variables
	int m_Count;
	BUFF_EFFECT_INFO m_BuffData[MAX_BUFF_EFFECT];
};

extern CBuffEffectInfo g_BuffEffect;

void gObjSkillBeAttackProc(LPOBJ lpObj);
BYTE gObjAddEffect(LPOBJ lpObj,int BuffNumber);
BYTE gObjAddEffect(LPOBJ lpObj,int BuffNumber,BYTE btEffect1,int iEffectValue1,BYTE btEffect2,int iEffectValue2,BYTE btEffect3,int iEffectValue3,int iEffectTime);
BYTE gObjAddEffect(LPOBJ lpObj,int BuffNumber,int iTimeValue);
BYTE gObjClearEffect(LPOBJ lpObj,int BuffNumber);
BYTE gObjClearGroupEffect(LPOBJ lpObj,int Group);
BYTE gObjIsActiveEffect(LPOBJ lpObj,int BuffNumber);
int gObjGetEffectList(LPOBJ lpObj,LPBYTE BuffList);
BYTE gObjCheckEffect(LPOBJ lpObj,int BuffNumber,int EffectValue1,int EffectValue2,int EffectValue3);
BYTE gObjAddEffectTime(LPOBJ lpObj,int BuffNumber,int iTimeValue);
int gObjGetEffectValue(LPOBJ lpObj,int EffectType);
BYTE gObjGetEffectValue(LPOBJ lpObj,int BuffNumber,int* EffectValue1,int* EffectValue2,int* EffectValue3);
BOOL gObjSendGroupEffect(LPOBJ lpObj,int Dis,int& Count,int BuffNumber,int BuffEffect1,int EffectVal1,int BuffEffect2,int EffectVal2,int BuffEffect3,int EffectVal3,int Time);
void gObjSendAllEffect(LPOBJ lpObj);
void gObjExpHandle(LPOBJ lpObj,__int64* Exp,int bMaster);

void GCSendBuffInfo(LPOBJ lpObj,BYTE EffectNumber,BYTE bUseType,WORD wOptionType,WORD iEffectType,int iTimeValuem,int iEffectValue=0);

#endif