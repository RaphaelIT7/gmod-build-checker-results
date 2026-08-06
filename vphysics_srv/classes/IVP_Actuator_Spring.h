// Generated header

class IVP_Actuator_Spring : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual void ~IVP_Actuator_Spring(); // vtable[7]
	virtual void ~IVP_Actuator_Spring(); // vtable[8]
	virtual void anchor_will_be_deleted_event(); // vtable[9]

	void IVP_Actuator_Spring();
	void fire_event_spring_broken();
	void IVP_Actuator_Spring();
	void set_len();
	void set_break_max_len();
	void set_constant();
	void set_damp();
	void set_rel_pos_damp();
	void get_constant();
	void get_damp_factor();
	void get_rel_pos_damp();
	void get_spring_length_zero_force();
	void get_only_stretch();
};
