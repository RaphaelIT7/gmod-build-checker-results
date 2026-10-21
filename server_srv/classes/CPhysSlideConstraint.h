// Generated header
// Estimated minimum size: 0x1444 (5188) bytes

class CPhysSlideConstraint : public CPhysConstraint, public IVPhysicsWatcher
{
public:
	virtual ~CPhysSlideConstraint() override; // vtable[0]
	virtual ~CPhysSlideConstraint() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void OnConstraintSetup(hl_constraint_info_t *param_1) override; // vtable[247]
	virtual void CreateConstraint(IPhysicsConstraintGroup *param_1, hl_constraint_info_t *param_2); // vtable[248]
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, bool param_3); // vtable[249]
	virtual ~CPhysSlideConstraint() override; // vtable[0]
	virtual ~CPhysSlideConstraint() override; // vtable[1]
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, bool param_3); // vtable[2]

	void GetBaseMap(); // size[10]
	void SoundThink(); // size[421]
	void InputSetVelocity(inputdata_t *param_1); // size[427]
};
