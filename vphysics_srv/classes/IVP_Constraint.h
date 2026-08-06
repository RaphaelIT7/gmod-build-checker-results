// Generated header

class IVP_Constraint : public IVP_Controller_Dependent
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(IVP_Timeparam_1); // vtable[3]
	virtual void __cxa_pure_virtual(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]

	void _GLOBAL__sub_I_core_is_going_to_be_deleted_event(); // size[1]
	void change_target_fixing_point_Ros(IVP_U_Point *param_1); // size[16]
	void change_target_translation_axes_Ros(IVP_U_Matrix3 *param_1); // size[16]
	void fix_translation_axis(IVP_COORDINATE_INDEXparam_1); // size[16]
	void free_translation_axis(IVP_COORDINATE_INDEXparam_1); // size[16]
	void limit_translation_axis(IVP_COORDINATE_INDEXparam_1, floatparam_2, floatparam_3); // size[16]
	void change_max_translation_impulse(IVP_CONSTRAINT_FORCE_EXCEEDparam_1, floatparam_2); // size[16]
	void change_rotation_axes_Ros(IVP_U_Matrix3 *param_1); // size[16]
	void fix_rotation_axis(IVP_COORDINATE_INDEXparam_1); // size[16]
	void free_rotation_axis(IVP_COORDINATE_INDEXparam_1); // size[16]
	void limit_rotation_axis(IVP_COORDINATE_INDEXparam_1, floatparam_2, floatparam_3); // size[16]
	void change_max_rotation_impulse(IVP_CONSTRAINT_FORCE_EXCEEDparam_1, floatparam_2); // size[16]
	void change_Aos_to_relaxe_constraint(); // size[16]
	IVP_Constraint(); // size[40]
	void get_environment(); // size[16]
	void activate(); // size[53]
	void deactivate(); // size[41]
	~IVP_Constraint(); // size[66]
	~IVP_Constraint(); // size[73]
};
