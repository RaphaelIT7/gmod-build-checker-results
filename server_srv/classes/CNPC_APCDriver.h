// Generated header

class CNPC_APCDriver : public CNPC_VehicleDriver
{
public:
	virtual ~CNPC_APCDriver() override; // vtable[0]
	virtual ~CNPC_APCDriver() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Classify() override; // vtable[55]
	virtual void FVisible() override; // vtable[144]
	virtual void IRelationType() override; // vtable[364]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void SquadSlotName() override; // vtable[581]
	virtual void RangeAttack1Conditions() override; // vtable[595]
	virtual void RangeAttack2Conditions() override; // vtable[596]
	virtual void WeaponLOSCondition() override; // vtable[609]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputEnableFiring(); // size[0]
	void InputDisableFiring(); // size[0]
	void GetBaseMap(); // size[0]
	void IsBeingCarried(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
};
