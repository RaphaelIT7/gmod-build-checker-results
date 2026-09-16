// Generated header
// Estimated minimum size: 0x2360 (9056) bytes

class CAI_StandoffBehavior : public CAI_MappedActivityBehavior_Temporary
{
public:
	virtual ~CAI_StandoffBehavior() override; // vtable[0]
	virtual ~CAI_StandoffBehavior() override; // vtable[1]

	void GetBaseMap(); // size[10]
	void SetActive(bool param_1); // size[99]
	void SetParameters(AI_StandoffParams_t *param_1, CAI_GoalEntity *param_2); // size[197]
	void OnChangeTacticalConstraints(); // size[61]
	void PlayerIsLeading(); // size[139]
	void GetStandoffGoalPosition(); // size[507]
	void GetPlayerLeader(); // size[152]
	void GetDirectionOfStandoff(Vector *param_1); // size[279]
	void GetHintType(); // size[70]
	void SetReuseCurrentCover(); // size[138]
	void UnlockHintNode(); // size[191]
	void GetCoverActivity(); // size[103]
	void InitCustomSchedules(); // size[284]
	void LoadSchedules(); // size[56]
	CAI_StandoffBehavior(CAI_BaseNPC *param_1); // size[451]
	void UpdateBattleLines(); // size[1099]
	void SetStandoffGoalPosition(Vector *param_1); // size[126]
	void ClearStandoffGoalPosition(); // size[181]
	void IsBehindBattleLines(Vector *param_1); // size[734]
};
