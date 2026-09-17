// Generated header
// Estimated minimum size: 0x2604 (9732) bytes

class CNPC_Leech : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Leech() override; // vtable[0]
	virtual ~CNPC_Leech() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void IRelationType(CBaseEntity *param_1) override; // vtable[364]
	virtual void AlertSound() override; // vtable[508]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void DeadThink(); // size[679]
	void GetBaseMap(); // size[10]
	void AttackSound(); // size[79]
	void SwitchLeechState(); // size[340]
	void RecalculateWaterlevel(); // size[70]
	void ObstacleDistance(CBaseEntity *param_1); // size[22]
	void UpdateMotion(); // size[228]
	void SwimThink(); // size[2235]
};
