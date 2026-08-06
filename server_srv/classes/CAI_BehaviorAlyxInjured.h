// Generated header

class CAI_BehaviorAlyxInjured : public CAI_FollowBehavior
{
public:
	virtual ~CAI_BehaviorAlyxInjured() override; // vtable[0]
	virtual ~CAI_BehaviorAlyxInjured() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void Spawn() override; // vtable[19]
	virtual void SelectFailSchedule(int param_1, int param_2, int param_3) override; // vtable[27]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void TranslateSchedule(int param_1) override; // vtable[31]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void NPC_TranslateActivity(Activity param_1) override; // vtable[35]
	virtual void GetFlinchActivity(bool param_1, bool param_2) override; // vtable[59]
	virtual void OnRestore() override; // vtable[67]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[77]

	void GetBaseMap(); // size[10]
	void ShouldRunToFollowGoal(); // size[143]
	void FindThreatDirection2D(Vector *param_1, Vector *param_2); // size[508]
	void FindCoverFromEnemyBehindTarget(CBaseEntity *param_1, float param_2, Vector *param_3); // size[1221]
	void ShouldRunToCover(); // size[149]
	void IsInjured(); // size[9]
	void SpeakIfAllowed(char *param_1); // size[108]
	void NumKnownEnemiesInRadius(Vector *param_1, float param_2); // size[441]
	void InitCustomSchedules(); // size[262]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
	CAI_BehaviorAlyxInjured(); // size[191]
	void PopulateActivityMap(); // size[531]
};
