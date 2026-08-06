// Generated header

class CTriggerImpact : public CTriggerMultiple
{
public:
	virtual ~CTriggerImpact() override; // vtable[0]
	virtual ~CTriggerImpact() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]

	void InputSetMagnitude(inputdata_t *param_1); // size[33]
	void InputImpact(inputdata_t *param_1); // size[58]
	void GetBaseMap(); // size[10]
};
