// Generated header

class CCycler : public CAI_BaseNPC
{
public:
	virtual ~CCycler() override; // vtable[0]
	virtual ~CCycler() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Think() override; // vtable[48]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void IsAlive() override; // vtable[67]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputSetSequence(inputdata_t *param_1); // size[250]
	void GetBaseMap(); // size[10]
	void GenericCyclerSpawn(char *param_1, Vectorparam_2, Vectorparam_3); // size[87]
};
