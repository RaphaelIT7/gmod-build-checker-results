// Generated header

class CBaseTrigger : public CBaseToggle
{
public:
	virtual void ~CBaseTrigger() override; // vtable[0]
	virtual void ~CBaseTrigger() override; // vtable[1]
	virtual void InputEnable(); // vtable[247]
	virtual void InputDisable(); // vtable[248]
	virtual void InputDisableAndEndTouch(); // vtable[249]
	virtual void InputToggle(); // vtable[250]
	virtual void InputTouchTest(); // vtable[251]
	virtual void InputStartTouch(); // vtable[252]
	virtual void InputEndTouch(); // vtable[253]
	virtual void UsesFilter(); // vtable[254]
	virtual void PassesTriggerFilters(); // vtable[255]
	virtual void StartTouchAll(); // vtable[256]
	virtual void EndTouchAll(); // vtable[257]

	void Disable();
	void GetBaseMap();
	void Enable();
	void TouchTest();
	void PointIsWithin();
	void GetTouchedEntityOfType();
	void IsTouching();
	void EndTouchOnAllTouchers();
	void InitTrigger();
	void CBaseTrigger();
};
