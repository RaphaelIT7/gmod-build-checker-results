// Generated header

class IVP_3D_Solver
{
public:
	virtual void __cxa_pure_virtual(); // vtable[0]

	void _GLOBAL__sub_I_calc_nullstelle(); // size[1]
	void calc_nullstelle(IVP_Time param_1, IVP_Time param_2, double param_3, double param_4, double param_5, IVP_Real_Object *param_6, IVP_Real_Object *param_7); // size[524]
	void find_first_t_for_value_max_dev(double param_1, IVP_Time param_2, IVP_Time param_3, int param_4, IVP_U_Matrix_Cache *param_5, IVP_U_Matrix_Cache *param_6, double *param_7, IVP_Time *param_8); // size[630]
	void find_first_t_for_value_max_dev2(double param_1, IVP_Time param_2, IVP_Time param_3, int param_4, IVP_U_Matrix_Cache *param_5, IVP_U_Matrix_Cache *param_6, double *param_7, IVP_Time *param_8); // size[5]
	void find_first_t_for_value_coll(double param_1, double param_2, IVP_Time param_3, IVP_Time param_4, IVP_U_Matrix_Cache *param_5, IVP_U_Matrix_Cache *param_6, double *param_7, IVP_Time *param_8); // size[637]
	void set_max_deviation(double param_1); // size[35]
};
