// Generated header

class CNPC_Combine : public CAI_BaseActor
{
public:
	virtual void ~CNPC_Combine() override; // vtable[0]
	virtual void ~CNPC_Combine() override; // vtable[1]
	virtual void _ZN12CNPC_Combine10BodyTargetERK6Vectorb() override; // vtable[137]
	virtual void CanGrenadeEnemy(); // vtable[709]
	virtual void CanAltFireEnemy(); // vtable[710]

	void InputStartPatrolling();
	void InputStopPatrolling();
	void InputHitByBugbait();
	void InputAssault();
	void InputThrowGrenadeAtTarget();
	void CanAltFireEnemy();
	void InputLookOff();
	void InputLookOn();
	void GetBaseMap();
	void DelayAltFireAttack();
	void DelaySquadAltFireAttack();
	void StartTaskChaseEnemyContinuously();
	void RunTaskChaseEnemyContinuously();
	void AnnounceAssault();
	void AnnounceEnemyType();
	void AnnounceEnemyKill();
	void ShouldChargePlayer();
	void SelectScheduleAttack();
	void SelectCombatSchedule();
	void DeathSound();
	void CheckCanThrowGrenade();
	void CanThrowGrenade();
	void GetAltFireTarget();
	void HasShotgun();
	void ActiveWeaponIsFullyLoaded();
	void IsUsingTacticalVariant();
	void IsRunningApproachEnemySchedule();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Combine();
	void SelectScheduleAttack();
	void ~CCombineStandoffBehavior();
	void ~CCombineStandoffBehavior();
};
