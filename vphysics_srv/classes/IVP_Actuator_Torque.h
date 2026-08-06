// Generated header

class IVP_Actuator_Torque : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Torque(); // vtable[7]
	virtual ~IVP_Actuator_Torque(); // vtable[8]
	virtual void anchor_will_be_deleted_event(); // vtable[9]

	IVP_Actuator_Torque(); // size[0]
	void set_max_rotation_speed(); // size[0]
	void set_torque(); // size[0]
	IVP_Actuator_Torque(); // size[0]
	void get_torque(); // size[0]
};
