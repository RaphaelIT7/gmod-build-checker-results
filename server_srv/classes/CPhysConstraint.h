// Generated header

class CPhysConstraint : public CLogicalEntity
{
public:
	virtual ~CPhysConstraint() override; // vtable[0]
	virtual ~CPhysConstraint() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void NotifySystemEvent() override; // vtable[112]
	virtual void SetPhysObject() override; // vtable[209]
	virtual void Deactivate(); // vtable[246]
	virtual void OnConstraintSetup(); // vtable[247]
	virtual void __cxa_pure_virtual(); // vtable[248]

	void InputTurnOff(); // size[0]
	void ClearStaticFlag(); // size[0]
	void GetBreakParams(); // size[0]
	void GetBaseMap(); // size[0]
	CPhysConstraint(); // size[0]
	void SetupTeleportationHandling(); // size[0]
	void GetConstraintObjects(); // size[0]
	void ActivateConstraint(); // size[0]
	void InputTurnOn(); // size[0]
	void OnBreak(); // size[0]
	void InputBreak(); // size[0]
	void InputOnBreak(); // size[0]
};
