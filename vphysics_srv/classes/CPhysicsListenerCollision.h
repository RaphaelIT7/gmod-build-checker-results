// Generated header

class CPhysicsListenerCollision : public IVP_Listener_Collision, public IVP_Listener_Phantom
{
public:
	virtual void event_pre_collision(IVP_Event_Collision *param_1); // vtable[0]
	virtual void event_post_collision(IVP_Event_Collision *param_1); // vtable[1]
	virtual void event_collision_object_deleted(IVP_Real_Object *param_1); // vtable[2]
	virtual void event_friction_created(IVP_Event_Friction *param_1); // vtable[3]
	virtual void event_friction_deleted(IVP_Event_Friction *param_1) override; // vtable[4]
	virtual void event_friction_pair_created(IVP_Friction_Core_Pair *param_1) override; // vtable[5]
	virtual void event_friction_pair_deleted(IVP_Friction_Core_Pair *param_1) override; // vtable[6]
	virtual ~CPhysicsListenerCollision() override; // vtable[7]
	virtual ~CPhysicsListenerCollision() override; // vtable[8]
	virtual void mindist_entered_volume(IVP_Controller_Phantom *param_1, IVP_Mindist_Base *param_2); // vtable[9]
	virtual void mindist_left_volume(IVP_Controller_Phantom *param_1, IVP_Mindist_Base *param_2); // vtable[10]
	virtual void core_entered_volume(IVP_Controller_Phantom *param_1, IVP_Core *param_2); // vtable[11]
	virtual void core_left_volume(IVP_Controller_Phantom *param_1, IVP_Core *param_2); // vtable[12]
	virtual void phantom_is_going_to_be_deleted_event(IVP_Controller_Phantom *param_1); // vtable[13]

	CPhysicsListenerCollision(); // size[83]
	void mindist_entered_volume(IVP_Controller_Phantom *param_1, IVP_Mindist_Base *param_2); // size[1]
	void mindist_left_volume(IVP_Controller_Phantom *param_1, IVP_Mindist_Base *param_2); // size[1]
	void phantom_is_going_to_be_deleted_event(IVP_Controller_Phantom *param_1); // size[1]
	void CorePairLessFunc(corepair_t *param_1, corepair_t *param_2); // size[31]
	void core_left_volume(IVP_Controller_Phantom *param_1, IVP_Core *param_2); // size[113]
	void core_entered_volume(IVP_Controller_Phantom *param_1, IVP_Core *param_2); // size[113]
	void EventPSI(CPhysicsEnvironment *param_1); // size[624]
};
