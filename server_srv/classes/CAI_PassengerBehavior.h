// Generated header

class CAI_PassengerBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_PassengerBehavior() override; // vtable[0]
	virtual void ~CAI_PassengerBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void GetEntryTarget() override; // vtable[71]
	virtual void ClearSchedule() override; // vtable[72]
	virtual void CancelEnterVehicle() override; // vtable[73]
	virtual void GetRoleName() override; // vtable[74]
	virtual void EnterVehicle() override; // vtable[75]
	virtual void ExitVehicle() override; // vtable[76]
	virtual void SelectTransitionSchedule(); // vtable[77]
	virtual void OnExitVehicleFailed(); // vtable[78]
	virtual void GatherVehicleStateConditions(); // vtable[79]
	virtual void FinishEnterVehicle(); // vtable[80]
	virtual void FinishExitVehicle(); // vtable[81]
	virtual void LoadedSchedules(); // vtable[82]

	void GetBaseMap();
	void Disable();
	void AddPhysicsPush();
	void IsPassengerHostile();
	void CanExitVehicle();
	void FindGroundAtPosition();
	void PointIsNavigable();
	void GetExitPoint();
	void ReserveEntryPoint();
	void IsValidTransitionPoint();
	void FindExitSequence();
	void GetEntryPoint();
	void FindEntrySequence();
	void DetachFromVehicle();
	void AttachToVehicle();
	void GetSequenceBlendAmount();
	void GetTransitionAnimationIdeal();
	void GetNextCycleForInterval();
	void LocalIntervalMovement();
	void DrawDebugTransitionInfo();
	void DoTransitionMovement();
	void GetLocalVehicleVelocity();
	void InitVehicleState();
	void Enable();
	void CacheBlendTargets();
	void SetTransitionSequence();
	void ReserveExitPoint();
	void SpeakIfAllowed();
	void ForceVehicleInteraction();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_PassengerBehavior();
};
