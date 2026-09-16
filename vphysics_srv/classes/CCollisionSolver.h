// Generated header
// Estimated minimum size: 0x14C (332) bytes

class CCollisionSolver : public IVP_Collision_Filter, public IVP_Anomaly_Manager
{
public:
	virtual void check_objects_for_collision_detection(IVP_Real_Object *param_1, IVP_Real_Object *param_2); // vtable[0]
	virtual void environment_will_be_deleted(IVP_Environment *param_1); // vtable[1]
	virtual ~CCollisionSolver(); // vtable[2]
	virtual ~CCollisionSolver(); // vtable[3]
	virtual void inter_penetration(IVP_Mindist *param_1, IVP_Real_Object *param_2, IVP_Real_Object *param_3, double param_4); // vtable[4]
	virtual void max_collisions_exceeded_check_freezing(IVP_Anomaly_Limits *param_1, IVP_Core *param_2); // vtable[5]
	virtual void max_collision_checks_exceeded(int param_1); // vtable[6]
	virtual void max_velocity_exceeded(IVP_Anomaly_Limits *param_1, IVP_Core *param_2, IVP_U_Float_Point *param_3); // vtable[7]
	virtual void max_contacts_exceeded_check_freezing(IVP_Core * *param_1, int param_2); // vtable[8]
	virtual void max_velocity_exceeded(IVP_Anomaly_Limits *param_1, IVP_Core *param_2, IVP_U_Float_Point *param_3) override; // vtable[0]
	virtual void inter_penetration(IVP_Mindist *param_1, IVP_Real_Object *param_2, IVP_Real_Object *param_3, double param_4) override; // vtable[2]
	virtual void max_collisions_exceeded_check_freezing(IVP_Anomaly_Limits *param_1, IVP_Core *param_2) override; // vtable[3]
	virtual void max_collision_checks_exceeded(int param_1) override; // vtable[4]
	virtual void max_contacts_exceeded_check_freezing(IVP_Core * *param_1, int param_2) override; // vtable[5]
	virtual void environment_will_be_deleted(IVP_Environment *param_1) override; // vtable[6]
	virtual ~CCollisionSolver() override; // vtable[8]
	virtual ~CCollisionSolver() override; // vtable[9]
};
