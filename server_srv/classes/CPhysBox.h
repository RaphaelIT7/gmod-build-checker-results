// Generated header

class CPhysBox : public CBreakable
{
public:
	virtual void ~CPhysBox() override; // vtable[0]
	virtual void ~CPhysBox() override; // vtable[1]
	virtual void _ZN8CPhysBox13OnPhysGunDropEP11CBasePlayer13PhysGunDrop_t() override; // vtable[278]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[279]
	virtual void PreferredCarryAngles(); // vtable[280]

	void InputWake();
	void InputSleep();
	void InputDisableMotion();
	void InputForceDrop();
	void HasPreferredCarryAnglesForPlayer();
	void InputDisableFloating();
	void OnPhysGunDrop();
	void GetBaseMap();
	void CanBePickedUpByPhyscannon();
	void EnableMotion();
	void InputEnableMotion();
	void OnPhysGunPickup();
	void Move();
	void PreferredCarryAngles();
};
