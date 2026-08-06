// Generated header

class IVP_Actuator_Rot_Mot : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual void ~IVP_Actuator_Rot_Mot(); // vtable[7]
	virtual void ~IVP_Actuator_Rot_Mot(); // vtable[8]
	virtual void anchor_will_be_deleted_event(); // vtable[9]

	void IVP_Actuator_Rot_Mot();
	void set_max_rotation_speed();
	void set_power();
	void set_max_torque();
	void IVP_Actuator_Rot_Mot();
	void get_power();
};
