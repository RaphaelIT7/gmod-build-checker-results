// Generated header

class CAI_FollowBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_FollowBehavior() override; // vtable[0]
	virtual void ~CAI_FollowBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void DrawDebugGeometryOverlays() override; // vtable[71]
	virtual void FarFromFollowTarget() override; // vtable[72]
	virtual void TargetIsUnreachable() override; // vtable[73]
	virtual void ShouldFollow() override; // vtable[74]
	virtual void FollowCallBaseSelectSchedule() override; // vtable[75]
	virtual void IsChaseGoalInRange() override; // vtable[76]
	virtual void LoadedSchedules(); // vtable[77]

	void GetBaseMap();
	void GetFollowTarget();
	void SetFollowGoalDirect();
	void IsMovingToFollowTarget();
	void PlayerIsPushing();
	void IsFollowGoalInRange();
	void IsFollowTargetInRange();
	void NoteFailedFollow();
	void NoteSuccessfulFollow();
	void ShouldUseFollowPoints();
	void HasFollowPoint();
	void ClearFollowPoint();
	void GetFollowPoint();
	void FindFollowPoint();
	void IsFollowPointInRange();
	void ShouldMoveToFollowTarget();
	void ShouldIgnoreFollowPointFacing();
	void SetFollowPoint();
	void SelectScheduleFollowPoints();
	void SelectScheduleMoveToFormation();
	void GetFollowTargetViewLoc();
	void ValidateFaceTarget();
	void FindCoverFromEnemyAtFollowTarget();
	void IsCurScheduleFollowSchedule();
	void IsActive();
	void UpdateFollowPosition();
	void SelectScheduleManagePosition();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_FollowBehavior();
	void SetParameters();
	void SetFollowTarget();
	void SetFollowGoal();
	void ClearFollowGoal();
};
