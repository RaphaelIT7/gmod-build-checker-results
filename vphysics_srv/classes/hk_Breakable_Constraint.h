// Generated header
// Estimated minimum size: 0x8 (8) bytes

class hk_Breakable_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Breakable_Constraint(); // vtable[1]
	virtual ~hk_Breakable_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	void step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // size[29]
	hk_Breakable_Constraint(hk_Environment *param_1, hk_Breakable_Constraint_BP *param_2); // size[91]
	hk_Breakable_Constraint(hk_Local_Constraint_System *param_1, hk_Breakable_Constraint_BP *param_2); // size[210]
	void init_breakable_constraint(hk_Breakable_Constraint_BP *param_1); // size[52]
	void write_to_blueprint(hk_Breakable_Constraint_BP *param_1); // size[48]
	void FireEventIfBroken(); // size[55]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[1]
};
