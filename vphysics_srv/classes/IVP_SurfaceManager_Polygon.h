// Generated header

class IVP_SurfaceManager_Polygon : public IVP_SurfaceManager
{
public:
	virtual void get_single_convex(); // vtable[0]
	virtual void get_mass_center(); // vtable[1]
	virtual void get_radius_and_radius_dev_to_given_center(); // vtable[2]
	virtual void get_rotation_inertia(); // vtable[3]
	virtual void get_all_ledges_within_radius(); // vtable[4]
	virtual void get_all_terminal_ledges(); // vtable[5]
	virtual void insert_all_ledges_hitting_ray(); // vtable[6]
	virtual void add_reference_to_ledge() override; // vtable[8]
	virtual ~IVP_SurfaceManager_Polygon(); // vtable[9]
	virtual ~IVP_SurfaceManager_Polygon(); // vtable[10]
	virtual void get_type() override; // vtable[11]

	IVP_SurfaceManager_Polygon(); // size[0]
	void get_compact_surface(); // size[0]
	IVP_SurfaceManager_Polygon(); // size[0]
};
