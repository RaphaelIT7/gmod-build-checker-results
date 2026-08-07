// Generated header

class CHL2GameMovement : public CGameMovement
{
public:
	virtual ~CHL2GameMovement() override; // vtable[0]
	virtual ~CHL2GameMovement() override; // vtable[1]
	virtual void StopForcedMove() override; // vtable[9]
	virtual void CanAccelerate() override; // vtable[21]
	virtual void GetCheckInterval(IntervalType_t param_1) override; // vtable[30]
	virtual void FullLadderMove() override; // vtable[33]
	virtual void LadderMove() override; // vtable[35]
	virtual void OnLadder(CGameTrace *param_1) override; // vtable[36]
	virtual void SetGroundEntity(CGameTrace *param_1) override; // vtable[54]

	_GLOBAL__sub_I_CHL2GameMovement(); // size[113]
	CHL2GameMovement(); // size[30]
	void IsForceMoveActive(); // size[27]
	void SwallowUseKey(); // size[35]
	void StartForcedMove(bool param_1, float param_2, Vector *param_3, CFuncLadder *param_4); // size[670]
	void ContinueForcedMove(); // size[14]
	void Findladder(float param_1, CFuncLadder * *param_2, Vector *param_3, CFuncLadder *param_4); // size[264]
	void CheckLadderAutoMountEndPoint(CFuncLadder *param_1, Vector *param_2); // size[588]
	void CheckLadderAutoMountCone(CFuncLadder *param_1, Vector *param_2, float param_3, float param_4); // size[1159]
	void LookingAtLadder(CFuncLadder *param_1); // size[542]
	void CheckLadderAutoMount(CFuncLadder *param_1, Vector *param_2); // size[42]
	void GetSortedDismountNodeList(Vector *param_1, float param_2, CFuncLadder *param_3, CUtlRBTree *param_4); // size[201]
	void ExitLadderViaDismountNode(CFuncLadder *param_1, bool param_2, bool param_3); // size[75]
};
