// Generated header

class CPrisonerPodServerVehicle : public CBaseServerVehicle
{
public:
	virtual void GetVehicleViewPosition(int param_1, Vector *param_2, QAngle *param_3, float *param_4) override; // vtable[2]
	virtual void ItemPostFrame(CBasePlayer *param_1) override; // vtable[7]
	virtual void IsPassengerEntering() override; // vtable[14]
	virtual void IsPassengerExiting() override; // vtable[15]

	void GetPod(); // size[32]
};
