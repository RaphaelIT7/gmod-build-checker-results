// Generated header

class CTriggerWind : public CBaseVPhysicsTrigger
{
public:
	virtual ~CTriggerWind() override; // vtable[0]
	virtual ~CTriggerWind() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue() override; // vtable[30]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void StartTouch() override; // vtable[101]
	virtual void EndTouch() override; // vtable[103]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]

	void InputSetSpeed(); // size[0]
	void WindThink(); // size[0]
	void GetBaseMap(); // size[0]
	void InputEnable(); // size[0]
};
