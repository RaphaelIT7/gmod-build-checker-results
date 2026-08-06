// Generated header

class hk_Stiff_Spring_Constraint : public hk_Constraint
{
public:
	virtual void ~hk_Stiff_Spring_Constraint(); // vtable[1]
	virtual void ~hk_Stiff_Spring_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(); // vtable[4]
	virtual void step_constraint(); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(); // vtable[8]

	void _GLOBAL__sub_I_init_constraint();
	void init_stiff_spring_constraint();
	void write_to_blueprint();
	void hk_Stiff_Spring_Constraint();
	void hk_Stiff_Spring_Constraint();
	void set_length();
	void apply_effector_PSI();
};
