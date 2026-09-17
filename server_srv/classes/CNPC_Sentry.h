// Generated header
// Estimated minimum size: 0x2678 (9848) bytes

class CNPC_Sentry : public CNPC_BaseTurret
{
public:
	virtual ~CNPC_Sentry() override; // vtable[0]
	virtual ~CNPC_Sentry() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void CanBecomeServerRagdoll() override; // vtable[337]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void ShouldFadeOnDeath() override; // vtable[594]
	virtual void Shoot(Vector *param_1, Vector *param_2) override; // vtable[657]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void SentryTouch(CBaseEntity *param_1); // size[112]
	void GetBaseMap(); // size[10]
};
