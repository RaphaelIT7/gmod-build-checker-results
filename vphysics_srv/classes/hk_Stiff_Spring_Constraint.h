// Generated header
// Estimated minimum size: 0x8 (8) bytes

class hk_Stiff_Spring_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Stiff_Spring_Constraint(); // vtable[1]
	virtual ~hk_Stiff_Spring_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	void init_stiff_spring_constraint(hk_Stiff_Spring_BP *param_1); // size[100]
	void write_to_blueprint(hk_Stiff_Spring_BP *param_1); // size[100]
	hk_Stiff_Spring_Constraint(hk_Environment *param_1, hk_Stiff_Spring_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[127]
	hk_Stiff_Spring_Constraint(hk_Local_Constraint_System *param_1, hk_Stiff_Spring_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[125]
	void set_length(float param_1); // size[6]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[62]
};
