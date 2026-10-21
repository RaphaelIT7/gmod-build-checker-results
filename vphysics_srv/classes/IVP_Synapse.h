// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Synapse : public IVP_Listener_Hull
{
public:
	virtual void _ZN11IVP_Synapse8get_typeEv(); // vtable[0]
	virtual void hull_limit_exceeded_event(IVP_Hull_Manager *param_1, float param_2); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event(IVP_Hull_Manager *param_1); // vtable[2]
	virtual void hull_manager_is_reset(float param_1, float param_2); // vtable[3]
	virtual ~IVP_Synapse(); // vtable[4]
	virtual void _ZN11IVP_SynapseD0Ev(); // vtable[5]

	void get_ledge(); // size[29]
	void get_object(); // size[5]
	void get_status(); // size[5]
	void get_edge(); // size[5]
	void get_synapse_mindist(); // size[9]
	void set_synapse_mindist(IVP_Mindist_Base *param_1); // size[8]
};
