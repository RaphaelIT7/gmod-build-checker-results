// Generated header

class CHandGrenade : public CHL1BaseGrenade
{
public:
	virtual ~CHandGrenade() override; // vtable[0]
	virtual ~CHandGrenade() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void BounceSound() override; // vtable[285]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void BounceTouch(CBaseEntity *param_1); // size[1223]
	void GetBaseMap(); // size[10]
	void ShootTimed(CBaseCombatCharacter *param_1, Vector param_2, float param_3); // size[158]
};
