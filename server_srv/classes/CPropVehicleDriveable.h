// Generated header

class CPropVehicleDriveable : public CPropVehicle, public IDrivableVehicle, public INPCPassengerCarrier
{
public:
	virtual void ~CPropVehicleDriveable() override; // vtable[0]
	virtual void ~CPropVehicleDriveable() override; // vtable[1]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void TestHitboxes() override; // vtable[15]
	virtual void CreateServerVehicle(); // vtable[287]
	virtual void VehicleAngleVectors(); // vtable[288]
	virtual void DriveVehicle(); // vtable[289]
	virtual void IsOverturned(); // vtable[290]
	virtual void IsVehicleBodyInWater(); // vtable[291]
	virtual void GetDriver(); // vtable[292]
	virtual void ItemPostFrame(); // vtable[293]
	virtual void SetupMove(); // vtable[294]
	virtual void ProcessMovement(); // vtable[295]
	virtual void FinishMove(); // vtable[296]
	virtual void CanEnterVehicle(); // vtable[297]
	virtual void CanExitVehicle(); // vtable[298]
	virtual void SetVehicleEntryAnim(); // vtable[299]
	virtual void SetVehicleExitAnim(); // vtable[300]
	virtual void EnterVehicle(); // vtable[301]
	virtual void AllowBlockedExit(); // vtable[302]
	virtual void AllowMidairExit(); // vtable[303]
	virtual void PreExitVehicle(); // vtable[304]
	virtual void ExitVehicle(); // vtable[305]
	virtual void GetVehicleScriptName(); // vtable[306]
	virtual void PassengerShouldReceiveDamage(); // vtable[307]
	virtual void ShouldThink(); // vtable[308]
	virtual void NPC_CanEnterVehicle(); // vtable[309]
	virtual void NPC_CanExitVehicle(); // vtable[310]
	virtual void NPC_AddPassenger(); // vtable[311]
	virtual void NPC_RemovePassenger(); // vtable[312]
	virtual void NPC_FinishedEnterVehicle(); // vtable[313]
	virtual void NPC_FinishedExitVehicle(); // vtable[314]

	void ItemPostFrame();
	void FinishMove();
	void AllowMidairExit();
	void PreExitVehicle();
	void GetVehicleScriptName();
	void SetVehicleEntryAnim();
	void SetVehicleExitAnim();
	void NPC_FinishedEnterVehicle();
	void NPC_FinishedExitVehicle();
	void AllowBlockedExit();
	void PassengerShouldReceiveDamage();
	void ProcessMovement();
	void GetDriver();
	void NPC_CanEnterVehicle();
	void NPC_CanExitVehicle();
	void NPC_AddPassenger();
	void CanExitVehicle();
	void InputTurnOff();
	void NPC_RemovePassenger();
	void CanEnterVehicle();
	void InputTurnOn();
	void InputLock();
	void InputUnlock();
	void GetBaseMap();
	void DestroyServerVehicle();
	void ResetUseKey();
	void DriveVehicle();
	void SetupMove();
	void IsEngineOn();
	void StartEngine();
	void StopEngine();
	void EnterVehicle();
	void ExitVehicle();
	void CPropVehicleDriveable();
};
