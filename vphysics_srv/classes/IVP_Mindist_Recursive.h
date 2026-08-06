// Generated header

class IVP_Mindist_Recursive : public IVP_Mindist, public IVP_Collision_Delegator
{
public:
	virtual ~IVP_Mindist_Recursive() override; // vtable[0]
	virtual ~IVP_Mindist_Recursive() override; // vtable[1]
	virtual void mindist_rescue_push() override; // vtable[6]
	virtual void is_recursive() override; // vtable[7]
	virtual void exact_mindist_went_invalid() override; // vtable[8]
	virtual void do_impact() override; // vtable[9]
	virtual void collision_is_going_to_be_deleted_event(); // vtable[10]
	virtual void change_spawned_mindist_count(); // vtable[11]
	virtual void get_spawned_mindist_count(); // vtable[12]

	void _GLOBAL__sub_I_mindist_rescue_push(); // size[0]
	void change_spawned_mindist_count(); // size[0]
	void delete_all_children(); // size[0]
	IVP_Mindist_Recursive(); // size[0]
	~IVP_Mindist_Recursive(); // size[0]
	~IVP_Mindist_Recursive(); // size[0]
	void collision_is_going_to_be_deleted_event(); // size[0]
	void recheck_recursive_childs(); // size[0]
	void invalid_mindist_went_exact(); // size[0]
	void rec_hull_limit_exceeded_event(); // size[0]
	void get_spawned_mindist_count(); // size[0]
};
