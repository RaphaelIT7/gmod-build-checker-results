// Generated header

class CEntityDissolve : public CBaseEntity
{
public:
	virtual ~CEntityDissolve() override; // vtable[0]
	virtual ~CEntityDissolve() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputDissolve(inputdata_t *param_1); // size[460]
	void ElectrocuteThink(); // size[97]
	void DissolveThink(); // size[478]
	void GetBaseMap(); // size[10]
	CEntityDissolve(); // size[28]
	void AttachToEntity(CBaseEntity *param_1); // size[72]
	void Create(CBaseEntity *param_1, char *param_2, floatparam_3, intparam_4, bool *param_5); // size[239]
	void Create(CBaseEntity *param_1, CBaseEntity *param_2); // size[106]
	void SetStartTime(floatparam_1); // size[51]
};
