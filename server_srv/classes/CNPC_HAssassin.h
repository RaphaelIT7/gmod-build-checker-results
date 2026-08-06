// Generated header

class CNPC_HAssassin : public CHL1BaseNPC
{
public:
	virtual ~CNPC_HAssassin() override; // vtable[0]
	virtual ~CNPC_HAssassin() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void RunAI() override; // vtable[401]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void TranslateSchedule(intparam_1) override; // vtable[409]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void SquadSlotName(intparam_1) override; // vtable[581]
	virtual void RangeAttack1Conditions(floatparam_1, floatparam_2) override; // vtable[595]
	virtual void RangeAttack2Conditions(floatparam_1, floatparam_2) override; // vtable[596]
	virtual void MeleeAttack1Conditions(floatparam_1, floatparam_2) override; // vtable[597]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]

	void GetBaseMap(); // size[10]
	void Shoot(); // size[477]
	void InitCustomSchedules(); // size[352]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
};
