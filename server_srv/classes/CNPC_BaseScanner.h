// Generated header

class CNPC_BaseScanner : public CAI_BasePhysicsFlyingBot, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CNPC_BaseScanner() override; // vtable[0]
	virtual void ~CNPC_BaseScanner() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void MoveToTarget() override; // vtable[654]
	virtual void OnPhysGunPickup(); // vtable[658]
	virtual void OnPhysGunDrop(); // vtable[659]
	virtual void GetScannerSoundPrefix(); // vtable[660]
	virtual void GetMaxSpeed(); // vtable[661]
	virtual void GetEngineSound(); // vtable[662]
	virtual void OverridePathMove(); // vtable[663]
	virtual void AdjustScannerVelocity(); // vtable[664]
	virtual void MoveToAttack(); // vtable[665]
	virtual void MoveExecute_Alive(); // vtable[666]
	virtual void GetGoalDistance(); // vtable[667]
	virtual void AttackDivebomb(); // vtable[668]

	void InputSetFlightSpeed();
	void InputSetDistanceOverride();
	void GetBaseMap();
	void TakeDamageFromPhyscannon();
	void IsHeldByPhyscannon();
	void PlayFlySound();
	void StartSmokeTrail();
	void BlendPhyscannonLaunchSpeed();
	void MoveToDivebomb();
	void IsEnemyPlayerInSuit();
	void GetGoalDirection();
	void IdealGoalForMovement();
	void VelocityToEvade();
	void UpdateHead();
	void ScannerEmitSound();
	void DiveBombSoundThink();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_BaseScanner();
	void Gib();
	void AttackDivebombCollide();
};
