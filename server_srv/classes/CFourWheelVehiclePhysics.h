// Generated header

class CFourWheelVehiclePhysics
{
public:
	virtual void GetDataDescMap(); // vtable[0]

	void GetBaseMap();
	void CFourWheelVehiclePhysics();
	void ~CFourWheelVehiclePhysics();
	void InitializePoseParameters();
	void CalcWheelData();
	void ParseVehicleScript();
	void Spawn();
	void Initialize();
	void SetThrottle();
	void SetMaxThrottle();
	void SetMaxReverseThrottle();
	void SetSteering();
	void SetSteeringDegrees();
	void SetAction();
	void TurnOn();
	void TurnOff();
	void SetBoost();
	void UpdateBooster();
	void SetHasBrakePedal();
	void Teleport();
	void DrawDebugGeometryOverlays();
	void DrawDebugTextOverlays();
	void PlaceWheelDust();
	void VPhysicsUpdate();
	void GetVehicleViewPosition();
	void ResetControls();
	void ReleaseHandbrake();
	void SetHandbrake();
	void EnableMotion();
	void DisableMotion();
	void GetHLSpeed();
	void GetSteering();
	void GetSteeringDegrees();
	void SteeringRest();
	void SteeringTurn();
	void SteeringTurnAnalog();
	void IsBoosting();
	void UpdateDriverControls();
	void Think();
	void SetDisableEngine();
	void VPhysicsGetObjectList();
};
