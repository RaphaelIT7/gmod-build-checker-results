// Generated header

class CPhysicsSpring : public IPhysicsSpring, public IVP_Listener_Object
{
public:
	virtual ~CPhysicsSpring(); // vtable[0]
	virtual ~CPhysicsSpring(); // vtable[1]
	virtual void GetEndpoints(); // vtable[2]
	virtual void SetSpringConstant() override; // vtable[3]
	virtual void SetSpringDamping(); // vtable[4]
	virtual void SetSpringLength(); // vtable[5]
	virtual void GetStartObject(); // vtable[6]
	virtual void GetEndObject(); // vtable[7]
	virtual void event_object_deleted(); // vtable[8]
	virtual void event_object_created(); // vtable[9]
	virtual void event_object_revived(); // vtable[10]
	virtual void event_object_frozen(); // vtable[11]

	void event_object_deleted(); // size[0]
	CPhysicsSpring(); // size[0]
	void AttachListener(); // size[0]
	void DetachListener(); // size[0]
	~CPhysicsSpring(); // size[0]
	~CPhysicsSpring(); // size[0]
	void WriteToTemplate(); // size[0]
	void event_object_created(); // size[0]
	void event_object_revived(); // size[0]
	void event_object_frozen(); // size[0]
};
