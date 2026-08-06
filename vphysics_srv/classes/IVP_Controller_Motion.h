// Generated header

class IVP_Controller_Motion : public IVP_Controller_Independent
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(IVP_Timeparam_1); // vtable[3]
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Controller_Motion(); // vtable[7]
	virtual ~IVP_Controller_Motion(); // vtable[8]

	IVP_Controller_Motion(IVP_Real_Object *param_1, IVP_Template_Controller_Motion *param_2); // size[149]
	void set_max_torque(IVP_U_Float_Point *param_1); // size[34]
	void set_max_translation_force(IVP_U_Float_Point *param_1); // size[47]
	void set_target_position_ws(IVP_U_Point *param_1); // size[144]
	void set_target_object_position_ws(IVP_Real_Object *param_1, IVP_U_Quat *param_2, IVP_U_Point *param_3); // size[203]
	void set_target_q_world_f_core(IVP_U_Quat *param_1); // size[166]
	void get_max_torque(); // size[11]
	void get_max_translation_force(); // size[11]
	void get_force_factor(); // size[11]
	void get_damp_factor(); // size[11]
	void get_torque_factor(); // size[11]
	void get_angular_damp_factor(); // size[11]
	void get_target_position_ws(); // size[11]
	void get_target_orientation(); // size[11]
	void set_force_factor(floatparam_1); // size[18]
	void set_damp_factor(floatparam_1); // size[18]
	void set_torque_factor(floatparam_1); // size[18]
	void set_angular_damp_factor(floatparam_1); // size[18]
};
