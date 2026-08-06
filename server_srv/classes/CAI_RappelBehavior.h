// Generated header

class CAI_RappelBehavior : public CAI_Behavior
{
public:
	virtual ~CAI_RappelBehavior() override; // vtable[0]
	virtual ~CAI_RappelBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[6]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void Precache() override; // vtable[18]
	virtual void CleanupOnDeath(CBaseEntity *param_1, bool param_2) override; // vtable[22]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void RunTask(Task_t *param_1) override; // vtable[29]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void SetDescentSpeed(); // size[95]
	void BeginRappel(); // size[479]
	void CutZipline(); // size[122]
	void CreateZipline(); // size[420]
	void InitCustomSchedules(); // size[296]
	void LoadSchedules(); // size[56]
	CScheduleLoader(); // size[9]
	CAI_RappelBehavior(); // size[77]
};
