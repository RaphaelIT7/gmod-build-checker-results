// Generated header

class IVP_Anchor_Check_Dist : public IVP_Listener_Hull
{
public:
	virtual void get_type(); // vtable[0]
	virtual void hull_limit_exceeded_event(IVP_Hull_Manager *param_1, floatparam_2); // vtable[1]
	virtual void hull_manager_is_going_to_be_deleted_event(IVP_Hull_Manager *param_1) override; // vtable[2]
	virtual ~IVP_Anchor_Check_Dist(); // vtable[4]
	virtual ~IVP_Anchor_Check_Dist(); // vtable[5]

	void init_anchor_check_dist(IVP_Real_Object *param_1, IVP_U_Point *param_2, IVP_Actuator_Check_Dist *param_3); // size[128]
	IVP_Anchor_Check_Dist(); // size[14]
};
