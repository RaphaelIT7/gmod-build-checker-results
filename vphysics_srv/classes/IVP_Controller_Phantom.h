// Generated header

class IVP_Controller_Phantom : public IVP_Listener_Object
{
public:
	virtual void event_object_deleted(); // vtable[0]
	virtual void event_object_created(); // vtable[1]
	virtual void event_object_revived(); // vtable[2]
	virtual void event_object_frozen() override; // vtable[3]
	virtual void ~IVP_Controller_Phantom(); // vtable[4]
	virtual void ~IVP_Controller_Phantom(); // vtable[5]

	void IVP_Controller_Phantom();
	void add_listener_phantom();
	void remove_listener_phantom();
	void add_sleeping_object();
	void remove_sleeping_object();
	void wake_all_sleeping_objects();
	void fire_event_core_entered();
	void fire_event_core_left();
	void mindist_entered_volume();
	void mindist_left_volume();
	void IVP_Controller_Phantom();
	void get_intruding_objects();
	void get_intruding_cores();
	void get_intruding_mindists();
	void get_object();
};
