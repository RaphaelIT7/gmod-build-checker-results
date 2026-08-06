// Generated header

class CCraneServerVehicle : public CBaseServerVehicle
{
public:
	virtual void GetVehicleViewPosition(int param_1, Vector *param_2, QAngle *param_3, float *param_4) override; // vtable[2]
	virtual void IsPassengerEntering() override; // vtable[14]
	virtual void IsPassengerExiting() override; // vtable[15]
	virtual void NPC_SetDriver(CNPC_VehicleDriver *param_1) override; // vtable[38]
	virtual void NPC_DriveVehicle() override; // vtable[39]

	void GetCrane(); // size[32]
};
