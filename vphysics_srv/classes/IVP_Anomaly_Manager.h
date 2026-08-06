// Generated header

class IVP_Anomaly_Manager
{
public:
	virtual void max_velocity_exceeded(IVP_Anomaly_Limits *param_1, IVP_Core *param_2, IVP_U_Float_Point *param_3); // vtable[0]
	virtual void max_angular_velocity_exceeded(IVP_Anomaly_Limits *param_1, IVP_Core *param_2, IVP_U_Float_Point *param_3); // vtable[1]
	virtual void inter_penetration(IVP_Mindist *param_1, IVP_Real_Object *param_2, IVP_Real_Object *param_3, double param_4); // vtable[2]
	virtual void max_collisions_exceeded_check_freezing(IVP_Anomaly_Limits *param_1, IVP_Core *param_2); // vtable[3]
	virtual void max_collision_checks_exceeded(int param_1); // vtable[4]
	virtual void max_contacts_exceeded_check_freezing(IVP_Core * *param_1, int param_2); // vtable[5]
	virtual void environment_will_be_deleted(IVP_Environment *param_1); // vtable[6]
	virtual void get_push_speed_penetration(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // vtable[7]
	virtual ~IVP_Anomaly_Manager(); // vtable[8]
	virtual ~IVP_Anomaly_Manager(); // vtable[9]

	IVP_Anomaly_Manager(IVP_BOOL param_1); // size[20]
	void solve_inter_penetration_simple(IVP_Real_Object *param_1, IVP_Real_Object *param_2, double param_3); // size[577]
};
