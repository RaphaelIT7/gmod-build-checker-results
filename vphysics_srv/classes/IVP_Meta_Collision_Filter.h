// Generated header

class IVP_Meta_Collision_Filter : public IVP_Collision_Filter
{
public:
	virtual void check_objects_for_collision_detection(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // vtable[0]
	virtual void environment_will_be_deleted(IVP_Environment *param_1) override; // vtable[1]
	virtual ~IVP_Meta_Collision_Filter(); // vtable[2]
	virtual ~IVP_Meta_Collision_Filter(); // vtable[3]

	void add_collision_filter(IVP_Collision_Filter *param_1); // size[60]
	void remove_collision_filter(IVP_Collision_Filter *param_1); // size[134]
	IVP_Meta_Collision_Filter(IVP_BOOLparam_1); // size[34]
};
