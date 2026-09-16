// Generated header
// Estimated minimum size: 0x25C0 (9664) bytes, no debug info available

class CAI_BaseNPCFlyerNew : public CAI_BaseNPC
{
public:
	virtual ~CAI_BaseNPCFlyerNew() override; // vtable[0]
	virtual ~CAI_BaseNPCFlyerNew() override; // vtable[1]
	virtual void GetIdealSpeed() override; // vtable[246]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void MinGroundDist(); // vtable[652]
	virtual void AbortedMovement(); // vtable[653]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	_GLOBAL__sub_I_CAI_BaseNPCFlyerNew(); // size[113]
	CAI_BaseNPCFlyerNew(); // size[18]
	void SpawnFlyer(); // size[66]
	void ClearFlyerConditions(); // size[5]
};
