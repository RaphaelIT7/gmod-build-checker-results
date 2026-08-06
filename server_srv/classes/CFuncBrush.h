// Generated header

class CFuncBrush : public CBaseEntity
{
public:
	virtual ~CFuncBrush() override; // vtable[0]
	virtual ~CFuncBrush() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void TurnOff(); // vtable[246]
	virtual void TurnOn(); // vtable[247]
	virtual void IsOn(); // vtable[248]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputTurnOff(inputdata_t *param_1); // size[17]
	void InputTurnOn(inputdata_t *param_1); // size[17]
	void InputSetExcluded(inputdata_t *param_1); // size[29]
	void InputSetInvert(inputdata_t *param_1); // size[30]
	void InputToggle(inputdata_t *param_1); // size[56]
	void GetBaseMap(); // size[10]
};
