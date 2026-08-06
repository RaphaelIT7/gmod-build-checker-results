// Generated header

class CNPC_CombineGunship : public CBaseHelicopter
{
public:
	virtual void ~CNPC_CombineGunship() override; // vtable[0]
	virtual void ~CNPC_CombineGunship() override; // vtable[1]

	void InputSetPenetrationDepth();
	void InputOmniscientOn();
	void InputOmniscientOff();
	void InputBlindfireOn();
	void InputBlindfireOff();
	void InputEnableGroundAttack();
	void InputDisableGroundAttack();
	void InputSetNormalBBox();
	void InputSetDockingBBox();
	void GetBaseMap();
	void CreateBellyBlastEnergyCore();
	void Ping();
	void GroundDistToPosition();
	void PlayPatrolLoop();
	void PlayAngryLoop();
	void GetGroundAttackHitPosition();
	void StartGroundAttack();
	void InputDoGroundAttack();
	void ManageWarningBeam();
	void DoBellyBlastDamage();
	void DoGroundAttackExplosion();
	void StopGroundAttack();
	void FindNearestGunshipCrash();
	void CreateSmokeTrail();
	void UpdateEnemyTarget();
	void PoseGunTowardTargetDirection();
	void GetMissileTarget();
	void FireDamageOutputsUpto();
	void StartCannonBurst();
	void StopCannonBurst();
	void SelfDestruct();
	void BeginDestruct();
	void BeginCrash();
	void InputSelfDestruct();
	void IsTargettingMissile();
	void GetEnemyTarget();
	void MoveHead();
	void FireCannonRound();
	void CheckGroundAttack();
	void DoCombat();
	void InputBecomeInvulnerable();
	void InputBecomeVulnerable();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_CombineGunship();
};
