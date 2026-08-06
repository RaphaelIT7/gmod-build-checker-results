// Generated header

class IVP_Actuator_Extra : public IVP_Actuator_Two_Point, public IVP_U_Active_Float_Listener
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual void ~IVP_Actuator_Extra(); // vtable[7]
	virtual void ~IVP_Actuator_Extra(); // vtable[8]
	virtual void anchor_will_be_deleted_event(); // vtable[9]
	virtual void active_float_changed(); // vtable[10]

	void IVP_Actuator_Extra();
	void active_float_changed();
	void ~IVP_Actuator_Extra();
	void ~IVP_Actuator_Extra();
	void get_force();
	void get_float_cam_props();
	void do_puck_force();
	void calc_float_cam_matrix();
	void do_float_cam();
	void IVP_Actuator_Extra();
};
