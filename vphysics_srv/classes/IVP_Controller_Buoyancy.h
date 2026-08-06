// Generated header

class IVP_Controller_Buoyancy : public IVP_Controller_Independent
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void do_simulation_controller(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Controller_Buoyancy(); // vtable[7]
	virtual ~IVP_Controller_Buoyancy(); // vtable[8]

	void _GLOBAL__sub_I_calculate_future_extrapolation(); // size[0]
	void calculate_future_extrapolation(); // size[0]
	void use_buoyancy_solver(); // size[0]
	void apply_dampening(); // size[0]
	void apply_buoyancy_impulse(); // size[0]
	void provide_new_input_solution_combination(); // size[0]
	IVP_Controller_Buoyancy(); // size[0]
};
