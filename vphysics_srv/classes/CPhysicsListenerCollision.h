// Generated header

class CPhysicsListenerCollision : public IVP_Listener_Collision, public IVP_Listener_Phantom
{
public:
	virtual void event_pre_collision(); // vtable[0]
	virtual void event_post_collision(); // vtable[1]
	virtual void event_collision_object_deleted(); // vtable[2]
	virtual void event_friction_created(); // vtable[3]
	virtual void event_friction_deleted() override; // vtable[4]
	virtual void event_friction_pair_created() override; // vtable[5]
	virtual void event_friction_pair_deleted() override; // vtable[6]
	virtual ~CPhysicsListenerCollision() override; // vtable[7]
	virtual ~CPhysicsListenerCollision() override; // vtable[8]
	virtual void mindist_entered_volume(); // vtable[9]
	virtual void mindist_left_volume(); // vtable[10]
	virtual void core_entered_volume(); // vtable[11]
	virtual void core_left_volume(); // vtable[12]
	virtual void phantom_is_going_to_be_deleted_event(); // vtable[13]

	CPhysicsListenerCollision(); // size[0]
	void mindist_entered_volume(); // size[0]
	void mindist_left_volume(); // size[0]
	void phantom_is_going_to_be_deleted_event(); // size[0]
	void CorePairLessFunc(); // size[0]
	void core_left_volume(); // size[0]
	void core_entered_volume(); // size[0]
	void EventPSI(); // size[0]
};
