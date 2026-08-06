// Generated header

class CNPC_FloorTurret : public CNPCBaseInteractive, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CNPC_FloorTurret() override; // vtable[0]
	virtual void ~CNPC_FloorTurret() override; // vtable[1]
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
	virtual void OnPhysGunPickup() override; // vtable[658]
	virtual void OnPhysGunDrop() override; // vtable[659]
	virtual void HasPreferredCarryAnglesForPlayer() override; // vtable[660]
	virtual void PreferredCarryAngles() override; // vtable[661]
	virtual void OnAttemptPhysGunPickup() override; // vtable[662]
	virtual void Retire() override; // vtable[663]
	virtual void Deploy(); // vtable[664]
	virtual void ActiveThink(); // vtable[665]
	virtual void SearchThink(); // vtable[666]
	virtual void AutoSearchThink(); // vtable[667]
	virtual void TippedThink(); // vtable[668]
	virtual void InactiveThink(); // vtable[669]
	virtual void SuppressThink(); // vtable[670]
	virtual void DisabledThink(); // vtable[671]
	virtual void SelfDestructThink(); // vtable[672]
	virtual void BreakThink(); // vtable[673]
	virtual void HackFindEnemy(); // vtable[674]
	virtual void PreThink(); // vtable[675]
	virtual void Shoot(); // vtable[676]
	virtual void SetEyeState(); // vtable[677]
	virtual void OnSide(); // vtable[678]

	void HasPreferredCarryAnglesForPlayer();
	void PreferredCarryAngles();
	void OnAttemptPhysGunPickup();
	void OnPhysGunDrop();
	void InputSelfDestruct();
	void OnPhysGunPickup();
	void InputDepleteAmmo();
	void InputRestoreAmmo();
	void GetBaseMap();
	void WasJustDroppedByPlayer();
	void UpdateFacing();
	void DryFire();
	void Ping();
	void Enable();
	void InputEnable();
	void ReturnToLife();
	void Disable();
	void InputDisable();
	void Toggle();
	void InputToggle();
	void ToggleUse();
	void SpinUp();
	void SpinDown();
	void UpdateMuzzleMatrix();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_FloorTurret();
	void CanInteractWith();
	void HasBeenInteractedWith();
	void NotifyInteraction();
};
