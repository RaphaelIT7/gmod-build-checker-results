// Generated header

class IVP_Actuator_Rot_Mot : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Rot_Mot(); // vtable[7]
	virtual ~IVP_Actuator_Rot_Mot(); // vtable[8]
	virtual void anchor_will_be_deleted_event(); // vtable[9]

	IVP_Actuator_Rot_Mot(); // size[0]
	void set_max_rotation_speed(); // size[0]
	void set_power(); // size[0]
	void set_max_torque(); // size[0]
	IVP_Actuator_Rot_Mot(); // size[0]
	void get_power(); // size[0]
};
