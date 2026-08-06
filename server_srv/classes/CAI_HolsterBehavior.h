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
	virtual void StartTask() override; // vtable[28]
	virtual void RunTask() override; // vtable[29]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
	CAI_HolsterBehavior(); // size[0]
};
