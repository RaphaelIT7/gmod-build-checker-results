// Generated header

class IVP_Controller_Phantom : public IVP_Listener_Object
{
public:
	virtual void event_object_deleted(); // vtable[0]
	virtual void event_object_created(); // vtable[1]
	virtual void event_object_revived(); // vtable[2]
	virtual void event_object_frozen() override; // vtable[3]
	virtual ~IVP_Controller_Phantom(); // vtable[4]
	virtual ~IVP_Controller_Phantom(); // vtable[5]

	IVP_Controller_Phantom(); // size[0]
	void add_listener_phantom(); // size[0]
	void remove_listener_phantom(); // size[0]
	void add_sleeping_object(); // size[0]
	void remove_sleeping_object(); // size[0]
	void wake_all_sleeping_objects(); // size[0]
	void fire_event_core_entered(); // size[0]
	void fire_event_core_left(); // size[0]
	void mindist_entered_volume(); // size[0]
	void mindist_left_volume(); // size[0]
	IVP_Controller_Phantom(); // size[0]
	void get_intruding_objects(); // size[0]
	void get_intruding_cores(); // size[0]
	void get_intruding_mindists(); // size[0]
	void get_object(); // size[0]
};
