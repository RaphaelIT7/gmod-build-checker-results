// Generated header

class CNPC_PlayerCompanion : public CAI_PlayerAlly
{
public:
	virtual void ~CNPC_PlayerCompanion() override; // vtable[0]
	virtual void ~CNPC_PlayerCompanion() override; // vtable[1]
	virtual void SelectModel(); // vtable[722]
	virtual void DoCustomSpeechAI(); // vtable[723]
	virtual void PredictPlayerPush(); // vtable[724]
	virtual void SelectScheduleDanger(); // vtable[725]
	virtual void SelectSchedulePriorityAction(); // vtable[726]
	virtual void SelectScheduleNonCombat(); // vtable[727]
	virtual void SelectScheduleCombat(); // vtable[728]
	virtual void CanReload(); // vtable[729]
	virtual void ShouldDeferToFollowBehavior(); // vtable[730]
	virtual void IgnorePlayerPushing(); // vtable[731]
	virtual void IsReadinessCapable(); // vtable[732]
	virtual void UpdateReadiness(); // vtable[733]
	virtual void GetReadinessDecay(); // vtable[734]
	virtual void ReadinessLevelChanged(); // vtable[735]
	virtual void IsAllowedToAim(); // vtable[736]
	virtual void LocateEnemySound(); // vtable[737]
	virtual void GetFollowBehavior(); // vtable[738]

	void InputLockReadiness();
	void InputEnableAlwaysTransition();
	void InputDisableAlwaysTransition();
	void InputEnableWeaponPickup();
	void InputDisableWeaponPickup();
	void InputGiveWeapon();
	void OnObstructionPreSteer();
	void InputCancelEnterVehicle();
	void GetReadinessLevel();
	void GetBaseMap();
	void SelectSchedulePlayerPush();
	void AllowReadinessValueChange();
	void SetReadinessValue();
	void AddReadiness();
	void SubtractReadiness();
	void SetReadinessLevel();
	void InputSetReadinessPanic();
	void InputSetReadinessStealth();
	void InputSetReadinessLow();
	void InputSetReadinessMedium();
	void InputSetReadinessHigh();
	void GetReadinessLevel();
	void SetAimTarget();
	void StopAiming();
	void ShouldBeAiming();
	void TranslateActivityReadiness();
	void HasAimLOS();
	void FindNewAimTarget();
	void IsSafeFromFloorTurret();
	void CleanupCoverSearch();
	void FindMortarCoverPos();
	void IsMortar();
	void IsSniper();
	void IsTurret();
	void IsGunship();
	void ShouldAlwaysTransition();
	void LockReadiness();
	void UnlockReadiness();
	void ShouldDeferToPassengerBehavior();
	void CanEnterVehicle();
	void CanExitVehicle();
	void InputExitVehicle();
	void EnterVehicle();
	void InputEnterVehicle();
	void InputEnterVehicleImmediately();
	void PrepareReadinessRemap();
	void SetupCoverSearch();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
