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
	virtual void StartTask() override; // vtable[28]
	virtual void RunTask() override; // vtable[29]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void SetParameters() override; // vtable[71]
	virtual void LoadedSchedules() override; // vtable[72]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void CanSeePositionEntity(); // size[0]
	void IsAtPositionEntity(); // size[0]
	void GetGoalEntity(); // size[0]
	void IsGoalReady(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
	CAI_OperatorBehavior(); // size[0]
};
