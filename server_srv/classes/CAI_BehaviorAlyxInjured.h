// Generated header

class CAI_BehaviorAlyxInjured : public CAI_FollowBehavior
{
public:
	virtual void ~CAI_BehaviorAlyxInjured() override; // vtable[0]
	virtual void ~CAI_BehaviorAlyxInjured() override; // vtable[1]

	void GetBaseMap();
	void ShouldRunToFollowGoal();
	void FindThreatDirection2D();
	void FindCoverFromEnemyBehindTarget();
	void ShouldRunToCover();
	void IsInjured();
	void SpeakIfAllowed();
	void NumKnownEnemiesInRadius();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_BehaviorAlyxInjured();
	void PopulateActivityMap();
};
