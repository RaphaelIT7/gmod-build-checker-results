// Generated header

class IVP_OO_Watcher : public IVP_Collision, public IVP_Collision_Delegator
{
public:
	virtual ~IVP_OO_Watcher() override; // vtable[0]
	virtual ~IVP_OO_Watcher() override; // vtable[1]
	virtual void get_objects(); // vtable[3]
	virtual void get_ledges(); // vtable[4]
	virtual void delegator_is_going_to_be_deleted_event(); // vtable[5]
	virtual void collision_is_going_to_be_deleted_event(); // vtable[6]

	IVP_OO_Watcher(); // size[0]
	void get_synapse(); // size[0]
	void hull_limit_exceeded_event(); // size[0]
	IVP_OO_Watcher(); // size[0]
	void collision_is_going_to_be_deleted_event(); // size[0]
	~IVP_OO_Watcher(); // size[0]
	~IVP_OO_Watcher(); // size[0]
	void hull_manager_is_going_to_be_deleted_event(); // size[0]
};
