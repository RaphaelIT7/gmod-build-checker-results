// Generated header

class IVP_Car_System_Real_Wheels : public IVP_Car_System
{
public:
	virtual void ~IVP_Car_System_Real_Wheels(); // vtable[0]
	virtual void ~IVP_Car_System_Real_Wheels(); // vtable[1]
	virtual void do_steering_wheel(); // vtable[2]
	virtual void change_spring_constant(); // vtable[3]
	virtual void change_spring_dampening(); // vtable[4]
	virtual void change_spring_dampening_compression(); // vtable[5]
	virtual void change_max_body_force(); // vtable[6]
	virtual void change_spring_pre_tension(); // vtable[7]
	virtual void change_spring_length(); // vtable[8]
	virtual void change_stabilizer_constant(); // vtable[9]
	virtual void change_fast_turn_factor(); // vtable[10]
	virtual void change_wheel_torque(); // vtable[11]
	virtual void get_wheel_torque(); // vtable[12]
	virtual void update_body_countertorque(); // vtable[13]
	virtual void update_throttle(); // vtable[14]
	virtual void change_body_downforce(); // vtable[15]
	virtual void fix_wheel(); // vtable[16]
	virtual void set_powerslide(); // vtable[17]
	virtual void get_body_speed(); // vtable[18]
	virtual void get_wheel_angular_velocity(); // vtable[19]
	virtual void update_wheel_positions(); // vtable[20]
	virtual void get_orig_front_wheel_distance(); // vtable[21]
	virtual void get_orig_axles_distance(); // vtable[22]
	virtual void get_skid_info(); // vtable[23]
	virtual void do_steering(); // vtable[24]
	virtual void set_booster_acceleration(); // vtable[25]
	virtual void activate_booster(); // vtable[26]
	virtual void update_booster(); // vtable[27]
	virtual void get_booster_delay(); // vtable[28]
	virtual void get_booster_time_to_go(); // vtable[29]
	virtual void SetCarSystemDebugData(); // vtable[30]
	virtual void GetCarSystemDebugData(); // vtable[31]
	virtual void environment_will_be_deleted(); // vtable[32]

	void IVP_Car_System_Real_Wheels();
	void _GLOBAL__sub_I_change_spring_dampening();
	void change_wheel_speed_dampening();
	void IVP_Car_System_Real_Wheels();
	void event_object_deleted();
};
