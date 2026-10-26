// Generated header
// Estimated minimum size: 0x2600 (9728) bytes

class CHeadcrab : public CBaseHeadcrab
{
public:
	virtual ~CHeadcrab() override; // vtable[0]
	virtual ~CHeadcrab() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void NPC_TranslateActivity(Activity param_1) override; // vtable[322]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[508]
	virtual void AlertSound() override; // vtable[509]
	virtual void IdleSound() override; // vtable[510]
	virtual void PainSound(CTakeDamageInfo *param_1) override; // vtable[511]
	virtual void MaxYawSpeed() override; // vtable[530]
	virtual void BiteSound(); // vtable[655]
	virtual void AttackSound(); // vtable[656]
	virtual void ImpactSound(); // vtable[657]
	virtual void TelegraphSound(); // vtable[658]
	virtual void CalcYawSpeed(); // vtable[0]
	virtual void OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual void OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]
};
