// Generated header

class IVP_U_Active_Limit : public IVP_U_Active_Float, public IVP_U_Active_Float_Listener
{
public:
	virtual ~IVP_U_Active_Limit() override; // vtable[0]
	virtual ~IVP_U_Active_Limit() override; // vtable[1]
	virtual void print(); // vtable[2]
	virtual void active_float_changed(IVP_U_Active_Float *param_1); // vtable[3]

	IVP_U_Active_Limit(char *param_1, IVP_U_Active_Float *param_2, double param_3, double param_4); // size[17]
	void active_float_changed(IVP_U_Active_Float *param_1); // size[117]
	~IVP_U_Active_Limit(); // size[250]
	~IVP_U_Active_Limit(); // size[272]
	IVP_U_Active_Limit(char *param_1, IVP_U_Active_Float *param_2, double param_3, double param_4); // size[291]
};
