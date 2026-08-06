// Generated header

class CNPC_Manhack : public CNPCBaseInteractive, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CNPC_Manhack() override; // vtable[0]
	virtual void ~CNPC_Manhack() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void MoveToTarget() override; // vtable[654]
	virtual void OnPhysGunPickup(); // vtable[664]
	virtual void OnPhysGunDrop(); // vtable[665]

	void InputDisableSwarm();
	void CrashTouch();
	void InputUnpack();
	void TakeDamageFromPhyscannon();
	void GetBaseMap();
	void HitPhysicsObject();
	void TakeDamageFromPhyscannon();
	void TakeDamageFromVehicle();
	void TakeDamageFromPhysicsImpact();
	void CreateSmokeTrail();
	void DestroySmokeTrail();
	void IsFlyingActivity();
	void Loiter();
	void MaintainGroundHeight();
	void TurnHeadRandomly();
	void MoveCollisionMask();
	void Splash();
	void ComputeSliceBounceVelocity();
	void IsHeldByPhyscannon();
	void Bump();
	void SpinBlades();
	void SoundInit();
	void StartEngine();
	void BladesInit();
	void ManhackMaxSpeed();
	void KillSprites();
	void IsInEffectiveTargetZone();
	void StartLoitering();
	void GetMaxEnginePower();
	void UpdatePanels();
	void ShowHostile();
	void StartBurst();
	void StopBurst();
	void Slice();
	void CheckCollisions();
	void StartEye();
	void SetEyeState();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void PlayFlySound();
	void MoveExecute_Alive();
	void MoveExecute_Dead();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Manhack();
	void CanInteractWith();
	void HasBeenInteractedWith();
	void NotifyInteraction();
};
