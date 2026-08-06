// Generated header

class PathFollower : public Path
{
public:
	virtual ~PathFollower() override; // vtable[0]
	virtual ~PathFollower() override; // vtable[1]
	virtual void GetCurrentGoal() override; // vtable[8]
	virtual void Invalidate() override; // vtable[17]
	virtual void Draw() override; // vtable[18]
	virtual void OnPathChanged() override; // vtable[24]
	virtual void Update(); // vtable[31]
	virtual void SetMinLookAheadDistance(); // vtable[32]
	virtual void GetHindrance(); // vtable[33]
	virtual void IsDiscontinuityAhead(); // vtable[34]

	PathFollower(); // size[0]
	void AdjustSpeed(); // size[0]
	void IsAtGoal(); // size[0]
	void LadderUpdate(); // size[0]
	void CheckProgress(); // size[0]
	void FindBlocker(); // size[0]
	void Avoid(); // size[0]
	void Climbing(); // size[0]
	void JumpOverGaps(); // size[0]
};
