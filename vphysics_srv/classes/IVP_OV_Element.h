// Generated header

class IVP_OV_Element : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event() override; // vtable[2]
	virtual void ~IVP_OV_Element(); // vtable[4]
	virtual void ~IVP_OV_Element(); // vtable[5]

	void IVP_OV_Element();
	void add_to_hull_manager();
	void add_oo_collision();
	void remove_oo_collision();
};
