// Generated header

class CMomentaryRotButton : public CRotButton
{
public:
	virtual void ~CMomentaryRotButton() override; // vtable[0]
	virtual void ~CMomentaryRotButton() override; // vtable[1]
	virtual void Enable(); // vtable[249]
	virtual void Disable(); // vtable[250]

	void InputDisableUpdateTarget();
	void InputEnableUpdateTarget();
	void InputEnable();
	void InputDisable();
	void InputSetPositionImmediately();
	void UpdateTarget();
	void GetBaseMap();
	void GetPos();
	void InputSetPosition();
	void UseMoveDone();
	void ReturnMoveDone();
	void UpdateThink();
	void OutputMovementComplete();
	void SetPositionMoveDone();
	void UpdateTarget();
	void PlaySound();
	void UpdateSelf();
};
