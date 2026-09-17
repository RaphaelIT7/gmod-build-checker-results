// Generated header
// Estimated minimum size: 0x9C (156) bytes

class IVP_Actuator_Force : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Actuator_Force(); // vtable[7]
	virtual ~IVP_Actuator_Force(); // vtable[8]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[9]

	void set_force(double param_1); // size[64]
	IVP_Actuator_Force(IVP_Environment *param_1, IVP_Template_Force *param_2); // size[86]
};
