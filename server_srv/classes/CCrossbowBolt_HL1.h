// Generated header
// Estimated minimum size: 0x2030 (8240) bytes

class CCrossbowBolt_HL1 : public CBaseCombatCharacter
{
public:
	virtual ~CCrossbowBolt_HL1() override; // vtable[0]
	virtual ~CCrossbowBolt_HL1() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void _ZN17CCrossbowBolt_HL15SpawnEv() override; // vtable[23]
	virtual void Classify() override; // vtable[55]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void BubbleThink(); // size[340]
	void ExplodeThink(); // size[76]
	void BoltTouch(CBaseEntity *param_1); // size[62]
	void BoltTouch(CBaseEntity *param_1); // size[38]
	void GetBaseMap(); // size[10]
	void BoltCreate(Vector *param_1, QAngle *param_2, CBasePlayer *param_3, CBaseEntity *param_4); // size[48]
};
