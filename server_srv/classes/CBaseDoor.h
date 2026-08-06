// Generated header

class CBaseDoor : public CBaseToggle
{
public:
	virtual void ~CBaseDoor() override; // vtable[0]
	virtual void ~CBaseDoor() override; // vtable[1]
	virtual void SetToggleState(); // vtable[247]
	virtual void IsRotatingDoor(); // vtable[248]
	virtual void StopMovingSound(); // vtable[249]

	void InputSetToggleState();
	void InputLock();
	void InputUnlock();
	void InputSetSpeed();
	void GetBaseMap();
	void PassesBlockTouchFilter();
	void UpdateAreaPortals();
	void CloseAreaPortalsThink();
	void ChainUse();
	void ChainTouch();
	void Lock();
	void Unlock();
	void GetDoorMovementGroup();
	void DoorHitTop();
	void DoorHitBottom();
	void MovingSoundThink();
	void StartMovingSound();
	void DoorGoUp();
	void InputOpen();
	void DoorGoDown();
	void InputClose();
	void InputToggle();
	void DoorActivate();
	void DoorTouch();
};
