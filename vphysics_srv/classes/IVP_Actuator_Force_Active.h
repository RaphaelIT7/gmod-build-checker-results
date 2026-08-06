// Generated header

class IVP_Actuator_Force_Active : public IVP_Actuator_Force, public IVP_U_Active_Float_Listener
{
public:
	virtual ~IVP_Actuator_Force_Active() override; // vtable[7]
	virtual ~IVP_Actuator_Force_Active() override; // vtable[8]
	virtual void active_float_changed(IVP_U_Active_Float *param_1); // vtable[10]

	IVP_Actuator_Force_Active(IVP_Environment *param_1, IVP_Template_Force *param_2); // size[23]
	void active_float_changed(IVP_U_Active_Float *param_1); // size[66]
	~IVP_Actuator_Force_Active(); // size[86]
	~IVP_Actuator_Force_Active(); // size[74]
	IVP_Actuator_Force_Active(IVP_Environment *param_1, IVP_Template_Force *param_2); // size[188]
};
