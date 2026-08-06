// Generated header

class CPhysicsConstraintGroup : public IPhysicsConstraintGroup
{
public:
	virtual ~CPhysicsConstraintGroup(); // vtable[0]
	virtual ~CPhysicsConstraintGroup(); // vtable[1]
	virtual void Activate(); // vtable[2]
	virtual void IsInErrorState(); // vtable[3]
	virtual void ClearErrorState(); // vtable[4]
	virtual void GetErrorParams(constraint_groupparams_t *param_1); // vtable[5]
	virtual void SetErrorParams(constraint_groupparams_t *param_1); // vtable[6]
	virtual void SolvePenetration(IPhysicsObject *param_1, IPhysicsObject *param_2); // vtable[7]

	CPhysicsConstraintGroup(IVP_Environment *param_1, constraint_groupparams_t *param_2); // size[17]
	CPhysicsConstraintGroup(IVP_Environment *param_1, constraint_groupparams_t *param_2); // size[136]
};
