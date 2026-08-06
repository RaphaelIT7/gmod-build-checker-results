// Generated header

class CSleepObjects : public IVP_Listener_Object
{
public:
	virtual void event_object_deleted(IVP_Event_Object *param_1); // vtable[0]
	virtual void event_object_created(IVP_Event_Object *param_1); // vtable[1]
	virtual void event_object_revived(IVP_Event_Object *param_1); // vtable[2]
	virtual void event_object_frozen(IVP_Event_Object *param_1) override; // vtable[3]
	virtual ~CSleepObjects(); // vtable[4]
	virtual ~CSleepObjects(); // vtable[5]

	void ProcessActiveObjects(IVP_Environment *param_1, IPhysicsCollisionEvent *param_2); // size[495]
};
