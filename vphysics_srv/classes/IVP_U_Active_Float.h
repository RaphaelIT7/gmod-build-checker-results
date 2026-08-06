// Generated header

class IVP_U_Active_Float : public IVP_U_Active_Value
{
public:
	IVP_U_Active_Float(char *param_1); // size[90]
	~IVP_U_Active_Float(); // size[66]
	~IVP_U_Active_Float(); // size[73]
	void update_derived(); // size[58]
	void add_dependency(IVP_U_Active_Float_Listener *param_1); // size[64]
	void remove_dependency(IVP_U_Active_Float_Listener *param_1); // size[165]
	void give_double_value(); // size[11]
	void get_float_value(); // size[28]
};
