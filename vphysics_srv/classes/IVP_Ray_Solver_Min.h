// Generated header

class IVP_Ray_Solver_Min : public IVP_Ray_Solver
{
public:
	virtual void add_hit_object(IVP_Real_Object *param_1, IVP_Compact_Ledge *param_2, IVP_Compact_Triangle *param_3, double param_4, IVP_U_Point *param_5) override; // vtable[0]
	virtual ~IVP_Ray_Solver_Min(); // vtable[1]
	virtual ~IVP_Ray_Solver_Min(); // vtable[2]

	void get_ray_hit(); // size[31]
	void get_ray_dist(); // size[11]
	IVP_Ray_Solver_Min(IVP_Ray_Solver_Template *param_1); // size[36]
};
