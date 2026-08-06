// Generated header

class CPhysSlideConstraint : public CPhysConstraint, public IVPhysicsWatcher
{
public:
	virtual ~CPhysSlideConstraint() override; // vtable[0]
	virtual ~CPhysSlideConstraint() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void CreateConstraint(IPhysicsConstraintGroup *param_1, hl_constraint_info_t *param_2) override; // vtable[248]
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, boolparam_3); // vtable[249]

	void GetBaseMap(); // size[10]
	void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, boolparam_3); // size[10]
	void InputSetVelocity(inputdata_t *param_1); // size[456]
	~CPhysSlideConstraint(); // size[13]
	~CPhysSlideConstraint(); // size[10]
};
