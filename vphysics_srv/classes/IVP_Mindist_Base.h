// Generated header

class IVP_Mindist_Base : public IVP_Collision
{
public:
	virtual ~IVP_Mindist_Base() override; // vtable[0]
	virtual ~IVP_Mindist_Base() override; // vtable[1]
	virtual void get_objects(IVP_Real_Object * *param_1); // vtable[3]
	virtual void get_ledges(IVP_Compact_Ledge * *param_1); // vtable[4]
	virtual void delegator_is_going_to_be_deleted_event(IVP_Collision_Delegator *param_1); // vtable[5]

	IVP_Mindist_Base(IVP_Collision_Delegator *param_1); // size[14]
	void get_mindist_synapse(int param_1); // size[15]
	void get_mindist_synapse(int param_1); // size[15]
	void get_length(); // size[11]
};
