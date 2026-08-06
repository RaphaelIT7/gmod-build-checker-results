// Generated header

class hk_Local_Constraint_System : public hk_Link_EF
{
public:
	virtual void ~hk_Local_Constraint_System(); // vtable[7]
	virtual void ~hk_Local_Constraint_System(); // vtable[8]
	virtual void apply_effector_PSI(); // vtable[9]
	virtual void anchor_will_be_deleted_event(); // vtable[10]
	virtual void entity_deletion_event(); // vtable[11]
	virtual void get_effector_priority(); // vtable[12]

	void sort_constraints();
	void _GLOBAL__sub_I_hk_Local_Constraint_System();
	void write_to_blueprint();
	void recalc_storage_size();
	void constraint_deletion_event();
	void add_constraint();
	void activate();
	void deactivate();
	void deactivate_silently();
	void get_effected_entities();
	void get_constraints_in_system();
	void solve_penetration();
	void get_epsilon();
	void report_square_error();
	void report_square_error();
	void hk_Local_Constraint_System();
	void sort_constraints();
};
