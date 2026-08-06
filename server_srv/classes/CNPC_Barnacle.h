// Generated header

class CNPC_Barnacle : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_Barnacle() override; // vtable[0]
	virtual void ~CNPC_Barnacle() override; // vtable[1]

	void InputSetDropTongueSpeed();
	void GetBaseMap();
	void SetAltitude();
	void CanPickup();
	void WaitForPhysicsObjectToSettle();
	void PlayLiftingScream();
	void UpdatePlayerConstraint();
	void AttachRagdollToTongue();
	void SprayBlood();
	void RemoveRagdoll();
	void LostPrey();
	void SpitPrey();
	void WaitForRagdollToSettle();
	void SwallowPrey();
	void InputLetGo();
	void PullEnemyTorwardsMouth();
	void LiftPlayer();
	void LiftNPC();
	void LiftRagdoll();
	void LiftPhysicsObject();
	void LiftPrey();
	void OnTongueTipUpdated();
	void UpdateTongue();
	void AttachTongueToTarget();
	void WaitTillDead();
	void SpawnDeathGibs();
	void IsPoisonous();
	void BitePrey();
	void TongueTouchEnt();
	void InitTonguePosition();
	void DropTongue();
	void InputDropTongue();
	void BarnacleThink();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Barnacle();
};
