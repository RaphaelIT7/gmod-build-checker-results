// Generated header

class IVP_U_Active_Value_Manager
{
public:
	virtual ~IVP_U_Active_Value_Manager(); // vtable[0]
	virtual ~IVP_U_Active_Value_Manager(); // vtable[1]
	virtual void environment_will_be_deleted(IVP_Environment *param_1); // vtable[2]
	virtual void insert_active_float(IVP_U_Active_Float *param_1); // vtable[3]
	virtual void remove_active_float(IVP_U_Active_Float *param_1); // vtable[4]
	virtual void insert_active_int(IVP_U_Active_Int *param_1); // vtable[5]
	virtual void remove_active_int(IVP_U_Active_Int *param_1); // vtable[6]
	virtual void delay_active_float(IVP_U_Active_Float_Delayed *param_1); // vtable[7]
	virtual void delay_active_int(IVP_U_Active_Int_Delayed *param_1); // vtable[8]
	virtual void update_delayed_active_values(); // vtable[9]
	virtual void init_active_values_generic(); // vtable[10]
	virtual void refresh_psi_active_values(IVP_Environment *param_1); // vtable[11]
	virtual void install_active_float(char *param_1, doubleparam_2); // vtable[12]
	virtual void create_active_float(char *param_1, doubleparam_2); // vtable[13]
	virtual void install_active_int(char *param_1, intparam_2); // vtable[14]
	virtual void create_active_int(char *param_1, intparam_2); // vtable[15]

	void create_active_int(char *param_1, intparam_2); // size[17]
	void install_active_int(char *param_1, intparam_2); // size[17]
	void init_active_values_generic(); // size[17]
	void create_active_float(char *param_1, doubleparam_2); // size[17]
	void install_active_float(char *param_1, doubleparam_2); // size[17]
	IVP_U_Active_Value_Manager(IVP_BOOLparam_1); // size[67]
	void get_active_float_by_name(char *param_1); // size[17]
	void get_active_int_by_name(char *param_1); // size[17]
	IVP_U_Active_Value_Manager(IVP_BOOLparam_1); // size[187]
	void get_active_float_by_name(char *param_1); // size[339]
	void get_active_int_by_name(char *param_1); // size[329]
};
