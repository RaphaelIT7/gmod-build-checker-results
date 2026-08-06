// Generated header

class CAI_ProxyMovementSink : public CAI_DefMovementSink
{
public:
	virtual void CalcYawSpeed() override; // vtable[0]
	virtual void OnCalcBaseMove(AILocalMoveGoal_t *param_1, floatparam_2, AIMoveResult_t *param_3) override; // vtable[1]
	virtual void OnObstructionPreSteer(AILocalMoveGoal_t *param_1, floatparam_2, AIMoveResult_t *param_3) override; // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, floatparam_2, AIMoveResult_t *param_3) override; // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, floatparam_2, AIMoveResult_t *param_3) override; // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, floatparam_2, AIMoveResult_t *param_3) override; // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1) override; // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1) override; // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_tparam_3, AIMoveResult_t *param_4) override; // vtable[8]
};
