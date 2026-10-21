// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Anomaly_Limits
{
public:
	virtual void environment_will_be_deleted(IVP_Environment *param_1); // vtable[0]
	virtual ~IVP_Anomaly_Limits(); // vtable[1]
	virtual ~IVP_Anomaly_Limits(); // vtable[2]

	IVP_Anomaly_Limits(IVP_BOOL param_1); // size[56]
	void get_max_velocity(); // size[6]
	void get_max_angular_velocity_per_psi(); // size[6]
	void get_max_collisions_per_psi(); // size[4]
	void get_max_collision_checks_per_psi(); // size[4]
};
