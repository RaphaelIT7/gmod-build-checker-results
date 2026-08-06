// Generated header

class CPhysicsNPCSolver : public CLogicalEntity, public IMotionEvent
{
public:
	virtual ~CPhysicsNPCSolver() override; // vtable[0]
	virtual ~CPhysicsNPCSolver() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void OnRestore() override; // vtable[45]
	virtual void Think() override; // vtable[48]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void Simulate(); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	CPhysicsNPCSolver(); // size[0]
	void Init(); // size[0]
	void Create(); // size[0]
	void ResetCancelTime(); // size[0]
	void BecomePenetrationSolver(); // size[0]
	void IsIntersecting(); // size[0]
	void Simulate(); // size[0]
	void IsContactOnNPCHead(); // size[0]
	void CheckTouching(); // size[0]
};
