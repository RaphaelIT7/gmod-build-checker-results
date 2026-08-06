// Generated header

class IVP_Constraint_Local : public IVP_Constraint
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1) override; // vtable[0]
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2) override; // vtable[4]
	virtual ~IVP_Constraint_Local(); // vtable[7]
	virtual ~IVP_Constraint_Local(); // vtable[8]
	virtual void change_fixing_point_Ros(IVP_U_Point *param_1); // vtable[9]
	virtual void change_target_fixing_point_Ros(IVP_U_Point *param_1); // vtable[10]
	virtual void change_translation_axes_Ros(IVP_U_Matrix3 *param_1); // vtable[11]
	virtual void change_target_translation_axes_Ros(IVP_U_Matrix3 *param_1); // vtable[12]
	virtual void fix_translation_axis(IVP_COORDINATE_INDEXparam_1); // vtable[13]
	virtual void free_translation_axis(IVP_COORDINATE_INDEXparam_1); // vtable[14]
	virtual void limit_translation_axis(IVP_COORDINATE_INDEXparam_1, floatparam_2, floatparam_3); // vtable[15]
	virtual void change_max_translation_impulse(IVP_CONSTRAINT_FORCE_EXCEEDparam_1, floatparam_2); // vtable[16]
	virtual void change_rotation_axes_Ros(IVP_U_Matrix3 *param_1); // vtable[17]
	virtual void change_target_rotation_axes_Ros(IVP_U_Matrix3 *param_1); // vtable[18]
	virtual void fix_rotation_axis(IVP_COORDINATE_INDEXparam_1); // vtable[19]
	virtual void free_rotation_axis(IVP_COORDINATE_INDEXparam_1); // vtable[20]
	virtual void limit_rotation_axis(IVP_COORDINATE_INDEXparam_1, floatparam_2, floatparam_3); // vtable[21]
	virtual void change_max_rotation_impulse(IVP_CONSTRAINT_FORCE_EXCEEDparam_1, floatparam_2); // vtable[22]
	virtual void change_Aos_to_relaxe_constraint(); // vtable[23]
	virtual void change_Ros_to_relaxe_constraint(); // vtable[24]

	IVP_Constraint_Local(); // size[17]
	IVP_Constraint_Local(IVP_Template_Constraint *param_1); // size[17]
	IVP_Constraint_Local(); // size[87]
	void sort_translation_mapping(); // size[276]
	void sort_rotation_mapping(); // size[324]
	void init(IVP_Template_Constraint *param_1); // size[1734]
	IVP_Constraint_Local(IVP_Template_Constraint *param_1); // size[94]
	void get_objectR(); // size[14]
	void get_objectA(); // size[14]
	void constraint_changed(); // size[1]
};
