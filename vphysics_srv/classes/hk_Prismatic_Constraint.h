// Generated header

class hk_Prismatic_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Prismatic_Constraint(); // vtable[1]
	virtual ~hk_Prismatic_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, floatparam_3, floatparam_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, floatparam_3, floatparam_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	hk_Prismatic_Constraint(hk_Environment *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[17]
	hk_Prismatic_Constraint(hk_Local_Constraint_System *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[17]
	void _GLOBAL__sub_I_init_constraint(); // size[1]
	void reset_linear_limit(); // size[776]
	void init_prismatic_constraint(hk_Prismatic_BP *param_1, hk_Local_Constraint_System *param_2); // size[61]
	void write_to_blueprint(hk_Prismatic_BP *param_1); // size[173]
	hk_Prismatic_Constraint(hk_Environment *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[19]
	hk_Prismatic_Constraint(hk_Local_Constraint_System *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[48]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[9]
	void set_limits(floatparam_1, floatparam_2); // size[91]
	void set_friction(floatparam_1); // size[43]
	void set_motor(floatparam_1, floatparam_2); // size[46]
};
