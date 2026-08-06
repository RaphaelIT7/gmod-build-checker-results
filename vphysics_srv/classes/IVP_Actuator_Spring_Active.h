// Generated header

class IVP_Actuator_Spring_Active : public IVP_Actuator_Spring, public IVP_U_Active_Float_Listener
{
public:
	virtual ~IVP_Actuator_Spring_Active() override; // vtable[7]
	virtual ~IVP_Actuator_Spring_Active() override; // vtable[8]
	virtual void active_float_changed(IVP_U_Active_Float *param_1); // vtable[10]

	IVP_Actuator_Spring_Active(IVP_Environment *param_1, IVP_Template_Spring *param_2); // size[17]
	void active_float_changed(IVP_U_Active_Float *param_1); // size[13]
	~IVP_Actuator_Spring_Active(); // size[13]
	~IVP_Actuator_Spring_Active(); // size[37]
	IVP_Actuator_Spring_Active(IVP_Environment *param_1, IVP_Template_Spring *param_2); // size[287]
};
