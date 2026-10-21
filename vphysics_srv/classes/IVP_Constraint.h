// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Constraint : public IVP_Controller_Dependent
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(IVP_Time param_1); // vtable[3]

	void get_controller_priority(); // size[6]
	void change_target_fixing_point_Ros(IVP_U_Point *param_1); // size[1]
	void change_target_translation_axes_Ros(IVP_U_Matrix3 *param_1); // size[1]
	void fix_translation_axis(IVP_COORDINATE_INDEX param_1); // size[12]
	void free_translation_axis(IVP_COORDINATE_INDEX param_1); // size[12]
	void limit_translation_axis(IVP_COORDINATE_INDEX param_1, float param_2, float param_3); // size[12]
	void change_max_translation_impulse(IVP_CONSTRAINT_FORCE_EXCEED param_1, float param_2); // size[12]
	void change_rotation_axes_Ros(IVP_U_Matrix3 *param_1); // size[12]
	void fix_rotation_axis(IVP_COORDINATE_INDEX param_1); // size[12]
	void free_rotation_axis(IVP_COORDINATE_INDEX param_1); // size[12]
	void limit_rotation_axis(IVP_COORDINATE_INDEX param_1, float param_2, float param_3); // size[12]
	void change_max_rotation_impulse(IVP_CONSTRAINT_FORCE_EXCEED param_1, float param_2); // size[12]
	void change_Aos_to_relaxe_constraint(); // size[12]
	IVP_Constraint(); // size[39]
	void get_environment(); // size[12]
	void activate(); // size[41]
	void deactivate(); // size[22]
	~IVP_Constraint(); // size[69]
	~IVP_Constraint(); // size[79]
};
