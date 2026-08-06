// Generated header

class IVP_Controller_Phantom : public IVP_Listener_Object
{
public:
	virtual void event_object_deleted(IVP_Event_Object *param_1); // vtable[0]
	virtual void event_object_created(IVP_Event_Object *param_1); // vtable[1]
	virtual void event_object_revived(IVP_Event_Object *param_1); // vtable[2]
	virtual void event_object_frozen(IVP_Event_Object *param_1) override; // vtable[3]
	virtual ~IVP_Controller_Phantom(); // vtable[4]
	virtual ~IVP_Controller_Phantom(); // vtable[5]

	IVP_Controller_Phantom(IVP_Real_Object *param_1, IVP_Template_Phantom *param_2); // size[56]
	void add_listener_phantom(IVP_Listener_Phantom *param_1); // size[60]
	void remove_listener_phantom(IVP_Listener_Phantom *param_1); // size[134]
	void add_sleeping_object(IVP_Real_Object *param_1); // size[69]
	void remove_sleeping_object(IVP_Real_Object *param_1); // size[69]
	void wake_all_sleeping_objects(); // size[152]
	void fire_event_core_entered(IVP_Core *param_1); // size[68]
	void fire_event_core_left(IVP_Core *param_1); // size[68]
	void mindist_entered_volume(IVP_Mindist *param_1); // size[675]
	void mindist_left_volume(IVP_Mindist *param_1); // size[679]
	IVP_Controller_Phantom(IVP_Real_Object *param_1, IVP_Template_Phantom *param_2); // size[671]
	void get_intruding_objects(); // size[11]
	void get_intruding_cores(); // size[11]
	void get_intruding_mindists(); // size[11]
	void get_object(); // size[11]
};
