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
	virtual void KeyValue() override; // vtable[30]
	virtual void AcceptInput() override; // vtable[37]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void UsesLua() override; // vtable[205]
	virtual void GetLuaEntityType() override; // vtable[207]
	virtual void GetLuaScriptName() override; // vtable[224]
	virtual void InitializeScriptedEntity() override; // vtable[227]
	virtual void PassesFilterImpl() override; // vtable[246]
	virtual void PassesDamageFilterImpl() override; // vtable[247]
	virtual void ScriptThink(); // vtable[248]
	virtual void ClientThink(); // vtable[249]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	CSENT_filter(); // size[0]
	void NetworkStateChanged(); // size[0]
	void NetworkStateChanged(); // size[0]
};
