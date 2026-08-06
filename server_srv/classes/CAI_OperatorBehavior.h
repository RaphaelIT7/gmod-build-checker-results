// Generated header

class CAI_OperatorBehavior : public CAI_Behavior
{
public:
	virtual ~CAI_OperatorBehavior() override; // vtable[0]
	virtual ~CAI_OperatorBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GatherConditionsNotActive() override; // vtable[12]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void RunTask(Task_t *param_1) override; // vtable[29]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void SetParameters(CAI_OperatorGoal *param_1, CBaseEntity *param_2, CBaseEntity *param_3) override; // vtable[71]
	virtual void LoadedSchedules() override; // vtable[72]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void CanSeePositionEntity(); // size[580]
	void IsAtPositionEntity(); // size[181]
	void GetGoalEntity(); // size[92]
	void IsGoalReady(); // size[29]
	void InitCustomSchedules(); // size[296]
	void LoadSchedules(); // size[56]
	CScheduleLoader(); // size[9]
	CAI_OperatorBehavior(); // size[93]
};
