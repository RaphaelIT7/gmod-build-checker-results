// Generated header

class CAI_LocalNavigator : public CAI_Component, public CAI_ProxyMovementSink
{
public:
	virtual ~CAI_LocalNavigator() override; // vtable[0]
	virtual ~CAI_LocalNavigator() override; // vtable[1]
	virtual void SetOuter(CAI_BaseNPC *param_1) override; // vtable[2]
	virtual void TaskFail(int param_1) override; // vtable[3]
	virtual void TaskComplete(bool param_1) override; // vtable[4]

	void GetBaseMap(); // size[7]
	CAI_LocalNavigator(CAI_BaseNPC *param_1); // size[90]
	void Init(IAI_MovementSink *param_1); // size[29]
	void ResetMoveCalculations(); // size[83]
	void AddObstacle(Vector *param_1, float param_2, AI_MoveSuggType_t param_3); // size[58]
	void HaveObstacles(); // size[22]
	void MoveCalcDirect(AILocalMoveGoal_t *param_1, bool param_2, float *param_3, AIMoveResult_t *param_4); // size[2907]
	void MoveCalcSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // size[380]
	void MoveCalcStop(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // size[88]
	void MoveCalcRaw(AILocalMoveGoal_t *param_1, bool param_2); // size[501]
	void MoveCalc(AILocalMoveGoal_t *param_1, bool param_2); // size[361]
};
