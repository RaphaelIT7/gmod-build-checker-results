// Generated header

class IVP_Actuator_Torque : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2) override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Torque(); // vtable[7]
	virtual ~IVP_Actuator_Torque(); // vtable[8]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[9]

	IVP_Actuator_Torque(IVP_Environment *param_1, IVP_Template_Torque *param_2); // size[17]
	void set_max_rotation_speed(double param_1); // size[64]
	void set_torque(double param_1); // size[64]
	IVP_Actuator_Torque(IVP_Environment *param_1, IVP_Template_Torque *param_2); // size[263]
	void get_torque(); // size[14]
};
