// Generated header

class CPropCrane : public CBaseProp, public IDrivableVehicle
{
public:
	virtual void ~CPropCrane() override; // vtable[0]
	virtual void ~CPropCrane() override; // vtable[1]
	virtual void TestHitboxes() override; // vtable[15]
	virtual void _ZN10CPropCrane14CreateVPhysicsEv() override; // vtable[157]
	virtual void PassengerShouldReceiveDamage(); // vtable[283]
	virtual void GetDriver(); // vtable[284]
	virtual void ItemPostFrame(); // vtable[285]
	virtual void SetupMove(); // vtable[286]
	virtual void ProcessMovement(); // vtable[287]
	virtual void FinishMove(); // vtable[288]
	virtual void CanEnterVehicle(); // vtable[289]
	virtual void CanExitVehicle(); // vtable[290]
	virtual void SetVehicleEntryAnim(); // vtable[291]
	virtual void SetVehicleExitAnim(); // vtable[292]
	virtual void EnterVehicle(); // vtable[293]
	virtual void AllowBlockedExit(); // vtable[294]
	virtual void AllowMidairExit(); // vtable[295]
	virtual void PreExitVehicle(); // vtable[296]
	virtual void ExitVehicle(); // vtable[297]
	virtual void GetVehicleScriptName(); // vtable[298]

	void ItemPostFrame();
	void CanEnterVehicle();
	void CanExitVehicle();
	void GetDriver();
	void InputLock();
	void InputUnlock();
	void PreExitVehicle();
	void InputForcePlayerIn();
	void EnterVehicle();
	void ExitVehicle();
	void GetBaseMap();
	void InitCraneSpeeds();
	void ResetUseKey();
	void RecalculateCraneTip();
	void TurnMagnetOn();
	void TurnMagnetOff();
	void DriveCrane();
	void GetCraneTipPosition();
	void GetCraneTipPosition();
	void SetNPCDriver();
	void RunCraneMovement();
	void SetupMove();
	void PassengerShouldReceiveDamage();
	void ProcessMovement();
	void FinishMove();
	void AllowBlockedExit();
	void AllowMidairExit();
	void GetVehicleScriptName();
	void SetVehicleEntryAnim();
	void SetVehicleExitAnim();
};
