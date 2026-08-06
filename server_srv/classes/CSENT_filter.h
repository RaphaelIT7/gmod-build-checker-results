// Generated header

class CSENT_filter : public CBaseFilter
{
public:
	virtual ~CSENT_filter() override; // vtable[0]
	virtual ~CSENT_filter() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void AcceptInput(char *param_1, CBaseEntity *param_2, CBaseEntity *param_3, variant_tparam_4, intparam_5) override; // vtable[37]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void UsesLua() override; // vtable[205]
	virtual void GetLuaEntityType() override; // vtable[207]
	virtual void GetLuaScriptName() override; // vtable[224]
	virtual void InitializeScriptedEntity(char *param_1) override; // vtable[227]
	virtual void PassesFilterImpl(CBaseEntity *param_1, CBaseEntity *param_2) override; // vtable[246]
	virtual void PassesDamageFilterImpl(CTakeDamageInfo *param_1) override; // vtable[247]
	virtual void ScriptThink(); // vtable[248]
	virtual void ClientThink(); // vtable[249]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	CSENT_filter(); // size[34]
	void NetworkStateChanged(); // size[53]
	void NetworkStateChanged(void *param_1); // size[84]
};
