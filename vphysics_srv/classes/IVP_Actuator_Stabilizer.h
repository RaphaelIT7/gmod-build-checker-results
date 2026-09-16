// Generated header
// Estimated minimum size: 0x11C (284) bytes, no debug info available

class IVP_Actuator_Stabilizer : public IVP_Actuator_Four_Point
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual ~IVP_Actuator_Stabilizer(); // vtable[7]
	virtual ~IVP_Actuator_Stabilizer(); // vtable[8]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[9]

	void set_stabi_constant(double param_1); // size[55]
	IVP_Actuator_Stabilizer(IVP_Environment *param_1, IVP_Template_Stabilizer *param_2); // size[52]
};
