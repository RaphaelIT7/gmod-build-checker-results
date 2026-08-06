// Generated header

class CWeaponPhysCannon : public CBaseHL2MPCombatWeapon
{
public:
	virtual void ~CWeaponPhysCannon() override; // vtable[0]
	virtual void ~CWeaponPhysCannon() override; // vtable[1]

	void GetBaseMap();
	void CWeaponPhysCannon();
	void DryFire();
	void PrimaryFireEffect();
	void Physgun_OnPhysGunPickup();
	void ApplyVelocityBasedForce();
	void TraceLength();
	void EntityAllowsPunts();
	void FindObjectTrace();
	void FindObjectInCone();
	void DoEffectIdle();
	void CanPickupObject();
	void GetLoadPercentage();
	void GetMotorSound();
	void DetachObject();
	void DetachObject();
	void UpdateObject();
	void StartEffects();
	void DoEffectClosed();
	void DoMegaEffectClosed();
	void DoMegaEffectReady();
	void DoEffectReady();
	void DoEffectHolding();
	void DoEffectLaunch();
	void OpenElements();
	void OpenElements();
	void CheckForTarget();
	void CloseElements();
	void StopEffects();
	void DestroyEffects();
	void WaitForUpgradeThink();
	void ForceDrop();
	void DropIfEntityHeld();
	void AttachObject();
	void FindObject();
	void DoEffectNone();
	void DoEffect();
	void PuntNonVPhysics();
	void PuntVPhysics();
	void PuntRagdoll();
	void LaunchObject();
	void BeginUpgrade();
};
