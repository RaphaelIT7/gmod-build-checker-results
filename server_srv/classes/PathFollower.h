// Generated header

class PathFollower : public Path
{
public:
	virtual void ~PathFollower() override; // vtable[0]
	virtual void ~PathFollower() override; // vtable[1]
	virtual void Update(); // vtable[31]
	virtual void SetMinLookAheadDistance(); // vtable[32]
	virtual void GetHindrance(); // vtable[33]
	virtual void IsDiscontinuityAhead(); // vtable[34]

	void PathFollower();
	void AdjustSpeed();
	void IsAtGoal();
	void LadderUpdate();
	void CheckProgress();
	void FindBlocker();
	void Avoid();
	void Climbing();
	void JumpOverGaps();
};
