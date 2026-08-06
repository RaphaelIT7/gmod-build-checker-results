// Generated header

class IVP_Synapse : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(IVP_Hull_Manager *param_1, floatparam_2); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event(IVP_Hull_Manager *param_1) override; // vtable[2]
	virtual void hull_manager_is_reset(floatparam_1, floatparam_2) override; // vtable[3]
	virtual ~IVP_Synapse(); // vtable[4]
	virtual ~IVP_Synapse(); // vtable[5]

	void get_ledge(); // size[31]
	void get_object(); // size[11]
	void get_status(); // size[12]
	void get_edge(); // size[11]
	void get_synapse_mindist(); // size[14]
	void set_synapse_mindist(IVP_Mindist_Base *param_1); // size[17]
	void init_synapse_real(IVP_Mindist_Base *param_1, IVP_Real_Object *param_2); // size[23]
};
