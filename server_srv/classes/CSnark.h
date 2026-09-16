// Generated header
// Estimated minimum size: 0x25F4 (9716) bytes, no debug info available

class CSnark : public CHL1BaseNPC
{
public:
	virtual ~CSnark() override; // vtable[0]
	virtual ~CSnark() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void GetDamage() override; // vtable[131]
	virtual void SetDamage(float param_1) override; // vtable[132]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void ResolveFlyCollisionCustom(CGameTrace *param_1, Vector *param_2) override; // vtable[175]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void Event_Gibbed(CTakeDamageInfo *param_1) override; // vtable[354]
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

	void HuntThink(); // size[106]
	void GetBaseMap(); // size[10]
	void SuperBounceTouch(CBaseEntity *param_1); // size[1060]
};
