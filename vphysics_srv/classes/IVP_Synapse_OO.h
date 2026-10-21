// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Synapse_OO : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(IVP_Hull_Manager *param_1, float param_2); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event(IVP_Hull_Manager *param_1); // vtable[2]
	virtual void hull_manager_is_reset(float param_1, float param_2); // vtable[3]
	virtual ~IVP_Synapse_OO(); // vtable[4]
	virtual ~IVP_Synapse_OO(); // vtable[5]

	IVP_Synapse_OO(); // size[11]
	void init_synapse_oo(IVP_OO_Watcher *param_1, IVP_Real_Object *param_2); // size[99]
};
