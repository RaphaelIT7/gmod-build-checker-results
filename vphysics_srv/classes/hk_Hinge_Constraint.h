// Generated header
// Estimated minimum size: 0x8 (8) bytes

class hk_Hinge_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Hinge_Constraint(); // vtable[1]
	virtual ~hk_Hinge_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	hk_Hinge_Constraint(hk_Environment *param_1, hk_Hinge_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[16]
	hk_Hinge_Constraint(hk_Local_Constraint_System *param_1, hk_Hinge_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[16]
	void init_hinge_constraint(hk_Hinge_BP *param_1); // size[2720]
	void write_to_blueprint(hk_Hinge_BP *param_1); // size[248]
	hk_Hinge_Constraint(hk_Environment *param_1, hk_Hinge_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[120]
	hk_Hinge_Constraint(hk_Local_Constraint_System *param_1, hk_Hinge_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[116]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[123]
	void set_limits(float param_1, float param_2); // size[83]
	void set_friction(float param_1); // size[40]
	void set_motor(float param_1, float param_2); // size[38]
};
