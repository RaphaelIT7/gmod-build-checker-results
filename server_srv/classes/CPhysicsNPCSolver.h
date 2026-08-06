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
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, floatparam_3, Vector *param_4, Vector *param_5); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	CPhysicsNPCSolver(); // size[26]
	void Init(CAI_BaseNPC *param_1, CBaseEntity *param_2, boolparam_3, floatparam_4); // size[124]
	void Create(CAI_BaseNPC *param_1, CBaseEntity *param_2, boolparam_3, floatparam_4); // size[112]
	void ResetCancelTime(); // size[75]
	void BecomePenetrationSolver(); // size[334]
	void IsIntersecting(); // size[925]
	void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, floatparam_3, Vector *param_4, Vector *param_5); // size[13]
	void IsContactOnNPCHead(IPhysicsFrictionSnapshot *param_1, IPhysicsObject *param_2, CAI_BaseNPC *param_3); // size[261]
	void CheckTouching(); // size[312]
};
