// Generated header

class hk_Local_Constraint_System : public hk_Link_EF
{
public:
	virtual void core_is_going_to_be_deleted_event() override; // vtable[0]
	virtual ~hk_Local_Constraint_System(); // vtable[7]
	virtual ~hk_Local_Constraint_System(); // vtable[8]
	virtual void apply_effector_PSI(); // vtable[9]
	virtual void anchor_will_be_deleted_event(); // vtable[10]
	virtual void entity_deletion_event(); // vtable[11]
	virtual void get_effector_priority(); // vtable[12]

	void sort_constraints(); // size[0]
	_GLOBAL__sub_I_hk_Local_Constraint_System(); // size[0]
	void write_to_blueprint(); // size[0]
	void recalc_storage_size(); // size[0]
	void constraint_deletion_event(); // size[0]
	void add_constraint(); // size[0]
	void activate(); // size[0]
	void deactivate(); // size[0]
	void deactivate_silently(); // size[0]
	void get_effected_entities(); // size[0]
	void get_constraints_in_system(); // size[0]
	void solve_penetration(); // size[0]
	void get_epsilon(); // size[0]
	void report_square_error(); // size[0]
	void report_square_error(); // size[0]
	hk_Local_Constraint_System(); // size[0]
	void sort_constraints(); // size[0]
};
