// Generated header

class CFourWheelServerVehicle : public CBaseServerVehicle
{
public:
	virtual void GetVehicleViewPosition() override; // vtable[2]
	virtual void IsVehicleUpright() override; // vtable[13]
	virtual void IsPassengerEntering() override; // vtable[14]
	virtual void IsPassengerExiting() override; // vtable[15]
	virtual void GetVehicleParams() override; // vtable[25]
	virtual void GetVehicleController() override; // vtable[26]
	virtual void NPC_SetDriver() override; // vtable[38]
	virtual void NPC_DriveVehicle() override; // vtable[39]
	virtual void IsVehicleBodyInWater() override; // vtable[59]
	virtual void SetVehicle() override; // vtable[63]
	virtual ~CFourWheelServerVehicle(); // vtable[73]
	virtual ~CFourWheelServerVehicle(); // vtable[74]

	void GetBaseMap(); // size[0]
	CFourWheelServerVehicle(); // size[0]
	void InitViewSmoothing(); // size[0]
	void GetFourWheelVehicle(); // size[0]
	void HasValidFourWheelVehicle(); // size[0]
	void GetVehicleOperatingParams(); // size[0]
	void GetVehicleControlParams(); // size[0]
	void GetFourWheelVehiclePhysics(); // size[0]
	void GetWheelContactPoint(); // size[0]
};
