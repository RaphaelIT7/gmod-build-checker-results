// Generated header

class CFourWheelServerVehicle : public CBaseServerVehicle
{
public:
	virtual void GetVehicleViewPosition(intparam_1, Vector *param_2, QAngle *param_3, float *param_4) override; // vtable[2]
	virtual void IsVehicleUpright() override; // vtable[13]
	virtual void IsPassengerEntering() override; // vtable[14]
	virtual void IsPassengerExiting() override; // vtable[15]
	virtual void GetVehicleParams() override; // vtable[25]
	virtual void GetVehicleController() override; // vtable[26]
	virtual void NPC_SetDriver(CNPC_VehicleDriver *param_1) override; // vtable[38]
	virtual void NPC_DriveVehicle() override; // vtable[39]
	virtual void IsVehicleBodyInWater() override; // vtable[59]
	virtual void SetVehicle(CBaseEntity *param_1) override; // vtable[63]
	virtual ~CFourWheelServerVehicle(); // vtable[73]
	virtual ~CFourWheelServerVehicle(); // vtable[74]

	void GetBaseMap(); // size[10]
	CFourWheelServerVehicle(); // size[103]
	void InitViewSmoothing(Vector *param_1, QAngle *param_2); // size[146]
	void GetFourWheelVehicle(); // size[52]
	void HasValidFourWheelVehicle(); // size[35]
	void GetVehicleOperatingParams(); // size[44]
	void GetVehicleControlParams(); // size[35]
	void GetFourWheelVehiclePhysics(); // size[32]
	void GetWheelContactPoint(intparam_1, Vector *param_2); // size[82]
};
