// Generated header

class CAI_MoveProbe : public CAI_Component
{
public:
	virtual void ~CAI_MoveProbe() override; // vtable[0]
	virtual void ~CAI_MoveProbe() override; // vtable[1]

	void GetBaseMap();
	void ShouldBrushBeIgnored();
	void TraceLine();
	void CAI_MoveProbe();
	void TraceHull();
	void CheckStandPosition();
	void TraceHull();
	void FlyMoveLimit();
	void ClimbMoveLimit();
	void CalcJumpLaunchVelocity();
	void CheckStandPosition();
	void CheckStep();
	void OldCheckStandPosition();
	void FloorPoint();
	void IterativeFloorPoint();
	void IterativeFloorPoint();
	void JumpMoveLimit();
	void StepHeight();
	void CanStandOn();
	void IsJumpLegal();
	void SetupCheckStepTraceListData();
	void TestGroundMove();
	void GroundMoveLimit();
	void MoveLimit();
};
