// Generated header

class CPropVehicleChoreoGeneric : public CDynamicProp, public IDrivableVehicle
{
public:
	virtual void ~CPropVehicleChoreoGeneric() override; // vtable[0]
	virtual void ~CPropVehicleChoreoGeneric() override; // vtable[1]
	virtual void TestHitboxes() override; // vtable[15]
	virtual void PassengerShouldReceiveDamage(); // vtable[323]
	virtual void GetDriver(); // vtable[324]
	virtual void ProcessMovement(); // vtable[325]
	virtual void FinishMove(); // vtable[326]
	virtual void CanEnterVehicle(); // vtable[327]
	virtual void CanExitVehicle(); // vtable[328]
	virtual void SetVehicleEntryAnim(); // vtable[329]
	virtual void SetVehicleExitAnim(); // vtable[330]
	virtual void EnterVehicle(); // vtable[331]
	virtual void AllowBlockedExit(); // vtable[332]
	virtual void AllowMidairExit(); // vtable[333]
	virtual void PreExitVehicle(); // vtable[334]
	virtual void ExitVehicle(); // vtable[335]
	virtual void ItemPostFrame(); // vtable[336]
	virtual void SetupMove(); // vtable[337]
	virtual void GetVehicleScriptName(); // vtable[338]

	void CanEnterVehicle();
	void CanExitVehicle();
	void GetDriver();
	void InputLock();
	void InputUnlock();
	void InputExitVehicle();
	void InputSetCanShoot();
	void InputEnterVehicle();
	void InputEnterVehicleImmediate();
	void InputSetMaxPitch();
	void InputSetMinPitch();
	void InputSetMinYaw();
	void InputSetMaxYaw();
	void InputViewlock();
	void SetVehicleEntryAnim();
	void InputUseAttachmentEyes();
	void EnterVehicle();
	void ExitVehicle();
	void InputClose();
	void InputOpen();
	void GetBaseMap();
	void ResetUseKey();
	void ParseViewParams();
	void PassengerShouldReceiveDamage();
	void ProcessMovement();
	void FinishMove();
	void AllowBlockedExit();
	void AllowMidairExit();
	void PreExitVehicle();
	void ItemPostFrame();
	void SetupMove();
	void GetVehicleScriptName();
	void NetworkStateChanged();
	void ~CPropVehicleChoreoGeneric();
	void ~CPropVehicleChoreoGeneric();
	void NetworkStateChanged();
	void SetVehicleExitAnim();
};
