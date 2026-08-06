// Generated header

class CNPC_RollerMine : public CNPCBaseInteractive, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CNPC_RollerMine() override; // vtable[0]
	virtual void ~CNPC_RollerMine() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void _ZN15CNPC_RollerMine7RunTaskEPK6Task_t() override; // vtable[411]
	virtual void CanInteractWith() override; // vtable[652]
	virtual void HasBeenInteractedWith() override; // vtable[653]
	virtual void NotifyInteraction() override; // vtable[654]
	virtual void InputPowerdown() override; // vtable[655]
	virtual void AlyxStartedInteraction() override; // vtable[656]
	virtual void AlyxFinishedInteraction() override; // vtable[657]
	virtual void OnPhysGunPickup() override; // vtable[658]
	virtual void OnPhysGunDrop() override; // vtable[659]

	void SpikeTouch();
	void InputTurnOn();
	void InputTurnOff();
	void InputRespondToChirp();
	void Explode();
	void InputRespondToExplodeChirp();
	void GetStunDelay();
	void OnPhysGunDrop();
	void GetBaseMap();
	void Bury();
	void EmbedTouch();
	void WakeupMine();
	void WakeNeighbors();
	void BecomePhysical();
	void GetHackedIdleSchedule();
	void SetRollerSkin();
	void Close();
	void IsPlayerVehicle();
	void ShockTarget();
	void ShockTouch();
	void CloseTouch();
	void UnstickFromVehicle();
	void OnPhysGunPickup();
	void InputConstraintBroken();
	void GetVehicleStuckTo();
	void Hop();
	void PreDetonate();
	void RollingSpeed();
	void GetStunDelay();
	void EmbedOnGroundImpact();
	void StopRollingSound();
	void UpdateRollingSound();
	void StopPingSound();
	void UpdatePingSound();
	void EnemyInVehicle();
	void Open();
	void NotifyInteraction();
	void VehicleHeading();
	void CountRollersOnMyVehicle();
	void AnnounceArrivalToOthers();
	void StickToVehicle();
	void InputJoltVehicle();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CanInteractWith();
	void HasBeenInteractedWith();
};
