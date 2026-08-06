// Generated header

class IVP_Synapse_OO : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(IVP_Hull_Manager *param_1, floatparam_2); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event(IVP_Hull_Manager *param_1) override; // vtable[2]
	virtual ~IVP_Synapse_OO(); // vtable[4]
	virtual ~IVP_Synapse_OO(); // vtable[5]

	void _GLOBAL__sub_I_hull_limit_exceeded_event(); // size[1]
	IVP_Synapse_OO(); // size[14]
	void init_synapse_oo(IVP_OO_Watcher *param_1, IVP_Real_Object *param_2); // size[90]
};
