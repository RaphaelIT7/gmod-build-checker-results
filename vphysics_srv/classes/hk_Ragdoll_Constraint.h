// Generated header
// Estimated minimum size: 0x8 (8) bytes

class hk_Ragdoll_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Ragdoll_Constraint(); // vtable[1]
	virtual ~hk_Ragdoll_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, float param_3, float param_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	hk_Ragdoll_Constraint(hk_Environment *param_1, hk_Ragdoll_Constraint_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[16]
	hk_Ragdoll_Constraint(hk_Local_Constraint_System *param_1, hk_Ragdoll_Constraint_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[16]
	void init_ragdoll_constraint(hk_Ragdoll_Constraint_BP *param_1, hk_Local_Constraint_System *param_2); // size[744]
	void write_to_blueprint(hk_Ragdoll_Constraint_BP *param_1); // size[647]
	void update_transforms(hk_Transform *param_1, hk_Transform *param_2); // size[261]
	void update_friction(float param_1); // size[77]
	hk_Ragdoll_Constraint(hk_Environment *param_1, hk_Ragdoll_Constraint_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[177]
	hk_Ragdoll_Constraint(hk_Local_Constraint_System *param_1, hk_Ragdoll_Constraint_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[189]
	void apply_angular_part(hk_PSI_Info *param_1, hk_Ragdoll_Constraint_Work *param_2); // size[277]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[36]
};
