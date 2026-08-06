// Generated header

class CPhysicsSpring : public IPhysicsSpring, public IVP_Listener_Object
{
public:
	virtual ~CPhysicsSpring(); // vtable[0]
	virtual ~CPhysicsSpring(); // vtable[1]
	virtual void GetEndpoints(Vector *param_1, Vector *param_2); // vtable[2]
	virtual void SetSpringConstant(floatparam_1) override; // vtable[3]
	virtual void SetSpringDamping(floatparam_1); // vtable[4]
	virtual void SetSpringLength(floatparam_1); // vtable[5]
	virtual void GetStartObject(); // vtable[6]
	virtual void GetEndObject(); // vtable[7]
	virtual void event_object_deleted(IVP_Event_Object *param_1); // vtable[8]
	virtual void event_object_created(IVP_Event_Object *param_1); // vtable[9]
	virtual void event_object_revived(IVP_Event_Object *param_1); // vtable[10]
	virtual void event_object_frozen(IVP_Event_Object *param_1); // vtable[11]

	void event_object_deleted(IVP_Event_Object *param_1); // size[95]
	CPhysicsSpring(CPhysicsObject *param_1, CPhysicsObject *param_2, IVP_Actuator_Spring *param_3); // size[106]
	void AttachListener(); // size[83]
	void DetachListener(); // size[101]
	~CPhysicsSpring(); // size[79]
	~CPhysicsSpring(); // size[72]
	void WriteToTemplate(vphysics_save_cphysicsspring_t *param_1); // size[244]
	void event_object_created(IVP_Event_Object *param_1); // size[1]
	void event_object_revived(IVP_Event_Object *param_1); // size[1]
	void event_object_frozen(IVP_Event_Object *param_1); // size[1]
};
