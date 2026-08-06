// Generated header

class CNPC_VehicleDriver : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_VehicleDriver() override; // vtable[0]
	virtual void ~CNPC_VehicleDriver() override; // vtable[1]
	virtual void DriveVehicle(); // vtable[652]

	void InputStop();
	void InputStopFiring();
	void InputStartFiring();
	void GetBaseMap();
	void CalculatePostPoints();
	void ClearWaypoints();
	void RecalculateSpeeds();
	void WaypointReached();
	void OverridePathMove();
	void CheckForTeleport();
	void InputSetDriversMaxSpeed();
	void InputSetDriversMinSpeed();
	void InputStartForward();
	void InputGotoPathCorner();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_VehicleDriver();
};
