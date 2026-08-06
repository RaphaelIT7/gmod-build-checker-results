// Generated header

class CPropDoorRotating : public CBasePropDoor
{
public:
	virtual void ~CPropDoorRotating() override; // vtable[0]
	virtual void ~CPropDoorRotating() override; // vtable[1]
	virtual void GetNPCOpenData(); // vtable[327]
	virtual void GetOpenInterval(); // vtable[328]
	virtual void ComputeDoorExtent(); // vtable[329]
	virtual void BeginOpening(); // vtable[333]
	virtual void BeginClosing(); // vtable[334]
	virtual void DoorStop(); // vtable[335]
	virtual void DoorResume(); // vtable[336]
	virtual void DoorTeleportToSpawnPosition() override; // vtable[337]

	void InputSetSpeed();
	void GetBaseMap();
	void CalcOpenAngles();
	void IsHingeOnLeft();
	void GetOpenState();
	void CalculateDoorVolume();
	void InputSetRotationDistance();
	void InputMoveToRotationDistance();
	void AngularMove();
	void CheckDoorClear();
	void ~CPropDoorRotating();
	void ~CPropDoorRotating();
};
