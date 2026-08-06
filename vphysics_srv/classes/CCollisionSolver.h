// Generated header

class CCollisionSolver : public IVP_Collision_Filter, public IVP_Anomaly_Manager
{
public:
	virtual void check_objects_for_collision_detection(IVP_Real_Object *param_1, IVP_Real_Object *param_2) override; // vtable[0]
	virtual void environment_will_be_deleted(IVP_Environment *param_1) override; // vtable[1]
	virtual ~CCollisionSolver() override; // vtable[2]
	virtual ~CCollisionSolver() override; // vtable[3]
	virtual void inter_penetration(IVP_Mindist *param_1, IVP_Real_Object *param_2, IVP_Real_Object *param_3, doubleparam_4) override; // vtable[4]
	virtual void max_collisions_exceeded_check_freezing(IVP_Anomaly_Limits *param_1, IVP_Core *param_2) override; // vtable[5]
	virtual void max_collision_checks_exceeded(intparam_1) override; // vtable[6]
	virtual void max_velocity_exceeded(IVP_Anomaly_Limits *param_1, IVP_Core *param_2, IVP_U_Float_Point *param_3) override; // vtable[7]
	virtual void max_contacts_exceeded_check_freezing(IVP_Core * *param_1, intparam_2) override; // vtable[8]

	void environment_will_be_deleted(IVP_Environment *param_1); // size[1]
	void max_collisions_exceeded_check_freezing(IVP_Anomaly_Limits *param_1, IVP_Core *param_2); // size[52]
	void max_collision_checks_exceeded(intparam_1); // size[28]
	~CCollisionSolver(); // size[104]
	~CCollisionSolver(); // size[112]
	void max_contacts_exceeded_check_freezing(IVP_Core * *param_1, intparam_2); // size[10]
	void inter_penetration(IVP_Mindist *param_1, IVP_Real_Object *param_2, IVP_Real_Object *param_3, doubleparam_4); // size[10]
	void max_velocity_exceeded(IVP_Anomaly_Limits *param_1, IVP_Core *param_2, IVP_U_Float_Point *param_3); // size[86]
};
