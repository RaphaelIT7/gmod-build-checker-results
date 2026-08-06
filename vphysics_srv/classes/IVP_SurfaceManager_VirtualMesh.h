// Generated header

class IVP_SurfaceManager_VirtualMesh : public IVP_SurfaceManager
{
public:
	virtual void get_single_convex(); // vtable[0]
	virtual void get_mass_center(IVP_U_Float_Point *param_1); // vtable[1]
	virtual void get_radius_and_radius_dev_to_given_center(IVP_U_Float_Point *param_1, float *param_2, float *param_3); // vtable[2]
	virtual void get_rotation_inertia(IVP_U_Float_Point *param_1); // vtable[3]
	virtual void get_all_ledges_within_radius(IVP_U_Point *param_1, double param_2, IVP_Compact_Ledge *param_3, IVP_Real_Object *param_4, IVP_Compact_Ledge *param_5, IVP_U_BigVector *param_6); // vtable[4]
	virtual void get_all_terminal_ledges(IVP_U_BigVector *param_1); // vtable[5]
	virtual void insert_all_ledges_hitting_ray(IVP_Ray_Solver *param_1, IVP_Real_Object *param_2); // vtable[6]
	virtual void add_reference_to_ledge(IVP_Compact_Ledge *param_1) override; // vtable[7]
	virtual void remove_reference_to_ledge(IVP_Compact_Ledge *param_1) override; // vtable[8]
	virtual ~IVP_SurfaceManager_VirtualMesh(); // vtable[9]
	virtual ~IVP_SurfaceManager_VirtualMesh(); // vtable[10]
	virtual void get_type() override; // vtable[11]

	void insert_all_ledges_hitting_ray(IVP_Ray_Solver *param_1, IVP_Real_Object *param_2); // size[32]
	IVP_SurfaceManager_VirtualMesh(CPhysCollideVirtualMesh *param_1); // size[20]
};
