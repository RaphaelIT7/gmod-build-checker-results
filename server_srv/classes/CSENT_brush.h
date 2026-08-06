// Generated header

class CSENT_brush : public CBaseTrigger
{
public:
	virtual ~CSENT_brush() override; // vtable[0]
	virtual ~CSENT_brush() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void AcceptInput() override; // vtable[37]
	virtual void OnRestore() override; // vtable[45]
	virtual void StartTouch() override; // vtable[101]
	virtual void Touch() override; // vtable[102]
	virtual void EndTouch() override; // vtable[103]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void UsesLua() override; // vtable[205]
	virtual void GetLuaEntityType() override; // vtable[207]
	virtual void GetLuaScriptName() override; // vtable[224]
	virtual void InitializeScriptedEntity() override; // vtable[227]
	virtual void PassesTriggerFilters() override; // vtable[255]
	virtual void ScriptThink(); // vtable[258]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	CSENT_brush(); // size[0]
	void NetworkStateChanged(); // size[0]
	void NetworkStateChanged(); // size[0]
};
