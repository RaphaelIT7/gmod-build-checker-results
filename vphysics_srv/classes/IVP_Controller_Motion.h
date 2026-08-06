// Generated header

class IVP_Controller_Motion : public IVP_Controller_Independent
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void do_simulation_controller(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual void ~IVP_Controller_Motion(); // vtable[7]
	virtual void ~IVP_Controller_Motion(); // vtable[8]

	void IVP_Controller_Motion();
	void set_max_torque();
	void set_max_translation_force();
	void set_target_position_ws();
	void set_target_object_position_ws();
	void set_target_q_world_f_core();
	void get_max_torque();
	void get_max_translation_force();
	void get_force_factor();
	void get_damp_factor();
	void get_torque_factor();
	void get_angular_damp_factor();
	void get_target_position_ws();
	void get_target_orientation();
	void set_force_factor();
	void set_damp_factor();
	void set_torque_factor();
	void set_angular_damp_factor();
};
