// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_U_Active_Int : public IVP_U_Active_Value
{
public:
	IVP_U_Active_Int(char *param_1); // size[80]
	~IVP_U_Active_Int(); // size[75]
	~IVP_U_Active_Int(); // size[86]
	void update_derived(); // size[340]
	void add_dependency(IVP_U_Active_Int_Listener *param_1); // size[60]
	void remove_dependency(IVP_U_Active_Int_Listener *param_1); // size[172]
	void give_int_value(); // size[4]
};
