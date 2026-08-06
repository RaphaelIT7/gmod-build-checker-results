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
	virtual void FVisible(CBaseEntity *param_1, intparam_2, CBaseEntity * *param_3) override; // vtable[144]
	virtual void IRelationType(CBaseEntity *param_1) override; // vtable[364]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void SquadSlotName(intparam_1) override; // vtable[581]
	virtual void RangeAttack1Conditions(floatparam_1, floatparam_2) override; // vtable[595]
	virtual void RangeAttack2Conditions(floatparam_1, floatparam_2) override; // vtable[596]
	virtual void WeaponLOSCondition(Vector *param_1, Vector *param_2, boolparam_3) override; // vtable[609]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputEnableFiring(inputdata_t *param_1); // size[15]
	void InputDisableFiring(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
	void IsBeingCarried(); // size[266]
	void InitCustomSchedules(); // size[1289]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
};
