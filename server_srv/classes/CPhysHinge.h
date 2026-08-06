// Generated header

class CPhysHinge : public CPhysConstraint, public IVPhysicsWatcher
{
public:
	virtual void ~CPhysHinge() override; // vtable[0]
	virtual void ~CPhysHinge() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void CreateConstraint() override; // vtable[248]
	virtual void NotifyVPhysicsStateChanged(); // vtable[249]

	void GetBaseMap();
	void IsWorldHinge();
	void NotifyVPhysicsStateChanged();
	void InputSetHingeFriction();
	void ~CPhysHinge();
	void ~CPhysHinge();
	void InputSetVelocity();
};
