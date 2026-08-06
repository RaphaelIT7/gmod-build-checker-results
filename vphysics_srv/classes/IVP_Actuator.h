// Generated header

class IVP_Actuator : public IVP_Controller_Dependent
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void __cxa_pure_virtual(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]

	void anchor_will_be_deleted_event();
	void IVP_Actuator();
	void ~IVP_Actuator();
	void ~IVP_Actuator();
};
