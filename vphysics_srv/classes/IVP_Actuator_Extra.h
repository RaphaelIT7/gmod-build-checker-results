// Generated header

class IVP_Actuator_Extra : public IVP_Actuator_Two_Point, public IVP_U_Active_Float_Listener
{
public:
	virtual void do_simulation_controller(IVP_Event_Sim *param_1, IVP_U_Vector *param_2) override; // vtable[4]
	virtual ~IVP_Actuator_Extra(); // vtable[7]
	virtual ~IVP_Actuator_Extra(); // vtable[8]
	virtual void anchor_will_be_deleted_event(IVP_Anchor *param_1); // vtable[9]
	virtual void active_float_changed(IVP_U_Active_Float *param_1); // vtable[10]

	IVP_Actuator_Extra(IVP_Environment *param_1, IVP_Template_Extra *param_2); // size[17]
	void active_float_changed(IVP_U_Active_Float *param_1); // size[1]
	~IVP_Actuator_Extra(); // size[13]
	~IVP_Actuator_Extra(); // size[37]
	void get_force(); // size[17]
	void get_float_cam_props(double *param_1, double *param_2, double *param_3, double *param_4); // size[76]
	void do_puck_force(double param_1); // size[304]
	void calc_float_cam_matrix(IVP_U_Matrix *param_1); // size[181]
	void do_float_cam(double param_1); // size[581]
	IVP_Actuator_Extra(IVP_Environment *param_1, IVP_Template_Extra *param_2); // size[442]
};
