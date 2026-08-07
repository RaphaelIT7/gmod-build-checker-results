// Generated header

class CAI_MoveProbe : public CAI_Component
{
public:
	virtual ~CAI_MoveProbe() override; // vtable[0]
	virtual ~CAI_MoveProbe() override; // vtable[1]

	void GetBaseMap(); // size[7]
	void ShouldBrushBeIgnored(CBaseEntity *param_1); // size[56]
	void TraceLine(Vector *param_1, Vector *param_2, uint param_3, bool param_4, CGameTrace *param_5); // size[366]
	CAI_MoveProbe(CAI_BaseNPC *param_1); // size[38]
	void TraceHull(Vector *param_1, Vector *param_2, Vector *param_3, Vector *param_4, uint param_5, CGameTrace *param_6); // size[739]
	void CheckStandPosition(Vector *param_1, uint param_2); // size[1774]
	void TraceHull(Vector *param_1, Vector *param_2, uint param_3, CGameTrace *param_4); // size[106]
	void FlyMoveLimit(Vector *param_1, Vector *param_2, uint param_3, CBaseEntity *param_4, AIMoveTrace_t *param_5); // size[365]
	void ClimbMoveLimit(Vector *param_1, Vector *param_2, CBaseEntity *param_3, AIMoveTrace_t *param_4); // size[344]
	void CalcJumpLaunchVelocity(Vector *param_1, Vector *param_2, float param_3, float *param_4, float param_5, Vector *param_6); // size[429]
	void CheckStandPosition(Vector *param_1, uint param_2); // size[102]
	void CheckStep(CheckStepArgs_t *param_1, CheckStepResult_t *param_2); // size[4361]
	void OldCheckStandPosition(Vector *param_1, uint param_2); // size[1323]
	void FloorPoint(Vector *param_1, uint param_2, float param_3, float param_4, Vector *param_5); // size[787]
	void IterativeFloorPoint(Vector *param_1, uint param_2, float param_3, Vector *param_4); // size[105]
	void IterativeFloorPoint(Vector *param_1, uint param_2, Vector *param_3); // size[48]
	void JumpMoveLimit(Vector *param_1, Vector *param_2, uint param_3, CBaseEntity *param_4, AIMoveTrace_t *param_5); // size[2476]
	void StepHeight(); // size[23]
	void CanStandOn(CBaseEntity *param_1); // size[23]
	void IsJumpLegal(Vector *param_1, Vector *param_2, Vector *param_3); // size[23]
	void SetupCheckStepTraceListData(CheckStepArgs_t *param_1); // size[692]
	void TestGroundMove(Vector *param_1, Vector *param_2, uint param_3, float param_4, uint param_5, AIMoveTrace_t *param_6); // size[3746]
	void GroundMoveLimit(Vector *param_1, Vector *param_2, uint param_3, CBaseEntity *param_4, uint param_5, float param_6, AIMoveTrace_t *param_7); // size[579]
	void MoveLimit(Navigation_t param_1, Vector *param_2, Vector *param_3, uint param_4, CBaseEntity *param_5, float param_6, uint param_7, AIMoveTrace_t *param_8); // size[1098]
};
