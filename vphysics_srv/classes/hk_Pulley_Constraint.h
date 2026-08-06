// Generated header

class hk_Pulley_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Pulley_Constraint(); // vtable[1]
	virtual ~hk_Pulley_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	void _GLOBAL__sub_I_init_constraint(); // size[1]
	void init_pulley_constraint(hk_Pulley_BP *param_1); // size[177]
	void write_to_blueprint(hk_Pulley_BP *param_1); // size[177]
	hk_Pulley_Constraint(hk_Environment *param_1, hk_Pulley_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[211]
	hk_Pulley_Constraint(hk_Local_Constraint_System *param_1, hk_Pulley_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[202]
	void set_length(float param_1); // size[18]
	void set_gearing(float param_1); // size[18]
	void set_worldspace_point(int param_1, hk_Vector3 *param_2); // size[46]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[77]
};
