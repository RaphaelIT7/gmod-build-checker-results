// Generated header

class IVP_Constraint_Local : public IVP_Constraint
{
public:
	virtual void core_is_going_to_be_deleted_event() override; // vtable[0]
	virtual void do_simulation_controller() override; // vtable[4]
	virtual ~IVP_Constraint_Local(); // vtable[7]
	virtual ~IVP_Constraint_Local(); // vtable[8]
	virtual void change_fixing_point_Ros(); // vtable[9]
	virtual void change_target_fixing_point_Ros(); // vtable[10]
	virtual void change_translation_axes_Ros(); // vtable[11]
	virtual void change_target_translation_axes_Ros(); // vtable[12]
	virtual void fix_translation_axis(); // vtable[13]
	virtual void free_translation_axis(); // vtable[14]
	virtual void limit_translation_axis(); // vtable[15]
	virtual void change_max_translation_impulse(); // vtable[16]
	virtual void change_rotation_axes_Ros(); // vtable[17]
	virtual void change_target_rotation_axes_Ros(); // vtable[18]
	virtual void fix_rotation_axis(); // vtable[19]
	virtual void free_rotation_axis(); // vtable[20]
	virtual void limit_rotation_axis(); // vtable[21]
	virtual void change_max_rotation_impulse(); // vtable[22]
	virtual void change_Aos_to_relaxe_constraint(); // vtable[23]
	virtual void change_Ros_to_relaxe_constraint(); // vtable[24]

	IVP_Constraint_Local(); // size[0]
	IVP_Constraint_Local(); // size[0]
	IVP_Constraint_Local(); // size[0]
	void sort_translation_mapping(); // size[0]
	void sort_rotation_mapping(); // size[0]
	void init(); // size[0]
	IVP_Constraint_Local(); // size[0]
	void get_objectR(); // size[0]
	void get_objectA(); // size[0]
	void constraint_changed(); // size[0]
};
