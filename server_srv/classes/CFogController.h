// Generated header

class CFogController : public CBaseEntity
{
public:
	virtual void ~CFogController() override; // vtable[0]
	virtual void ~CFogController() override; // vtable[1]

	void InputTurnOn();
	void InputTurnOff();
	void InputSetRadial();
	void InputSetColorHDR();
	void InputSetColorSecondaryHDR();
	void InputSetFarZ();
	void InputSetStartDistLerpTo();
	void InputSetEndDistLerpTo();
	void InputSetAngles();
	void SetLerpValues();
	void InputSetStartDist();
	void InputSetEndDist();
	void InputSetMaxDensityLerpTo();
	void InputSetColor();
	void InputSetColorSecondary();
	void InputSetColorSecondaryLerpTo();
	void InputSetColorLerpTo();
	void InputSetMaxDensity();
	void InputStartFogTransition();
	void GetBaseMap();
	void CFogController();
	void NetworkStateChanged();
	void NetworkStateChanged();
};
