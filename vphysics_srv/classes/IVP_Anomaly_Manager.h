// Generated header

class IVP_Anomaly_Manager
{
public:
	virtual void max_velocity_exceeded(); // vtable[0]
	virtual void max_angular_velocity_exceeded(); // vtable[1]
	virtual void inter_penetration(); // vtable[2]
	virtual void max_collisions_exceeded_check_freezing(); // vtable[3]
	virtual void max_collision_checks_exceeded(); // vtable[4]
	virtual void max_contacts_exceeded_check_freezing(); // vtable[5]
	virtual void environment_will_be_deleted(); // vtable[6]
	virtual void get_push_speed_penetration(); // vtable[7]
	virtual ~IVP_Anomaly_Manager(); // vtable[8]
	virtual ~IVP_Anomaly_Manager(); // vtable[9]

	IVP_Anomaly_Manager(); // size[0]
	void solve_inter_penetration_simple(); // size[0]
};
