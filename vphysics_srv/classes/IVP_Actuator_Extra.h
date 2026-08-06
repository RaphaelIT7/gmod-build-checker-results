// Generated header

class IVP_Actuator_Extra : public IVP_Actuator_Two_Point, public IVP_U_Active_Float_Listener
{
public:
	virtual void do_simulation_controller() override; // vtable[4]
	virtual ~IVP_Actuator_Extra(); // vtable[7]
	virtual ~IVP_Actuator_Extra(); // vtable[8]
	virtual void anchor_will_be_deleted_event(); // vtable[9]
	virtual void active_float_changed(); // vtable[10]

	IVP_Actuator_Extra(); // size[0]
	void active_float_changed(); // size[0]
	~IVP_Actuator_Extra(); // size[0]
	~IVP_Actuator_Extra(); // size[0]
	void get_force(); // size[0]
	void get_float_cam_props(); // size[0]
	void do_puck_force(); // size[0]
	void calc_float_cam_matrix(); // size[0]
	void do_float_cam(); // size[0]
	IVP_Actuator_Extra(); // size[0]
};
