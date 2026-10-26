// Generated header
// Estimated minimum size: 0x25DC (9692) bytes

class HL1_CNPC_Barnacle : public CHL1BaseNPC
{
public:
	virtual ~HL1_CNPC_Barnacle() override; // vtable[0]
	virtual ~HL1_CNPC_Barnacle() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void GetSchedulingErrorName() override; // vtable[433]
	virtual void LoadedSchedules() override; // vtable[434]
	virtual void SquadSlotName(int param_1) override; // vtable[582]
	virtual void GetClassScheduleIdSpace() override; // vtable[641]
	virtual void CalcYawSpeed(); // vtable[0]
	virtual void OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual void OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void WaitTillDead(); // size[137]
	void InitCustomSchedules(); // size[44]
	void LoadSchedules(); // size[62]
	void GetBaseMap(); // size[10]
	void TongueTouchEnt(float *param_1); // size[350]
	void InitTonguePosition(); // size[159]
	void BarnacleThink(); // size[2773]
};
