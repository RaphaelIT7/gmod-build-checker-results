// Generated header

class CAI_LeadBehavior : public CAI_Behavior
{
public:
	virtual ~CAI_LeadBehavior() override; // vtable[0]
	virtual ~CAI_LeadBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void BeginScheduleSelection() override; // vtable[8]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void DrawDebugTextOverlays() override; // vtable[15]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask() override; // vtable[28]
	virtual void RunTask() override; // vtable[29]
	virtual void TranslateSchedule() override; // vtable[31]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void IsCurTaskContinuousMove() override; // vtable[36]
	virtual void IsNavigationUrgent() override; // vtable[50]
	virtual void OnRestore() override; // vtable[67]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void GetBaseMap(); // size[0]
	void StopLeading(); // size[0]
	void SetGoal(); // size[0]
	void GetClosestPointOnRoute(); // size[0]
	void Speak(); // size[0]
	void IsSpeaking(); // size[0]
	void Connect(); // size[0]
	void Disconnect(); // size[0]
	void GetClosestPlayer(); // size[0]
	void PlayerIsAheadOfMe(); // size[0]
	void LeadPlayer(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
};
