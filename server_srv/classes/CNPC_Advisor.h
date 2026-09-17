// Generated header
// Estimated minimum size: 0x2634 (9780) bytes

class CNPC_Advisor : public CAI_BaseNPC
{
public:
	virtual ~CNPC_Advisor() override; // vtable[0]
	virtual ~CNPC_Advisor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void Classify() override; // vtable[55]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void GetPhysicsImpactDamageTable() override; // vtable[291]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[507]
	virtual void AlertSound() override; // vtable[508]
	virtual void IdleSound() override; // vtable[509]
	virtual void PainSound(CTakeDamageInfo *param_1) override; // vtable[510]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void IsHeavyDamage(CTakeDamageInfo *param_1) override; // vtable[633]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void GetBaseMap(); // size[10]
	void StartLevitatingObjects(); // size[213]
	void CanLevitateEntity(CBaseEntity *param_1, int param_2, int param_3); // size[115]
};
