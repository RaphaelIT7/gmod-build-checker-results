// Generated header

class CAI_RappelBehavior : public CAI_Behavior
{
public:
	virtual ~CAI_RappelBehavior() override; // vtable[0]
	virtual ~CAI_RappelBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void KeyValue() override; // vtable[6]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void Precache() override; // vtable[18]
	virtual void CleanupOnDeath() override; // vtable[22]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask() override; // vtable[28]
	virtual void RunTask() override; // vtable[29]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void SetDescentSpeed(); // size[0]
	void BeginRappel(); // size[0]
	void CutZipline(); // size[0]
	void CreateZipline(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
	CAI_RappelBehavior(); // size[0]
};
