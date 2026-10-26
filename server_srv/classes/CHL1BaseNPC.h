// Generated header
// Estimated minimum size: 0x25C4 (9668) bytes

class CHL1BaseNPC : public CAI_BaseNPC
{
public:
	virtual ~CHL1BaseNPC() override; // vtable[0]
	virtual ~CHL1BaseNPC() override; // vtable[1]
	virtual void Precache() override; // vtable[24]
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void CorpseGib(CTakeDamageInfo *param_1) override; // vtable[348]
	virtual void HasHumanGibs() override; // vtable[350]
	virtual void HasAlienGibs() override; // vtable[351]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void IRelationPriority(CBaseEntity *param_1) override; // vtable[365]
	virtual void SelectDeadSchedule() override; // vtable[442]
	virtual void CalcYawSpeed(); // vtable[0]
	virtual void OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual void OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void _GLOBAL__sub_I_NoFriendlyFire(); // size[113]
	void NoFriendlyFire(); // size[466]
	void EjectShell(Vector *param_1, Vector *param_2, float param_3, int param_4); // size[285]
};
