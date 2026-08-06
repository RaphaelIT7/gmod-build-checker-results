// Generated header

class CSENT_brush : public CBaseTrigger
{
public:
	virtual ~CSENT_brush() override; // vtable[0]
	virtual ~CSENT_brush() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void AcceptInput(char *param_1, CBaseEntity *param_2, CBaseEntity *param_3, variant_t param_4, int param_5) override; // vtable[37]
	virtual void OnRestore() override; // vtable[45]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void UsesLua() override; // vtable[205]
	virtual void GetLuaEntityType() override; // vtable[207]
	virtual void GetLuaScriptName() override; // vtable[224]
	virtual void InitializeScriptedEntity(char *param_1) override; // vtable[227]
	virtual void PassesTriggerFilters(CBaseEntity *param_1) override; // vtable[255]
	virtual void ScriptThink(); // vtable[258]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	CSENT_brush(); // size[78]
	void NetworkStateChanged(); // size[53]
	void NetworkStateChanged(void *param_1); // size[84]
};
