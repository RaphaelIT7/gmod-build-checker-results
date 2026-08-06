// Generated header

class CAI_PassengerBehaviorCompanion : public CAI_PassengerBehavior
{
public:
	virtual void ~CAI_PassengerBehaviorCompanion() override; // vtable[0]
	virtual void ~CAI_PassengerBehaviorCompanion() override; // vtable[1]
	virtual void Enable(); // vtable[83]
	virtual void CanExitVehicle(); // vtable[84]
	virtual void FindEntrySequence(); // vtable[85]

	void GetBaseMap();
	void GetVehicleSpeed();
	void CanPlayJostle();
	void UpdateStuckStatus();
	void SelectScheduleOutsideVehicle();
	void CanEnterVehicleImmediately();
	void EnterVehicleImmediately();
	void CanExitAtPosition();
	void GetStuckExitPos();
	void ExitStuckVehicle();
	void UpdateVehicleEntrancePath();
	void UseRadialRouteToEntryPoint();
	void GetArcToEntryPoint();
	void ResetVehicleEntryFailedState();
	void PointIsWithinEntryFailureRadius();
	void CalculateBodyLean();
	void GatherVehicleCollisionConditions();
	void CanFidget();
	void ExtendFidgetDelay();
	void SelectScheduleInsideVehicle();
	void SpeakVehicleConditions();
	void MarkVehicleEntryFailed();
	void FindPathToVehicleEntryPoint();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_PassengerBehaviorCompanion();
};
