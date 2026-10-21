// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_3D_Solver
{
public:
	void calc_nullstelle(IVP_Time param_1, IVP_Time param_2, double param_3, double param_4, double param_5, IVP_Real_Object *param_6, IVP_Real_Object *param_7); // size[503]
	void find_first_t_for_value_max_dev(double param_1, IVP_Time param_2, IVP_Time param_3, int param_4, IVP_U_Matrix_Cache *param_5, IVP_U_Matrix_Cache *param_6, double *param_7, IVP_Time *param_8); // size[685]
	void find_first_t_for_value_max_dev2(double param_1, IVP_Time param_2, IVP_Time param_3, int param_4, IVP_U_Matrix_Cache *param_5, IVP_U_Matrix_Cache *param_6, double *param_7, IVP_Time *param_8); // size[5]
	void find_first_t_for_value_coll(double param_1, double param_2, IVP_Time param_3, IVP_Time param_4, IVP_U_Matrix_Cache *param_5, IVP_U_Matrix_Cache *param_6, double *param_7, IVP_Time *param_8); // size[688]
	void set_max_deviation(double param_1); // size[23]
};
