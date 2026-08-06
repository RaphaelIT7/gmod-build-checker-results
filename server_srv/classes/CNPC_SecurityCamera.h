// Generated header

class CNPC_SecurityCamera : public CNPCBaseInteractive, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CNPC_SecurityCamera() override; // vtable[0]
	virtual void ~CNPC_SecurityCamera() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void CanInteractWith() override; // vtable[652]
	virtual void HasBeenInteractedWith() override; // vtable[653]
	virtual void NotifyInteraction() override; // vtable[654]
	virtual void InputPowerdown() override; // vtable[655]
	virtual void AlyxStartedInteraction() override; // vtable[656]
	virtual void AlyxFinishedInteraction() override; // vtable[657]
	virtual void CreateSounds() override; // vtable[658]
	virtual void OnAttemptPhysGunPickup() override; // vtable[659]

	void _GLOBAL__sub_I_m_DataMap();
	void OnAttemptPhysGunPickup();
	void Retire();
	void SearchThink();
	void SetLastSightTime();
	void Deploy();
	void GetBaseMap();
	void CNPC_SecurityCamera();
	void SetLastSightTime();
	void UpdateFacing();
	void ActiveThink();
	void DeathThink();
	void PreThink();
	void Ping();
	void Enable();
	void InputEnable();
	void Disable();
	void InputDisable();
	void Toggle();
	void InputToggle();
	void RopesOff();
	void EyeOn();
	void EyeOff();
	void InputRagdoll();
	void RopesOn();
};
