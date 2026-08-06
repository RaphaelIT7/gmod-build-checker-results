// Generated header

class CPhysicsSpring : public IPhysicsSpring, public IVP_Listener_Object
{
public:
	virtual void ~CPhysicsSpring(); // vtable[0]
	virtual void ~CPhysicsSpring(); // vtable[1]
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

	void event_object_deleted();
	void CPhysicsSpring();
	void AttachListener();
	void DetachListener();
	void ~CPhysicsSpring();
	void ~CPhysicsSpring();
	void WriteToTemplate();
	void event_object_created();
	void event_object_revived();
	void event_object_frozen();
};
