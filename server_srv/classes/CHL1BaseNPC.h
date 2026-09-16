// Generated header
// Estimated minimum size: 0x25C0 (9664) bytes, no debug info available

class CHL1BaseNPC : public CAI_BaseNPC
{
public:
	virtual ~CHL1BaseNPC() override; // vtable[0]
	virtual ~CHL1BaseNPC() override; // vtable[1]
	virtual void Precache() override; // vtable[24]
	virtual TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void CorpseGib(CTakeDamageInfo *param_1) override; // vtable[348]
	virtual HasHumanGibs() override; // vtable[350]
	virtual void _ZN11CHL1BaseNPC12HasAlienGibsEv() override; // vtable[351]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual IRelationPriority(CBaseEntity *param_1) override; // vtable[365]
	virtual SelectDeadSchedule() override; // vtable[441]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	_GLOBAL__sub_I_NoFriendlyFire(); // size[113]
	NoFriendlyFire(); // size[466]
	EjectShell(Vector *param_1, Vector *param_2, float param_3, int param_4); // size[285]
};
