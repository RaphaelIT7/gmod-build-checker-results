// Generated header

class IVP_Actuator_Suspension : public IVP_Actuator_Spring
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Suspension() override; // vtable[7]
	virtual ~IVP_Actuator_Suspension() override; // vtable[8]

	IVP_Actuator_Suspension(); // size[0]
	void set_spring_damp_compression(); // size[0]
	void set_max_body_force(); // size[0]
};
