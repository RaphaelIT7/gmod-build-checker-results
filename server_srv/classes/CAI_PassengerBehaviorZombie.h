// Generated header

class CAI_PassengerBehaviorZombie : public CAI_PassengerBehavior
{
public:
	virtual void ~CAI_PassengerBehaviorZombie() override; // vtable[0]
	virtual void ~CAI_PassengerBehaviorZombie() override; // vtable[1]
	virtual void CanEnterVehicle(); // vtable[83]
	virtual void AttachToVehicle(); // vtable[84]
	virtual void FindExitSequence(); // vtable[85]
	virtual void _ZN27CAI_PassengerBehaviorZombie17CalculateBodyLeanEv(); // vtable[86]
	virtual void FindEntrySequence(); // vtable[87]

	void GetBaseMap();
	void SuppressAttack();
	void EnemyInVehicle();
	void SelectOutsideSchedule();
	void SelectInsideSchedule();
	void CanJumpToAttachToVehicle();
	void StartDismount();
	void FinishDismount();
	void GetEntryPointCost();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_PassengerBehaviorZombie();
};
