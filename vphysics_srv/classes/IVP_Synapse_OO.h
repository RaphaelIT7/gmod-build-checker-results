// Generated header

class IVP_Synapse_OO : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event() override; // vtable[2]
	virtual void ~IVP_Synapse_OO(); // vtable[4]
	virtual void ~IVP_Synapse_OO(); // vtable[5]

	void _GLOBAL__sub_I_hull_limit_exceeded_event();
	void IVP_Synapse_OO();
	void init_synapse_oo();
};
