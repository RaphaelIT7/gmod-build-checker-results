// Generated header

class CAI_HolsterBehavior : public CAI_Behavior
{
public:
	virtual ~CAI_HolsterBehavior() override; // vtable[0]
	virtual ~CAI_HolsterBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void RunTask(Task_t *param_1) override; // vtable[29]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void InitCustomSchedules(); // size[290]
	void LoadSchedules(); // size[56]
	CScheduleLoader(); // size[9]
	CAI_HolsterBehavior(); // size[41]
};
