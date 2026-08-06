// Generated header

class CHL2_Player : public CBaseMultiplayerPlayer
{
public:
	virtual void ~CHL2_Player() override; // vtable[0]
	virtual void ~CHL2_Player() override; // vtable[1]
	virtual void _ZN11CHL2_Player10RemoveSuitEv() override; // vtable[500]
	virtual void SuspendUse(); // vtable[550]
	virtual void CommanderMode(); // vtable[551]
	virtual void StartAutoSprint(); // vtable[552]
	virtual void StartSprinting(); // vtable[553]
	virtual void StopSprinting(); // vtable[554]
	virtual void InitSprinting(); // vtable[555]
	virtual void CanSprint(); // vtable[556]
	virtual void EnableSprint(); // vtable[557]
	virtual void GetIdleTime(); // vtable[558]
	virtual void GetMoveTime(); // vtable[559]
	virtual void GetLastDamageTime(); // vtable[560]
	virtual void IsDucking(); // vtable[561]
	virtual void Weapon_Lower(); // vtable[562]
	virtual void Weapon_Ready(); // vtable[563]
	virtual void IsHoldingEntity(); // vtable[564]
	virtual void HandleSpeedChanges(); // vtable[565]
	virtual void UpdateWeaponPosture(); // vtable[566]
	virtual void NetworkStateChanged_m_bSprintEnabled(); // vtable[567]
	virtual void NetworkStateChanged_m_bSprintEnabled(); // vtable[568]
	virtual void NetworkStateChanged_m_fIsWalking(); // vtable[569]
	virtual void NetworkStateChanged_m_fIsWalking(); // vtable[570]

	void InputDisableFlashlight();
	void InputEnableFlashlight();
	void InputIgnoreFallDamage();
	void InputIgnoreFallDamageWithoutReset();
	void InputForceDropPhysObjects();
	void OnSquadMemberKilled();
	void GetBaseMap();
	void CHL2_Player();
	void HandleArmorReduction();
	void StartAdmireGlovesAnimation();
	void HandleAdmireGlovesAnimation();
	void StartWalking();
	void StopWalking();
	void CanZoom();
	void StartZooming();
	void StopZooming();
	void CheckSuitZoom();
	void ToggleZoom();
	void IsZooming();
	void GetSquadCommandRepresentative();
	void GetNumSquadCommandables();
	void GetNumSquadCommandableMedics();
	void CommanderExecuteOne();
	void SuitPower_Initialize();
	void SuitPower_Drain();
	void SuitPower_Charge();
	void SuitPower_IsDeviceActive();
	void SuitPower_AddDevice();
	void SuitPower_RemoveDevice();
	void SuitPower_ShouldRecharge();
	void SuitPower_Update();
	void ApplyBattery();
	void CheckFlashlight();
	void CombineBallSocketed();
	void NotifyScriptsOfDeath();
	void StartWaterDeathSounds();
	void StopWaterDeathSounds();
	void GetPlayerProxy();
	void MissedAR2AltFire();
	void FirePlayerProxyOutput();
	void CommanderFindGoal();
	void CommanderExecute();
	void CommanderUpdate();
	void NetworkStateChanged();
	void NetworkStateChanged();
};
