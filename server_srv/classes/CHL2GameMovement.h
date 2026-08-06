// Generated header

class CHL2GameMovement : public CGameMovement
{
public:
	virtual ~CHL2GameMovement() override; // vtable[0]
	virtual ~CHL2GameMovement() override; // vtable[1]
	virtual void StopForcedMove() override; // vtable[9]
	virtual void CanAccelerate() override; // vtable[21]
	virtual void GetCheckInterval() override; // vtable[30]
	virtual void FullLadderMove() override; // vtable[33]
	virtual void LadderMove() override; // vtable[35]
	virtual void OnLadder() override; // vtable[36]
	virtual void SetGroundEntity() override; // vtable[54]

	_GLOBAL__sub_I_CHL2GameMovement(); // size[0]
	CHL2GameMovement(); // size[0]
	void IsForceMoveActive(); // size[0]
	void SwallowUseKey(); // size[0]
	void StartForcedMove(); // size[0]
	void ContinueForcedMove(); // size[0]
	void Findladder(); // size[0]
	void CheckLadderAutoMountEndPoint(); // size[0]
	void CheckLadderAutoMountCone(); // size[0]
	void LookingAtLadder(); // size[0]
	void CheckLadderAutoMount(); // size[0]
	void GetSortedDismountNodeList(); // size[0]
	void ExitLadderViaDismountNode(); // size[0]
};
