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
	virtual void DrawDebugTextOverlays(intparam_1) override; // vtable[15]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void RunTask(Task_t *param_1) override; // vtable[29]
	virtual void TranslateSchedule(intparam_1) override; // vtable[31]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void IsCurTaskContinuousMove() override; // vtable[36]
	virtual void IsNavigationUrgent() override; // vtable[50]
	virtual void OnRestore() override; // vtable[67]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[71]

	void GetBaseMap(); // size[10]
	void StopLeading(); // size[63]
	void SetGoal(AI_LeadArgs_t *param_1); // size[94]
	void GetClosestPointOnRoute(Vector *param_1, Vector *param_2); // size[608]
	void Speak(char *param_1); // size[373]
	void IsSpeaking(); // size[42]
	void Connect(CAI_LeadBehaviorHandler *param_1); // size[92]
	void Disconnect(CAI_LeadBehaviorHandler *param_1); // size[27]
	void GetClosestPlayer(); // size[79]
	void PlayerIsAheadOfMe(boolparam_1); // size[272]
	void LeadPlayer(AI_LeadArgs_t *param_1, CAI_LeadBehaviorHandler *param_2); // size[154]
	void InitCustomSchedules(); // size[74]
	void LoadSchedules(); // size[56]
	CScheduleLoader(); // size[9]
};
