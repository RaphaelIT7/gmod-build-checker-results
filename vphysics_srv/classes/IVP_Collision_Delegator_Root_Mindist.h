// Generated header

class IVP_Collision_Delegator_Root_Mindist : public IVP_Collision_Delegator_Root
{
public:
	virtual void collision_is_going_to_be_deleted_event(IVP_Collision *param_1) override; // vtable[0]
	virtual ~IVP_Collision_Delegator_Root_Mindist(); // vtable[1]
	virtual ~IVP_Collision_Delegator_Root_Mindist(); // vtable[2]
	virtual void change_spawned_mindist_count(int param_1); // vtable[3]
	virtual void get_spawned_mindist_count(); // vtable[4]
	virtual void object_is_removed_from_collision_detection(IVP_Real_Object *param_1); // vtable[5]
	virtual void delegate_collisions_for_object(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // vtable[6]
	virtual void environment_is_going_to_be_deleted_event(IVP_Environment *param_1); // vtable[7]

	void delegate_collisions_for_object(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // size[17]
	void _GLOBAL__sub_I_object_is_removed_from_collision_detection(); // size[1]
	IVP_Collision_Delegator_Root_Mindist(); // size[14]
};
