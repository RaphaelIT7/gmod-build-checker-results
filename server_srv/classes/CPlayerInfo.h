// Generated header

class CPlayerInfo : public IBotController, public IPlayerInfo
{
public:
	virtual void SetAbsOrigin(); // vtable[0]
	virtual void SetAbsAngles(); // vtable[1]
	virtual void SetLocalOrigin(); // vtable[2]
	virtual void GetLocalOrigin(); // vtable[3]
	virtual void SetLocalAngles(); // vtable[4]
	virtual void GetLocalAngles(); // vtable[5]
	virtual void RemoveAllItems(); // vtable[6]
	virtual void SetActiveWeapon(); // vtable[7]
	virtual void IsEFlagSet(); // vtable[8]
	virtual void RunPlayerMove() override; // vtable[9]
	virtual void GetName(); // vtable[10]
	virtual void GetUserID(); // vtable[11]
	virtual void GetNetworkIDString(); // vtable[12]
	virtual void GetTeamIndex(); // vtable[13]
	virtual void ChangeTeam(); // vtable[14]
	virtual void GetFragCount(); // vtable[15]
	virtual void GetDeathCount(); // vtable[16]
	virtual void IsConnected(); // vtable[17]
	virtual void GetArmorValue(); // vtable[18]
	virtual void IsHLTV(); // vtable[19]
	virtual void IsReplay(); // vtable[20]
	virtual void IsPlayer(); // vtable[21]
	virtual void IsFakeClient(); // vtable[22]
	virtual void IsDead(); // vtable[23]
	virtual void IsInAVehicle() override; // vtable[24]
	virtual void IsObserver(); // vtable[25]
	virtual void GetAbsOrigin(); // vtable[26]
	virtual void GetAbsAngles(); // vtable[27]
	virtual void GetPlayerMins(); // vtable[28]
	virtual void GetPlayerMaxs(); // vtable[29]
	virtual void GetWeaponName(); // vtable[30]
	virtual void GetModelName(); // vtable[31]
	virtual void GetHealth(); // vtable[32]
	virtual void GetMaxHealth(); // vtable[33]
	virtual void SetLastUserCommand(); // vtable[34]
	virtual void GetLastUserCommand(); // vtable[35]

	void GetName();
	void GetUserID();
	void ChangeTeam();
	void GetFragCount();
	void GetDeathCount();
	void IsConnected();
	void GetArmorValue();
	void IsHLTV();
	void IsReplay();
	void IsPlayer();
	void IsFakeClient();
	void IsDead();
	void IsInAVehicle();
	void IsObserver();
	void GetPlayerMins();
	void GetPlayerMaxs();
	void GetModelName();
	void GetHealth();
	void GetMaxHealth();
	void GetLastUserCommand();
	void GetAbsOrigin();
	void GetAbsAngles();
	void GetWeaponName();
	void GetTeamIndex();
	void SetLastUserCommand();
	void RunPlayerMove();
	void GetNetworkIDString();
};
