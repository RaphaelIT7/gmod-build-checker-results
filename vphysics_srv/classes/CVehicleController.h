// Generated header

class CVehicleController : public IPhysicsVehicleController, public IVP_Listener_Object
{
public:
	virtual void ~CVehicleController(); // vtable[0]
	virtual void ~CVehicleController(); // vtable[1]
	virtual void Update(); // vtable[2]
	virtual void GetOperatingParams() override; // vtable[3]
	virtual void GetVehicleParams(); // vtable[4]
	virtual void GetVehicleParamsForChange(); // vtable[5]
	virtual void UpdateBooster(); // vtable[6]
	virtual void GetWheelCount(); // vtable[7]
	virtual void GetWheel(); // vtable[8]
	virtual void GetWheelContactPoint(); // vtable[9]
	virtual void SetSpringLength(); // vtable[10]
	virtual void SetWheelFriction(); // vtable[11]
	virtual void OnVehicleEnter(); // vtable[12]
	virtual void OnVehicleExit(); // vtable[13]
	virtual void SetEngineDisabled(); // vtable[14]
	virtual void IsEngineDisabled(); // vtable[15]
	virtual void GetCarSystemDebugData(); // vtable[16]
	virtual void VehicleDataReload(); // vtable[17]
	virtual void event_object_deleted(); // vtable[18]
	virtual void event_object_created(); // vtable[19]
	virtual void event_object_revived(); // vtable[20]
	virtual void event_object_frozen(); // vtable[21]
	virtual void IsBoosting(); // vtable[22]

	void CreateIVPObjects();
	void GetWheelContactPoint();
	void CreateWheel();
	void CalcEngineTransmission();
	void CreateTraceData();
	void UpdateSkidding();
	void UpdatePowerslide();
	void ResetState();
	void CVehicleController();
	void AttachListener();
	void CreateWheel();
	void CreateTraceData();
	void InitCarSystemBody();
	void InitCarSystemWheels();
	void CreateIVPObjects();
	void InitCarSystem();
	void ~CVehicleController();
	void event_object_deleted();
	void ~CVehicleController();
	void InitVehicleData();
	void CVehicleController();
	void UpdatePowerslide();
	void UpdateEngineTurboStart();
	void UpdateEngineTurboFinish();
	void UpdateHandbrake();
	void UpdateSkidding();
	void UpdateExtraForces();
	void UpdateWheelPositions();
	void CalcSteering();
	void UpdateSteering();
	void CalcEngineTransmission();
	void CalcEngine();
	void UpdateEngine();
	void WriteToTemplate();
	void InitFromTemplate();
	void event_object_created();
	void event_object_revived();
	void event_object_frozen();
};
