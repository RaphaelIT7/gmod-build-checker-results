// Generated header

class CPhysHinge : public CPhysConstraint, public IVPhysicsWatcher
{
public:
	virtual ~CPhysHinge() override; // vtable[0]
	virtual ~CPhysHinge() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void Deactivate() override; // vtable[246]
	virtual void CreateConstraint() override; // vtable[248]
	virtual void NotifyVPhysicsStateChanged(); // vtable[249]

	void GetBaseMap(); // size[0]
	void IsWorldHinge(); // size[0]
	void NotifyVPhysicsStateChanged(); // size[0]
	void InputSetHingeFriction(); // size[0]
	~CPhysHinge(); // size[0]
	~CPhysHinge(); // size[0]
	void InputSetVelocity(); // size[0]
};
