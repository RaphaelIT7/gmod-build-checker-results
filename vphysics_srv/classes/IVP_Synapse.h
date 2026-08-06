// Generated header

class IVP_Synapse : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event() override; // vtable[2]
	virtual void hull_manager_is_reset() override; // vtable[3]
	virtual ~IVP_Synapse(); // vtable[4]
	virtual ~IVP_Synapse(); // vtable[5]

	void get_ledge(); // size[0]
	void get_object(); // size[0]
	void get_status(); // size[0]
	void get_edge(); // size[0]
	void get_synapse_mindist(); // size[0]
	void set_synapse_mindist(); // size[0]
	void init_synapse_real(); // size[0]
};
