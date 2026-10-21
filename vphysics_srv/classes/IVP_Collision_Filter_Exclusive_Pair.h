// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Collision_Filter_Exclusive_Pair : public IVP_Collision_Filter
{
public:
	virtual void check_objects_for_collision_detection(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // vtable[0]
	virtual void environment_will_be_deleted(IVP_Environment *param_1); // vtable[1]
	virtual ~IVP_Collision_Filter_Exclusive_Pair(); // vtable[2]
	virtual ~IVP_Collision_Filter_Exclusive_Pair(); // vtable[3]

	IVP_Collision_Filter_Exclusive_Pair(); // size[16]
	void generate_hash_entry(IVP_Real_Object *param_1, IVP_Real_Object *param_2, IVP_CFEP_Objectpair *param_3); // size[32]
	void disable_collision_between_objects(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // size[233]
	void enable_collision_between_objects(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // size[208]
	IVP_Collision_Filter_Exclusive_Pair(); // size[78]
};
