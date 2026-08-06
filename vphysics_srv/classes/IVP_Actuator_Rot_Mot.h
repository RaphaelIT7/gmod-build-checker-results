// Generated header

class IVP_Actuator_Rot_Mot : public IVP_Actuator_Two_Point
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2) override; // vtable[4]
	virtual void get_controller_name() override; // vtable[6]
	virtual ~IVP_Actuator_Rot_Mot(); // vtable[7]
	virtual ~IVP_Actuator_Rot_Mot(); // vtable[8]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[9]

	IVP_Actuator_Rot_Mot(IVP_Environment *param_1, IVP_Template_Rot_Mot *param_2); // size[17]
	void set_max_rotation_speed(doubleparam_1); // size[64]
	void set_power(doubleparam_1); // size[64]
	void set_max_torque(doubleparam_1); // size[64]
	IVP_Actuator_Rot_Mot(IVP_Environment *param_1, IVP_Template_Rot_Mot *param_2); // size[216]
	void get_power(); // size[14]
};
