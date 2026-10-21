// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Ray_Solver : public IVP_Ray_Hit_Listener
{
public:
	IVP_Ray_Solver(IVP_Ray_Solver_Template *param_1); // size[265]
	void check_ray_against_square(float param_1, float param_2, IVP_U_Float_Point *param_3, IVP_U_Float_Point *param_4, int param_5, int param_6); // size[156]
	void check_ray_against_cube(IVP_U_Float_Point *param_1, IVP_U_Float_Point *param_2); // size[1013]
	void check_ray_against_ball(IVP_Ball *param_1); // size[649]
	void check_ray_against_object(IVP_Real_Object *param_1); // size[106]
	void check_ray_against_node(IVP_OV_Node *param_1, IVP_OV_Tree_Manager *param_2); // size[507]
	void check_ray_against_all_objects_in_sim(IVP_Environment *param_1); // size[19]
	~IVP_Ray_Solver(); // size[1]
	~IVP_Ray_Solver(); // size[5]
};
