// Generated header

class IVP_Constraint : public IVP_Controller_Dependent
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void __cxa_pure_virtual(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]

	void _GLOBAL__sub_I_core_is_going_to_be_deleted_event();
	void change_target_fixing_point_Ros();
	void change_target_translation_axes_Ros();
	void fix_translation_axis();
	void free_translation_axis();
	void limit_translation_axis();
	void change_max_translation_impulse();
	void change_rotation_axes_Ros();
	void fix_rotation_axis();
	void free_rotation_axis();
	void limit_rotation_axis();
	void change_max_rotation_impulse();
	void change_Aos_to_relaxe_constraint();
	void IVP_Constraint();
	void get_environment();
	void activate();
	void deactivate();
	void ~IVP_Constraint();
	void ~IVP_Constraint();
};
