// Generated header
// Estimated minimum size: 0x68F02840 (1760569408) bytes

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
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[508]
	virtual void PainSound(CTakeDamageInfo *param_1) override; // vtable[511]
	virtual void CalcYawSpeed(); // vtable[0]
	virtual void OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual void OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void InputTurnBabyOn(inputdata_t *param_1); // size[28]
	void NullThink(); // size[67]
	void InputTurnBabyOff(inputdata_t *param_1); // size[139]
	void GetBaseMap(); // size[10]
	void Flight(); // size[834]
	void MakeFriend(Vector param_1); // size[255]
	void FloatSequence(); // size[202]
	void NextActivity(); // size[2662]
	void EmitSphere(); // size[416]
	void StartupThink(); // size[400]
	void ShootBalls(); // size[1340]
	void AbsorbSphere(); // size[118]
	void HuntThink(); // size[786]
	void DyingThink(); // size[2132]
};
