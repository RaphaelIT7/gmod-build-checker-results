// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_U_Active_Float : public IVP_U_Active_Value
{
public:
	IVP_U_Active_Float(char *param_1); // size[87]
	~IVP_U_Active_Float(); // size[75]
	~IVP_U_Active_Float(); // size[86]
	void update_derived(); // size[95]
	void add_dependency(IVP_U_Active_Float_Listener *param_1); // size[60]
	void remove_dependency(IVP_U_Active_Float_Listener *param_1); // size[172]
	void give_double_value(); // size[6]
	void get_float_value(); // size[10]
};
