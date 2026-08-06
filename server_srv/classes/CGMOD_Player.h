// Generated header

class CGMOD_Player : public CHL2MP_Player
{
public:
	virtual void ~CGMOD_Player() override; // vtable[0]
	virtual void ~CGMOD_Player() override; // vtable[1]
	virtual void Event_Killed() override; // vtable[68]
	virtual void GetPlayerColor(); // vtable[575]
	virtual void GetWeaponColor(); // vtable[576]
	virtual void SetPlayerColor(); // vtable[577]
	virtual void SetWeaponColor(); // vtable[578]

	void _GLOBAL__sub_I_PlayStepSound();
	void _GLOBAL__sub_I_GetServerClass();
	void CalcView();
	void GetSnapAngles();
	void SnapToGrid();
	void GetBaseMap();
	void CGMOD_Player();
	void Kill();
	void KillSilent();
	void ResetForceTransmitTimes();
	void onDisconnect();
	void GetUniqueID();
	void StartWalking();
	void StopWalking();
	void GetPlayerInfo();
	void GetPlayerInfoFloat();
	void PlayGesture();
};
