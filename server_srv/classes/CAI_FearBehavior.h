// Generated header

class CAI_FearBehavior : public CAI_Behavior
{
public:
	virtual ~CAI_FearBehavior() override; // vtable[0]
	virtual ~CAI_FearBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void BeginScheduleSelection() override; // vtable[8]
	virtual void EndScheduleSelection() override; // vtable[9]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void Precache() override; // vtable[18]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void RunTask(Task_t *param_1) override; // vtable[29]
	virtual void TranslateSchedule(int param_1) override; // vtable[31]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void BuildScheduleTestBits() override; // vtable[34]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void IsInASafePlace(); // size[137]
	void GetBaseMap(); // size[10]
	void EnemyDislikesMe(); // size[91]
	void MarkAsUnsafe(); // size[73]
	void IsInASafePlace(); // size[32]
	void SpoilSafePlace(); // size[15]
	void ReleaseAllHints(); // size[236]
	void FindFearWithdrawalDest(); // size[308]
	void InitCustomSchedules(); // size[290]
	void LoadSchedules(); // size[56]
	CScheduleLoader(); // size[9]
	CAI_FearBehavior(); // size[91]
};
