// Generated header

class IVP_U_Active_Sine : public IVP_U_Active_Float, public IVP_U_Active_Float_Listener
{
public:
	virtual ~IVP_U_Active_Sine() override; // vtable[0]
	virtual ~IVP_U_Active_Sine() override; // vtable[1]
	virtual void print(); // vtable[2]
	virtual void active_float_changed(IVP_U_Active_Float *param_1); // vtable[3]

	IVP_U_Active_Sine(char *param_1, IVP_U_Active_Float *param_2, double param_3, double param_4, double param_5, double param_6); // size[17]
	void active_float_changed(IVP_U_Active_Float *param_1); // size[151]
	~IVP_U_Active_Sine(); // size[250]
	~IVP_U_Active_Sine(); // size[272]
	IVP_U_Active_Sine(char *param_1, IVP_U_Active_Float *param_2, double param_3, double param_4, double param_5, double param_6); // size[250]
};
