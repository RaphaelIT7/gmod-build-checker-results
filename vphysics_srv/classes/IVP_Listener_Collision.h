// Generated header

class IVP_Listener_Collision
{
public:
	virtual void event_object_deleted(IVP_Real_Object *param_1); // vtable[4]
	virtual void event_friction_pair_created(IVP_Friction_Core_Pair *param_1); // vtable[5]
	virtual void event_friction_pair_deleted(IVP_Friction_Core_Pair *param_1); // vtable[6]
	virtual ~IVP_Listener_Collision(); // vtable[7]
	virtual ~IVP_Listener_Collision(); // vtable[8]

	void _GLOBAL__sub_I_event_pre_collision(); // size[1]
	void get_enabled_callbacks(); // size[11]
	IVP_Listener_Collision(intparam_1); // size[20]
};
