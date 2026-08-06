// Generated header

class IVP_OV_Element : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(IVP_Hull_Manager *param_1, floatparam_2); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event(IVP_Hull_Manager *param_1) override; // vtable[2]
	virtual ~IVP_OV_Element(); // vtable[4]
	virtual ~IVP_OV_Element(); // vtable[5]

	IVP_OV_Element(IVP_Real_Object *param_1); // size[89]
	void add_to_hull_manager(IVP_Hull_Manager *param_1, doubleparam_2); // size[212]
	void add_oo_collision(IVP_Collision *param_1); // size[88]
	void remove_oo_collision(IVP_Collision *param_1); // size[102]
};
