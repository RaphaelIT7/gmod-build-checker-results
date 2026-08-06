// Generated header

class CNPC_CombineDropship : public CBaseHelicopter
{
public:
	virtual void ~CNPC_CombineDropship() override; // vtable[0]
	virtual void ~CNPC_CombineDropship() override; // vtable[1]

	void InputSetLandTarget();
	void InputDropMines();
	void InputSetGunRange();
	void InputStopWaitingForDropoff();
	void InputDropStrider();
	void GetBaseMap();
	void UpdateRotorWashVolume();
	void CalculateSoldierCount();
	void SetLandingState();
	void LandCommon();
	void InputLandLeave();
	void InputLandTake();
	void InputHover();
	void InputDropAPC();
	void DropSoldierContainer();
	void IsHovering();
	void UpdateGroundRotorWashSound();
	void DoRotorWash();
	void GetDropoffFinishPosition();
	void SpawnTroop();
	void InputNPCFinishDustoff();
	void GetAltitude();
	void DropMine();
	void UpdatePickupNavigation();
	void InputPickup();
	void UpdateLandTargetNavigation();
	void UpdateContainerGunFacing();
	void StartCannon();
	void FireCannonRound();
	void StopCannon();
	void DoCombatStuff();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
