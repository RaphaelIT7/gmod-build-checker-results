// Generated header

class CRagdollProp : public CBaseAnimating, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CRagdollProp() override; // vtable[0]
	virtual void ~CRagdollProp() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void SetDamageEntity(); // vtable[282]
	virtual void OnPhysGunPickup(); // vtable[283]
	virtual void OnPhysGunDrop(); // vtable[284]
	virtual void PhysGunLaunchAngularImpulse(); // vtable[285]
	virtual void SetBuildRagdollFunction(); // vtable[286]

	void SetDebrisThink();
	void InputEnableMotion();
	void InputDisableMotion();
	void InputTurnOff();
	void InputStartRadgollBoogie();
	void ClearFlagsThink();
	void InputTurnOn();
	void FadeOutThink();
	void GetBaseMap();
	void DisableAutoFade();
	void SetSourceClassName();
	void CalcRagdollSize();
	void CRagdollProp();
	void InitRagdollAnimation();
	void HasPhysgunInteraction();
	void PhysGunLaunchAngularImpulse();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void HandleFirstCollisionInteractions();
	void SetOverlaySequence();
	void RecheckCollisionFilter();
	void UpdateNetworkDataFromVPhysics();
	void IsFading();
	void FadeOut();
	void InputFadeAndRemove();
	void SetUnragdoll();
	void DisableMotion();
	void EnableConstraints();
	void RemoveInternalConstraint();
	void SolveRagdollBone();
	void NormalizeRagdoll();
	void RagdollUpdatePhysics();
	void ClearBoneControllers();
	void GetAngleOverrideFromCurrentState();
	void InitRagdoll();
};
