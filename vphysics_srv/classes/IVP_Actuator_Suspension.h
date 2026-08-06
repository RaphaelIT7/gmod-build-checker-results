// Generated header

class IVP_Actuator_Suspension : public IVP_Actuator_Spring
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2) override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Suspension() override; // vtable[7]
	virtual ~IVP_Actuator_Suspension() override; // vtable[8]

	IVP_Actuator_Suspension(IVP_Environment *param_1, IVP_Template_Suspension *param_2); // size[73]
	void set_spring_damp_compression(float param_1); // size[44]
	void set_max_body_force(float param_1); // size[36]
};
