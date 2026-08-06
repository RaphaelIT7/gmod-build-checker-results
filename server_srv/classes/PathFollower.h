// Generated header

class PathFollower : public Path
{
public:
	virtual ~PathFollower() override; // vtable[0]
	virtual ~PathFollower() override; // vtable[1]
	virtual void GetCurrentGoal() override; // vtable[8]
	virtual void Invalidate() override; // vtable[17]
	virtual void Draw(Segment *param_1) override; // vtable[18]
	virtual void OnPathChanged(INextBot *param_1, ResultTypeparam_2) override; // vtable[24]
	virtual void Update(INextBot *param_1); // vtable[31]
	virtual void SetMinLookAheadDistance(floatparam_1); // vtable[32]
	virtual void GetHindrance(); // vtable[33]
	virtual void IsDiscontinuityAhead(INextBot *param_1, SegmentTypeparam_2, floatparam_3); // vtable[34]

	PathFollower(); // size[262]
	void AdjustSpeed(INextBot *param_1); // size[299]
	void IsAtGoal(INextBot *param_1); // size[1002]
	void LadderUpdate(INextBot *param_1); // size[2360]
	void CheckProgress(INextBot *param_1); // size[794]
	void FindBlocker(INextBot *param_1); // size[247]
	void Avoid(INextBot *param_1, Vector *param_2, Vector *param_3, Vector *param_4); // size[378]
	void Climbing(INextBot *param_1, Segment *param_2, Vector *param_3, Vector *param_4, floatparam_5); // size[8538]
	void JumpOverGaps(INextBot *param_1, Segment *param_2, Vector *param_3, Vector *param_4, floatparam_5); // size[476]
};
