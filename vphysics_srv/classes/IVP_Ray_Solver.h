// Generated header

class IVP_Ray_Solver : public IVP_Ray_Hit_Listener
{
public:
	_GLOBAL__sub_I_IVP_Ray_Solver(); // size[1]
	IVP_Ray_Solver(IVP_Ray_Solver_Template *param_1); // size[287]
	void check_ray_against_square(floatparam_1, floatparam_2, IVP_U_Float_Point *param_3, IVP_U_Float_Point *param_4, intparam_5, intparam_6); // size[161]
	void check_ray_against_cube(IVP_U_Float_Point *param_1, IVP_U_Float_Point *param_2); // size[1305]
	void check_ray_against_ball(IVP_Ball *param_1); // size[612]
	void check_ray_against_object(IVP_Real_Object *param_1); // size[133]
	void check_ray_against_node(IVP_OV_Node *param_1, IVP_OV_Tree_Manager *param_2); // size[409]
	void check_ray_against_all_objects_in_sim(IVP_Environment *param_1); // size[36]
	~IVP_Ray_Solver(); // size[1]
	~IVP_Ray_Solver(); // size[5]
};
