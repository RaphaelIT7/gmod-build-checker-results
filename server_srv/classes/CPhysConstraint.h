// Generated header

class CPhysConstraint : public CLogicalEntity
{
public:
	virtual void ~CPhysConstraint() override; // vtable[0]
	virtual void ~CPhysConstraint() override; // vtable[1]
	virtual void Deactivate(); // vtable[246]
	virtual void OnConstraintSetup(); // vtable[247]
	virtual void __cxa_pure_virtual(); // vtable[248]

	void InputTurnOff();
	void ClearStaticFlag();
	void GetBreakParams();
	void GetBaseMap();
	void CPhysConstraint();
	void SetupTeleportationHandling();
	void GetConstraintObjects();
	void ActivateConstraint();
	void InputTurnOn();
	void OnBreak();
	void InputBreak();
	void InputOnBreak();
};
