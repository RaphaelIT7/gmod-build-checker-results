// Generated header
// Estimated minimum size: 0x5E5B1CC8 (1583029448) bytes

class CNPC_HGruntRepel : public CAI_BaseNPC
{
public:
	virtual ~CNPC_HGruntRepel() override; // vtable[0]
	virtual ~CNPC_HGruntRepel() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void _ZN16CNPC_HGruntRepel5SpawnEv() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void RepelUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[374]
	void GetBaseMap(); // size[10]
};
