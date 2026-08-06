// Generated header

class hk_Pulley_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Pulley_Constraint(); // vtable[1]
	virtual ~hk_Pulley_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(); // vtable[4]
	virtual void step_constraint(); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(); // vtable[8]

	void _GLOBAL__sub_I_init_constraint(); // size[0]
	void init_pulley_constraint(); // size[0]
	void write_to_blueprint(); // size[0]
	hk_Pulley_Constraint(); // size[0]
	hk_Pulley_Constraint(); // size[0]
	void set_length(); // size[0]
	void set_gearing(); // size[0]
	void set_worldspace_point(); // size[0]
	void apply_effector_PSI(); // size[0]
};
