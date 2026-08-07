// Generated header

class CTriggerViewProxy : public CBaseEntity
{
public:
	virtual ~CTriggerViewProxy() override; // vtable[0]
	virtual ~CTriggerViewProxy() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void GetBaseMap(); // size[10]
	CTriggerViewProxy(); // size[26]
	void Disable(); // size[321]
	void InputDisable(inputdata_t *param_1); // size[9]
	void InputTeleportPlayerToProxy(inputdata_t *param_1); // size[67]
	void GetPlayerOffset(); // size[114]
	void Move(); // size[87]
	void TranslateViewToProxy(); // size[839]
	void Enable(); // size[1013]
	void InputEnable(inputdata_t *param_1); // size[315]
};
