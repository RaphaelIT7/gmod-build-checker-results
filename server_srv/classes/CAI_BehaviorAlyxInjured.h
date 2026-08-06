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
	virtual void SelectFailSchedule() override; // vtable[27]
	virtual void StartTask() override; // vtable[28]
	virtual void TranslateSchedule() override; // vtable[31]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void NPC_TranslateActivity() override; // vtable[35]
	virtual void GetFlinchActivity() override; // vtable[59]
	virtual void OnRestore() override; // vtable[67]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void LoadedSchedules() override; // vtable[77]

	void GetBaseMap(); // size[0]
	void ShouldRunToFollowGoal(); // size[0]
	void FindThreatDirection2D(); // size[0]
	void FindCoverFromEnemyBehindTarget(); // size[0]
	void ShouldRunToCover(); // size[0]
	void IsInjured(); // size[0]
	void SpeakIfAllowed(); // size[0]
	void NumKnownEnemiesInRadius(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
	CAI_BehaviorAlyxInjured(); // size[0]
	void PopulateActivityMap(); // size[0]
};
