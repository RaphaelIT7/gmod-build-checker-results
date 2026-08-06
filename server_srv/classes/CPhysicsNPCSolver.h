// Generated header

class CPhysicsNPCSolver : public CLogicalEntity, public IMotionEvent
{
public:
	virtual void ~CPhysicsNPCSolver() override; // vtable[0]
	virtual void ~CPhysicsNPCSolver() override; // vtable[1]
	virtual void Simulate(); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void CPhysicsNPCSolver();
	void Init();
	void Create();
	void ResetCancelTime();
	void BecomePenetrationSolver();
	void IsIntersecting();
	void Simulate();
	void IsContactOnNPCHead();
	void CheckTouching();
};
