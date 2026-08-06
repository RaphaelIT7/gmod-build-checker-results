// Generated header

class CNPC_Hunter : public CAI_BaseActor
{
public:
	virtual void ~CNPC_Hunter() override; // vtable[0]
	virtual void ~CNPC_Hunter() override; // vtable[1]
	virtual void _ZN11CNPC_Hunter8TaskFailEi() override; // vtable[427]
	virtual void _ZN11CNPC_Hunter8SetSquadEP9CAI_Squad() override; // vtable[582]

	void InputEnableUnplantedShooting();
	void InputDisableUnplantedShooting();
	void InputDodge();
	void InputFlankEnemy();
	void InputDisableShooting();
	void InputEnableShooting();
	void InputEnableSquadShootDelay();
	void InputDisableSquadShootDelay();
	void IsCorporealEnemy();
	void InputFollowStrider();
	void TeslaThink();
	void SetupGlobalModelData();
	void BleedThink();
	void JostleVehicleThink();
	void InputUseSiegeTargets();
	void GetBaseMap();
	void SetupGlobalModelData();
	void LockBothEyes();
	void UnlockBothEyes();
	void UpdateEyes();
	void KillCurrentSiegeTarget();
	void GatherIndoorOutdoorConditions();
	void ShouldCharge();
	void GatherChargeConditions();
	void SelectSiegeSchedule();
	void EnemyIsRightInFrontOfMe();
	void ChargeLookAhead();
	void ChargeSteer();
	void ChargeDamage();
	void HandleChargeImpact();
	void Explode();
	void NumHuntersInMySquad();
	void CanPlantHere();
	void MeleeAttack1ConditionsVsEnemyInVehicle();
	void IsCorporealEnemy();
	void MeleeAttack();
	void CanShootThrough();
	void IsInLargeOutdoorMap();
	void PhysicsDamageEffect();
	void ConsiderFlinching();
	void StartBleeding();
	void DoMuzzleFlash();
	void CountRangedAttackers();
	void DelayRangedAttackers();
	void SelectCombatSchedule();
	void GetShootDir();
	void ClampShootDir();
	void ShouldSeekTarget();
	void BeginVolley();
	void ShootFlechette();
	void LeftFootHit();
	void RightFootHit();
	void BackFootHit();
	void FootFX();
	void GetEnemyVehicle();
	void TaskFindDodgeActivity();
	void PlayerFlashlightOnMyEyes();
	void StriderBusterDetached();
	void SetAim();
	void RelaxAim();
	void UpdateAim();
	void FollowStrider();
	void FollowStrider();
	void CollectSiegeTargets();
	void ManageSiegeTargets();
	void StriderBusterAttached();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Hunter();
};
