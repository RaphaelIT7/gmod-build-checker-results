// Generated header
// Estimated minimum size: 0x8 (8) bytes

class hk_Prismatic_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Prismatic_Constraint(); // vtable[1]
	virtual ~hk_Prismatic_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	hk_Prismatic_Constraint(hk_Environment *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[16]
	hk_Prismatic_Constraint(hk_Local_Constraint_System *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[16]
	void reset_linear_limit(); // size[1252]
	void init_prismatic_constraint(hk_Prismatic_BP *param_1, hk_Local_Constraint_System *param_2); // size[523]
	void write_to_blueprint(hk_Prismatic_BP *param_1); // size[166]
	hk_Prismatic_Constraint(hk_Environment *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[110]
	hk_Prismatic_Constraint(hk_Local_Constraint_System *param_1, hk_Prismatic_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[122]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[102]
	void set_limits(float param_1, float param_2); // size[74]
	void set_friction(float param_1); // size[31]
	void set_motor(float param_1, float param_2); // size[29]
};
