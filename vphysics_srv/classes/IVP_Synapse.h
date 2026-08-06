// Generated header

class IVP_Synapse : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event() override; // vtable[2]
	virtual void ~IVP_Synapse(); // vtable[4]
	virtual void ~IVP_Synapse(); // vtable[5]

	void get_ledge();
	void get_object();
	void get_status();
	void get_edge();
	void get_synapse_mindist();
	void set_synapse_mindist();
	void init_synapse_real();
};
