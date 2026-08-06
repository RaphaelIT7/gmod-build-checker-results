// Generated header

class IVP_U_Active_Pulse : public IVP_U_Active_Float, public IVP_U_Active_Float_Listener
{
public:
	virtual ~IVP_U_Active_Pulse() override; // vtable[0]
	virtual ~IVP_U_Active_Pulse() override; // vtable[1]
	virtual void print(); // vtable[2]
	virtual void active_float_changed(IVP_U_Active_Float *param_1); // vtable[3]

	IVP_U_Active_Pulse(char *param_1, IVP_U_Active_Float *param_2, double param_3, int param_4, int param_5, double param_6, double param_7); // size[17]
	void active_float_changed(IVP_U_Active_Float *param_1); // size[153]
	~IVP_U_Active_Pulse(); // size[204]
	~IVP_U_Active_Pulse(); // size[272]
	IVP_U_Active_Pulse(char *param_1, IVP_U_Active_Float *param_2, double param_3, int param_4, int param_5, double param_6, double param_7); // size[249]
};
