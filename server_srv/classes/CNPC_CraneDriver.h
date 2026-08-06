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
	virtual void TranslateSchedule(intparam_1) override; // vtable[409]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void OverrideMove(floatparam_1) override; // vtable[538]
	virtual void SquadSlotName(intparam_1) override; // vtable[581]
	virtual void RangeAttack1Conditions(floatparam_1, floatparam_2) override; // vtable[595]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual void DriveVehicle() override; // vtable[652]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputForceDrop(inputdata_t *param_1); // size[278]
	void InputForcePickup(inputdata_t *param_1); // size[268]
	void GetBaseMap(); // size[10]
	void SetDesiredPosition(Vector *param_1); // size[59]
	void InitCustomSchedules(); // size[352]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
};
