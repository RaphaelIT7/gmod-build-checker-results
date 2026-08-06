// Generated header

class CPropVehiclePrisonerPod : public CPhysicsProp, public IDrivableVehicle
{
public:
	virtual void ~CPropVehiclePrisonerPod() override; // vtable[0]
	virtual void ~CPropVehiclePrisonerPod() override; // vtable[1]
	virtual void TestHitboxes() override; // vtable[15]
	virtual void PassengerShouldReceiveDamage(); // vtable[327]
	virtual void GetDriver(); // vtable[328]
	virtual void ProcessMovement(); // vtable[329]
	virtual void FinishMove(); // vtable[330]
	virtual void CanEnterVehicle(); // vtable[331]
	virtual void CanExitVehicle(); // vtable[332]
	virtual void SetVehicleEntryAnim(); // vtable[333]
	virtual void SetVehicleExitAnim(); // vtable[334]
	virtual void EnterVehicle(); // vtable[335]
	virtual void AllowBlockedExit(); // vtable[336]
	virtual void AllowMidairExit(); // vtable[337]
	virtual void PreExitVehicle(); // vtable[338]
	virtual void ExitVehicle(); // vtable[339]
	virtual void ItemPostFrame(); // vtable[340]
	virtual void SetupMove(); // vtable[341]
	virtual void GetVehicleScriptName(); // vtable[342]

	void _GLOBAL__sub_I_m_DataMap();
	void CanEnterVehicle();
	void GetDriver();
	void InputExitVehicle();
	void CanExitVehicle();
	void InputEnterVehicleImmediate();
	void InputLock();
	void SetVehicleEntryAnim();
	void InputUnlock();
	void EnterVehicle();
	void ExitVehicle();
	void InputClose();
	void InputEnterVehicle();
	void InputOpen();
	void GetBaseMap();
	void UpdateWaterLevel();
	void ResetUseKey();
	void PassengerShouldReceiveDamage();
	void ProcessMovement();
	void FinishMove();
	void AllowBlockedExit();
	void AllowMidairExit();
	void PreExitVehicle();
	void ItemPostFrame();
	void SetupMove();
	void GetVehicleScriptName();
	void SetVehicleExitAnim();
};
