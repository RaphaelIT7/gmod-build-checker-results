// Generated header

class CPropCombineBall : public CBaseAnimating, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CPropCombineBall() override; // vtable[0]
	virtual void ~CPropCombineBall() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void OnPhysGunPickup(); // vtable[282]
	virtual void OnPhysGunDrop(); // vtable[283]
	virtual void OverridePropdata(); // vtable[284]
	virtual void ExplodeThink(); // vtable[285]
	virtual void ShouldPuntUseLaunchForces(); // vtable[286]

	void AnimThink();
	void GetBaseMap();
	void GetSpawner();
	void SetState();
	void IsInField();
	void SetRadius();
	void StartAnimating();
	void StopAnimating();
	void LastCaptureTime();
	void StartLifetime();
	void ClearLifetime();
	void InputSetLifetime();
	void SetMass();
	void ShouldHitPlayer();
	void FadeOut();
	void InputFadeAndRespawn();
	void StartWhizSoundThink();
	void SetPlayerLaunched();
	void GetBallHoldDissolveTime();
	void DissolveRampSoundThink();
	void GetBallHoldSoundRampTime();
	void CollisionEventToTrace();
	void DissolveEntity();
	void IsAttractiveTarget();
	void DeflectTowardEnemy();
	void IsHittableEntity();
	void ReplaceInSpawner();
	void CaptureBySpawner();
	void BounceInSpawner();
	void WhizSoundThink();
	void SetBallAsLaunched();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void DieThink();
	void NotifySpawnerOfRemoval();
	void InputKill();
	void InputSocketed();
	void DoExplosion();
	void DissolveThink();
	void InputExplode();
	void OnHitEntity();
	void DoImpactEffect();
};
