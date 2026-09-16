// Generated header
// Estimated minimum size: 0x2668 (9832) bytes, no debug info available

class CNPC_EnemyFinderCombineCannon : public CNPC_EnemyFinder
{
public:
	virtual ~CNPC_EnemyFinderCombineCannon() override; // vtable[0]
	virtual ~CNPC_EnemyFinderCombineCannon() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void FVisible(CBaseEntity *param_1, int param_2, CBaseEntity * *param_3) override; // vtable[144]
	virtual void GatherConditions() override; // vtable[402]
	virtual void IsValidEnemy(CBaseEntity *param_1) override; // vtable[475]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void InputSetWideFOVForSeconds(inputdata_t *param_1); // size[63]
	void GetBaseMap(); // size[10]
};
