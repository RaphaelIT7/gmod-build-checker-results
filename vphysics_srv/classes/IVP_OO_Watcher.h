// Generated header

class IVP_OO_Watcher : public IVP_Collision, public IVP_Collision_Delegator
{
public:
	virtual ~IVP_OO_Watcher() override; // vtable[0]
	virtual ~IVP_OO_Watcher() override; // vtable[1]
	virtual void get_objects(IVP_Real_Object * *param_1); // vtable[3]
	virtual void get_ledges(IVP_Compact_Ledge * *param_1); // vtable[4]
	virtual void delegator_is_going_to_be_deleted_event(IVP_Collision_Delegator *param_1); // vtable[5]
	virtual void collision_is_going_to_be_deleted_event(IVP_Collision *param_1); // vtable[6]

	IVP_OO_Watcher(IVP_Collision_Delegator *param_1, IVP_Real_Object *param_2, IVP_Real_Object *param_3); // size[58]
	void get_synapse(int param_1); // size[17]
	void hull_limit_exceeded_event(); // size[290]
	IVP_OO_Watcher(IVP_Collision_Delegator *param_1, IVP_Real_Object *param_2, IVP_Real_Object *param_3); // size[138]
	void collision_is_going_to_be_deleted_event(IVP_Collision *param_1); // size[10]
	~IVP_OO_Watcher(); // size[10]
	~IVP_OO_Watcher(); // size[34]
	void hull_manager_is_going_to_be_deleted_event(); // size[61]
};
