// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CPhysHinge : public CPhysConstraint, public IVPhysicsWatcher
{
public:
	virtual ~CPhysHinge() override; // vtable[0]
	virtual ~CPhysHinge() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void Deactivate() override; // vtable[246]
	virtual void CreateConstraint(IPhysicsConstraintGroup *param_1, hl_constraint_info_t *param_2); // vtable[248]
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, bool param_3); // vtable[249]
	virtual ~CPhysHinge() override; // vtable[0]
	virtual ~CPhysHinge() override; // vtable[1]
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, bool param_3); // vtable[2]

	void GetBaseMap(); // size[10]
	void IsWorldHinge(hl_constraint_info_t *param_1, int *param_2); // size[212]
	void InputSetHingeFriction(inputdata_t *param_1); // size[125]
	void InputSetVelocity(inputdata_t *param_1); // size[79]
};
