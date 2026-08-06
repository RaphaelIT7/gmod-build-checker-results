// Generated header

class IVP_U_Active_Switch : public IVP_U_Active_Float, public IVP_U_Active_Float_Listener, public IVP_U_Active_Int_Listener
{
public:
	virtual ~IVP_U_Active_Switch() override; // vtable[0]
	virtual ~IVP_U_Active_Switch() override; // vtable[1]
	virtual void print(); // vtable[2]
	virtual void active_float_changed(IVP_U_Active_Float *param_1); // vtable[3]
	virtual void active_int_changed(IVP_U_Active_Int *param_1); // vtable[4]

	IVP_U_Active_Switch(char *param_1, IVP_U_Active_Int *param_2, IVP_U_Active_Float *param_3, IVP_U_Active_Float *param_4); // size[17]
	void active_float_changed(IVP_U_Active_Float *param_1); // size[117]
	void active_int_changed(IVP_U_Active_Int *param_1); // size[152]
	~IVP_U_Active_Switch(); // size[10]
	~IVP_U_Active_Switch(); // size[10]
	~IVP_U_Active_Switch(); // size[34]
	~IVP_U_Active_Switch(); // size[34]
};
