// Generated header

class IVP_Controller_Buoyancy : public IVP_Controller_Independent
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(IVP_Time param_1); // vtable[3]
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Controller_Buoyancy(); // vtable[7]
	virtual ~IVP_Controller_Buoyancy(); // vtable[8]

	void _GLOBAL__sub_I_calculate_future_extrapolation(); // size[1]
	void calculate_future_extrapolation(Last_IO *param_1, IVP_MI_Vector *param_2, IVP_MI_Vector *param_3, double param_4, IVP_Time param_5, IVP_MI_Vector *param_6, IVP_MI_Vector *param_7); // size[207]
	void use_buoyancy_solver(IVP_Buoyancy_Input *param_1, IVP_Template_Buoyancy *param_2, IVP_Buoyancy_Output *param_3, IVP_U_Float_Point *param_4, int param_5); // size[277]
	void apply_dampening(IVP_Real_Object *param_1, float param_2, double param_3, IVP_U_Float_Point *param_4, IVP_U_Float_Point *param_5, IVP_U_Float_Point *param_6); // size[993]
	void apply_buoyancy_impulse(IVP_Real_Object *param_1, IVP_Template_Buoyancy *param_2, double param_3, float param_4, IVP_U_Float_Point *param_5); // size[341]
	void provide_new_input_solution_combination(Attacher_Interpolator *param_1, IVP_Template_Buoyancy *param_2, IVP_MI_Vector *param_3, IVP_MI_Vector *param_4, double param_5, IVP_Time param_6); // size[507]
	IVP_Controller_Buoyancy(IVP_Attacher_To_Cores *param_1, IVP_Core *param_2); // size[198]
};
