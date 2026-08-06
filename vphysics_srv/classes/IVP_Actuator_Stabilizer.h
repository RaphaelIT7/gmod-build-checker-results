// Generated header

class IVP_Actuator_Stabilizer : public IVP_Actuator_Four_Point
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2) override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Stabilizer(); // vtable[7]
	virtual ~IVP_Actuator_Stabilizer(); // vtable[8]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[9]

	void set_stabi_constant(doubleparam_1); // size[55]
	IVP_Actuator_Stabilizer(IVP_Environment *param_1, IVP_Template_Stabilizer *param_2); // size[52]
};
