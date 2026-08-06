// Generated header

class IVP_Standard_Gravity_Controller : public IVP_Controller_Independent
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void do_simulation_controller(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual void ~IVP_Standard_Gravity_Controller(); // vtable[7]
	virtual void ~IVP_Standard_Gravity_Controller(); // vtable[8]

	void set_standard_gravity();
	void set_alternate_gravity();
};
