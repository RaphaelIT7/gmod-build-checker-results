// Generated header

class CPhysHinge : public CPhysConstraint, public IVPhysicsWatcher
{
public:
	virtual ~CPhysHinge() override; // vtable[0]
	virtual ~CPhysHinge() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void Deactivate() override; // vtable[246]
	virtual void OnConstraintSetup(hl_constraint_info_t *param_1) override; // vtable[247]
	virtual void CreateConstraint(IPhysicsConstraintGroup *param_1, hl_constraint_info_t *param_2) override; // vtable[248]
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, bool param_3); // vtable[249]

	void GetBaseMap(); // size[10]
	void IsWorldHinge(hl_constraint_info_t *param_1, int *param_2); // size[212]
	void SoundThink(); // size[538]
	void InputSetHingeFriction(inputdata_t *param_1); // size[125]
	void InputSetVelocity(inputdata_t *param_1); // size[573]
	void NotifyVPhysicsStateChanged(IPhysicsObject *param_1, CBaseEntity *param_2, bool param_3); // size[13]
	~CPhysHinge(); // size[13]
	~CPhysHinge(); // size[10]
};
