// Generated header

class hk_Ball_Socket_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Ball_Socket_Constraint(); // vtable[1]
	virtual ~hk_Ball_Socket_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(hk_PSI_Info *param_1, void *param_2, floatparam_3, floatparam_4); // vtable[4]
	virtual void step_constraint(hk_PSI_Info *param_1, void *param_2, floatparam_3, floatparam_4); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(void *param_1); // vtable[8]

	_GLOBAL__sub_I_hk_Ball_Socket_Constraint(); // size[1]
	hk_Ball_Socket_Constraint(hk_Environment *param_1, hk_Ball_Socket_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[143]
	hk_Ball_Socket_Constraint(hk_Local_Constraint_System *param_1, hk_Ball_Socket_BP *param_2, hk_Rigid_Body *param_3, hk_Rigid_Body *param_4); // size[134]
	void write_to_blueprint(hk_Ball_Socket_BP *param_1); // size[90]
	void apply_effector_PSI(hk_PSI_Info *param_1); // size[77]
};
