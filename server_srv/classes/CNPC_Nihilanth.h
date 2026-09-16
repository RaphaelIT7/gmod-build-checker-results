// Generated header
// Estimated minimum size: 0x2838 (10296) bytes, no debug info available

class CNPC_Nihilanth : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Nihilanth() override; // vtable[0]
	virtual ~CNPC_Nihilanth() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[507]
	virtual void PainSound(CTakeDamageInfo *param_1) override; // vtable[510]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void InputTurnBabyOn(inputdata_t *param_1); // size[28]
	void NullThink(); // size[61]
	void InputTurnBabyOff(inputdata_t *param_1); // size[1]
	void GetBaseMap(); // size[10]
	void Flight(); // size[191]
	void MakeFriend(Vector param_1); // size[1317]
	void FloatSequence(); // size[11]
	void NextActivity(); // size[197]
	void EmitSphere(); // size[408]
	void StartupThink(); // size[209]
	void ShootBalls(); // size[788]
	void AbsorbSphere(); // size[26]
	void HuntThink(); // size[52]
	void DyingThink(); // size[100]
};
