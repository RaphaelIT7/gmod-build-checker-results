// Generated header

class CCollisionSolver : public IVP_Collision_Filter, public IVP_Anomaly_Manager
{
public:
	virtual void check_objects_for_collision_detection() override; // vtable[0]
	virtual void environment_will_be_deleted() override; // vtable[1]
	virtual ~CCollisionSolver() override; // vtable[2]
	virtual ~CCollisionSolver() override; // vtable[3]
	virtual void inter_penetration() override; // vtable[4]
	virtual void max_collisions_exceeded_check_freezing() override; // vtable[5]
	virtual void max_collision_checks_exceeded() override; // vtable[6]
	virtual void max_velocity_exceeded() override; // vtable[7]
	virtual void max_contacts_exceeded_check_freezing() override; // vtable[8]

	void environment_will_be_deleted(); // size[0]
	void max_collisions_exceeded_check_freezing(); // size[0]
	void max_collision_checks_exceeded(); // size[0]
	~CCollisionSolver(); // size[0]
	~CCollisionSolver(); // size[0]
	void max_contacts_exceeded_check_freezing(); // size[0]
	void inter_penetration(); // size[0]
	void max_velocity_exceeded(); // size[0]
};
