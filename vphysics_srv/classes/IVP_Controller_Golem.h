// Generated header

class IVP_Controller_Golem : public IVP_Controller_Motion
{
public:
	virtual void reset_time(IVP_Time param_1) override; // vtable[3]
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2) override; // vtable[4]

	IVP_Controller_Golem(IVP_Real_Object *param_1, IVP_Template_Controller_Golem *param_2); // size[324]
	~IVP_Controller_Golem(); // size[32]
	~IVP_Controller_Golem(); // size[43]
	void beam_object_to_target_position(IVP_Event_Sim *param_1); // size[35]
	void set_prime_position(IVP_U_Point *param_1, IVP_U_Float_Point *param_2, IVP_Time *param_3); // size[120]
	void set_prime_orientation(IVP_U_Quat *param_1, IVP_Time *param_2, IVP_U_Quat *param_3, float param_4); // size[242]
};
