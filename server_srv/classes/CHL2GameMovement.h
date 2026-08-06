// Generated header

class CHL2GameMovement : public CGameMovement
{
public:
	virtual void ~CHL2GameMovement() override; // vtable[0]
	virtual void ~CHL2GameMovement() override; // vtable[1]
	virtual void StopForcedMove() override; // vtable[9]

	void _GLOBAL__sub_I_CHL2GameMovement();
	void CHL2GameMovement();
	void IsForceMoveActive();
	void SwallowUseKey();
	void StartForcedMove();
	void ContinueForcedMove();
	void Findladder();
	void CheckLadderAutoMountEndPoint();
	void CheckLadderAutoMountCone();
	void LookingAtLadder();
	void CheckLadderAutoMount();
	void GetSortedDismountNodeList();
	void ExitLadderViaDismountNode();
};
