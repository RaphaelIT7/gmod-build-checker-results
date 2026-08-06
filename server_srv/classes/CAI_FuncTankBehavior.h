// Generated header

class CAI_FuncTankBehavior : public CAI_Behavior
{
public:
	virtual ~CAI_FuncTankBehavior() override; // vtable[0]
	virtual ~CAI_FuncTankBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void BeginScheduleSelection() override; // vtable[8]
	virtual void EndScheduleSelection() override; // vtable[9]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void UpdateOnRemove() override; // vtable[20]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[21]
	virtual void PrescheduleThink() override; // vtable[23]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void RunTask(Task_t *param_1) override; // vtable[29]
	virtual void AimGun() override; // vtable[30]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void NPC_TranslateActivity(Activity param_1) override; // vtable[35]
	virtual void BestEnemy() override; // vtable[42]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[51]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void SetFuncTank(CHandle param_1); // size[207]
	void Dismount(); // size[363]
	void InitCustomSchedules(); // size[290]
	void LoadSchedules(); // size[56]
	CScheduleLoader(); // size[9]
	CAI_FuncTankBehavior(); // size[63]
};
