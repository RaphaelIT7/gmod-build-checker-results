// Generated header

class CNPC_CraneDriver : public CNPC_VehicleDriver
{
public:
	virtual ~CNPC_CraneDriver() override; // vtable[0]
	virtual ~CNPC_CraneDriver() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void TranslateSchedule() override; // vtable[409]
	virtual void StartTask() override; // vtable[410]
	virtual void RunTask() override; // vtable[411]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void OverrideMove() override; // vtable[538]
	virtual void SquadSlotName() override; // vtable[581]
	virtual void RangeAttack1Conditions() override; // vtable[595]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual void DriveVehicle() override; // vtable[652]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputForceDrop(); // size[0]
	void InputForcePickup(); // size[0]
	void GetBaseMap(); // size[0]
	void SetDesiredPosition(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
};
