// Generated header

class CChoreoGenericServerVehicle : public CBaseServerVehicle
{
public:
	virtual void GetVehicleViewPosition(int param_1, Vector *param_2, QAngle *param_3, float *param_4) override; // vtable[2]
	virtual void IsPassengerUsingStandardWeapons(int param_1) override; // vtable[3]
	virtual void ItemPostFrame(CBasePlayer *param_1) override; // vtable[7]
	virtual void SetPlayerCanShoot(bool param_1, int param_2); // vtable[73]

	void SetPlayerCanShoot(bool param_1, int param_2); // size[59]
	void GetBaseMap(); // size[7]
	void GetVehicle(); // size[32]
};
