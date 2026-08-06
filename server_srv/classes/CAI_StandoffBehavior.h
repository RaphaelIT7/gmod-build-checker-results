// Generated header

class CAI_StandoffBehavior : public CAI_MappedActivityBehavior_Temporary
{
public:
	virtual void ~CAI_StandoffBehavior() override; // vtable[0]
	virtual void ~CAI_StandoffBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]

	void GetBaseMap();
	void SetActive();
	void SetParameters();
	void OnChangeTacticalConstraints();
	void PlayerIsLeading();
	void GetStandoffGoalPosition();
	void GetPlayerLeader();
	void GetDirectionOfStandoff();
	void GetHintType();
	void SetReuseCurrentCover();
	void UnlockHintNode();
	void GetCoverActivity();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_StandoffBehavior();
	void UpdateBattleLines();
	void SetStandoffGoalPosition();
	void ClearStandoffGoalPosition();
	void IsBehindBattleLines();
};
