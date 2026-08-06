// Generated header

class IVP_OO_Watcher : public IVP_Collision, public IVP_Collision_Delegator
{
public:
	virtual void ~IVP_OO_Watcher() override; // vtable[0]
	virtual void ~IVP_OO_Watcher() override; // vtable[1]
	virtual void get_objects(); // vtable[3]
	virtual void get_ledges(); // vtable[4]
	virtual void delegator_is_going_to_be_deleted_event(); // vtable[5]
	virtual void collision_is_going_to_be_deleted_event(); // vtable[6]

	void IVP_OO_Watcher();
	void get_synapse();
	void hull_limit_exceeded_event();
	void IVP_OO_Watcher();
	void collision_is_going_to_be_deleted_event();
	void ~IVP_OO_Watcher();
	void ~IVP_OO_Watcher();
	void hull_manager_is_going_to_be_deleted_event();
};
