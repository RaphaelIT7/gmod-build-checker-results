// Generated header

class hk_Breakable_Constraint : public hk_Constraint
{
public:
	virtual ~hk_Breakable_Constraint(); // vtable[1]
	virtual ~hk_Breakable_Constraint(); // vtable[2]
	virtual void get_vmq_storage_size(); // vtable[3]
	virtual void setup_and_step_constraint(); // vtable[4]
	virtual void step_constraint(); // vtable[5]
	virtual void get_constraint_type(); // vtable[6]
	virtual void get_constraint_dof(); // vtable[7]
	virtual void init_constraint(); // vtable[8]

	void step_constraint(); // size[0]
	_GLOBAL__sub_I_hk_Breakable_Constraint(); // size[0]
	hk_Breakable_Constraint(); // size[0]
	hk_Breakable_Constraint(); // size[0]
	void init_breakable_constraint(); // size[0]
	void write_to_blueprint(); // size[0]
	void FireEventIfBroken(); // size[0]
	void apply_effector_PSI(); // size[0]
};
