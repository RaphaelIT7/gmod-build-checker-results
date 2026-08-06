// Generated header

class IVP_Mindist_Recursive : public IVP_Mindist, public IVP_Collision_Delegator
{
public:
	virtual void ~IVP_Mindist_Recursive() override; // vtable[0]
	virtual void ~IVP_Mindist_Recursive() override; // vtable[1]
	virtual void collision_is_going_to_be_deleted_event(); // vtable[10]
	virtual void change_spawned_mindist_count(); // vtable[11]
	virtual void get_spawned_mindist_count(); // vtable[12]

	void _GLOBAL__sub_I_mindist_rescue_push();
	void change_spawned_mindist_count();
	void delete_all_children();
	void IVP_Mindist_Recursive();
	void ~IVP_Mindist_Recursive();
	void ~IVP_Mindist_Recursive();
	void collision_is_going_to_be_deleted_event();
	void recheck_recursive_childs();
	void invalid_mindist_went_exact();
	void rec_hull_limit_exceeded_event();
	void get_spawned_mindist_count();
};
