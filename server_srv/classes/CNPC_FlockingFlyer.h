// Generated header
// Estimated minimum size: 0x5E5B1CC8 (1583029448) bytes

class CNPC_FlockingFlyer : public CHL1BaseNPC
{
public:
	virtual ~CNPC_FlockingFlyer() override; // vtable[0]
	virtual ~CNPC_FlockingFlyer() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void IdleThink(); // size[126]
	void FallHack(); // size[240]
	void GetBaseMap(); // size[10]
	void SpawnCommonCode(); // size[96]
	void SquadUnlink(); // size[28]
	void SquadAdd(CNPC_FlockingFlyer *param_1); // size[65]
	void SquadCount(); // size[80]
	void SquadDisband(); // size[46]
	void SquadRemove(CNPC_FlockingFlyer *param_1); // size[301]
	void BoidAdvanceFrame(); // size[204]
	void Start(); // size[173]
	void FPathBlocked(); // size[303]
	void SpreadFlock(); // size[672]
	void SpreadFlock2(); // size[509]
	void FlockFollowerThink(); // size[1234]
	void MakeSound(); // size[91]
	void FlockLeaderThink(); // size[280]
};
