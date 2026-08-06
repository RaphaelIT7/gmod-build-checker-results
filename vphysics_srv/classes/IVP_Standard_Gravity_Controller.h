// Generated header

class IVP_Standard_Gravity_Controller : public IVP_Controller_Independent
{
public:
	virtual void core_is_going_to_be_deleted_event(IVP_Core *param_1); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(IVP_Timeparam_1); // vtable[3]
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Standard_Gravity_Controller(); // vtable[7]
	virtual ~IVP_Standard_Gravity_Controller(); // vtable[8]

	void set_standard_gravity(IVP_U_Point *param_1); // size[52]
	void set_alternate_gravity(IVP_U_Point *param_1); // size[52]
};
