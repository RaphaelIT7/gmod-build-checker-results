// Generated header

class hk_Local_Constraint_System : public hk_Link_EF
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1) override; // vtable[0]
	virtual ~hk_Local_Constraint_System(); // vtable[7]
	virtual ~hk_Local_Constraint_System(); // vtable[8]
	virtual void apply_effector_PSI(hk_PSI_Info *param_1); // vtable[9]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[10]
	virtual void entity_deletion_event(hk_Rigid_Body *param_1); // vtable[11]
	virtual void get_effector_priority(); // vtable[12]

	void sort_constraints(); // size[19]
	_GLOBAL__sub_I_hk_Local_Constraint_System(); // size[1]
	void write_to_blueprint(hk_Local_Constraint_System_BP *param_1); // size[60]
	void recalc_storage_size(); // size[68]
	void constraint_deletion_event(hk_Constraint *param_1); // size[136]
	void add_constraint(hk_Constraint *param_1, intparam_2); // size[362]
	void activate(); // size[55]
	void deactivate(); // size[51]
	void deactivate_silently(); // size[44]
	void get_effected_entities(hk_Array *param_1); // size[102]
	void get_constraints_in_system(hk_Array *param_1); // size[102]
	void solve_penetration(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // size[156]
	void get_epsilon(); // size[7]
	void report_square_error(floatparam_1); // size[24]
	void report_square_error(_func_float_int *param_1); // size[16]
	hk_Local_Constraint_System(hk_Environment *param_1, hk_Local_Constraint_System_BP *param_2); // size[135]
	void sort_constraints(); // size[447]
};
