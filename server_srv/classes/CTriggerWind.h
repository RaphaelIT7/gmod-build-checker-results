// Generated header

class CTriggerWind : public CBaseVPhysicsTrigger
{
public:
	virtual ~CTriggerWind() override; // vtable[0]
	virtual ~CTriggerWind() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]

	void InputSetSpeed(inputdata_t *param_1); // size[38]
	void WindThink(); // size[75]
	void GetBaseMap(); // size[10]
	void InputEnable(inputdata_t *param_1); // size[89]
};
