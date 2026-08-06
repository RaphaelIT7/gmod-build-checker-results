// Generated header

class CBasePropDoor : public CDynamicProp
{
public:
	virtual void ~CBasePropDoor() override; // vtable[0]
	virtual void ~CBasePropDoor() override; // vtable[1]
	virtual void IsAbleToCloseAreaPortals(); // vtable[323]
	virtual void IsDoorLocked(); // vtable[324]
	virtual void DoorCanClose(); // vtable[325]
	virtual void DoorCanOpen(); // vtable[326]
	virtual void CalcDoorSounds(); // vtable[330]
	virtual void OnDoorClosed(); // vtable[331]
	virtual void OnDoorOpened(); // vtable[332]
	virtual void __cxa_pure_virtual(); // vtable[337]
	virtual void Lock(); // vtable[338]
	virtual void Unlock(); // vtable[339]

	void InputLock();
	void InputUnlock();
	void OnEndBlocked();
	void GetBaseMap();
	void CBasePropDoor();
	void RegisterPrivateActivities();
	void UpdateAreaPortals();
	void DisableAreaPortalThink();
	void SetDoorBlocker();
	void DoorOpenMoveDone();
	void DoorCloseMoveDone();
	void DoorOpen();
	void OpenIfUnlocked();
	void InputOpen();
	void InputOpenAwayFrom();
	void DoorClose();
	void InputClose();
	void InputToggle();
	void DoorActivate();
	void OnUse();
	void DoorAutoCloseThink();
	void OnStartBlocked();
	void MasterStartBlocked();
	void OnEndBlocked();
	void NPCOpenDoor();
	void ~CBasePropDoor();
	void ~CBasePropDoor();
};
