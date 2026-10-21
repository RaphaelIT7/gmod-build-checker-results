// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Actuator_Spring : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Actuator_Spring(); // vtable[7]
	virtual ~IVP_Actuator_Spring(); // vtable[8]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[9]

	IVP_Actuator_Spring(IVP_Environment *param_1, IVP_Template_Spring *param_2, IVP_ACTUATOR_TYPE param_3); // size[47]
	void fire_event_spring_broken(); // size[97]
	IVP_Actuator_Spring(IVP_Environment *param_1, IVP_Template_Spring *param_2, IVP_ACTUATOR_TYPE param_3); // size[317]
	void set_len(double param_1); // size[36]
	void set_break_max_len(double param_1); // size[36]
	void set_constant(double param_1); // size[37]
	void set_damp(double param_1); // size[37]
	void set_rel_pos_damp(double param_1); // size[37]
	void get_constant(); // size[9]
	void get_damp_factor(); // size[9]
	void get_rel_pos_damp(); // size[9]
	void get_spring_length_zero_force(); // size[9]
	void get_only_stretch(); // size[7]
};
