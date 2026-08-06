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
	virtual void StartTask() override; // vtable[28]
	virtual void RunTask() override; // vtable[29]
	virtual void TranslateSchedule() override; // vtable[31]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void BuildScheduleTestBits() override; // vtable[34]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void IsInASafePlace(); // size[0]
	void GetBaseMap(); // size[0]
	void EnemyDislikesMe(); // size[0]
	void MarkAsUnsafe(); // size[0]
	void IsInASafePlace(); // size[0]
	void SpoilSafePlace(); // size[0]
	void ReleaseAllHints(); // size[0]
	void FindFearWithdrawalDest(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
	CAI_FearBehavior(); // size[0]
};
