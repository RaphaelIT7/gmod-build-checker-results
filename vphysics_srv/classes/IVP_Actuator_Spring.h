// Generated header

class IVP_Actuator_Spring : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Spring(); // vtable[7]
	virtual ~IVP_Actuator_Spring(); // vtable[8]
	virtual void anchor_will_be_deleted_event(); // vtable[9]

	IVP_Actuator_Spring(); // size[0]
	void fire_event_spring_broken(); // size[0]
	IVP_Actuator_Spring(); // size[0]
	void set_len(); // size[0]
	void set_break_max_len(); // size[0]
	void set_constant(); // size[0]
	void set_damp(); // size[0]
	void set_rel_pos_damp(); // size[0]
	void get_constant(); // size[0]
	void get_damp_factor(); // size[0]
	void get_rel_pos_damp(); // size[0]
	void get_spring_length_zero_force(); // size[0]
	void get_only_stretch(); // size[0]
};
