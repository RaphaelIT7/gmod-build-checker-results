// Generated header

class CGrenadeMP5 : public CHL1BaseGrenade
{
public:
	virtual ~CGrenadeMP5() override; // vtable[0]
	virtual ~CGrenadeMP5() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Detonate() override; // vtable[283]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GrenadeMP5Touch(CBaseEntity *param_1); // size[162]
	void GetBaseMap(); // size[10]
	void Event_Killed(CBaseEntity *param_1, CBaseEntity *param_2, floatparam_3, intparam_4); // size[17]
};
