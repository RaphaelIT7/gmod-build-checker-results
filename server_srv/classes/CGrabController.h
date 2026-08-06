// Generated header

class CGrabController : public IMotionEvent
{
public:
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5) override; // vtable[0]

	CGrabController(); // size[206]
	void OnRestore(); // size[33]
	void ComputeMaxSpeed(CBaseEntity *param_1, IPhysicsObject *param_2); // size[414]
	void TransformAnglesToPlayerSpace(QAngle *param_1, CBasePlayer *param_2); // size[109]
	void TransformAnglesFromPlayerSpace(QAngle *param_1, CBasePlayer *param_2); // size[109]
	void DetachEntity(bool param_1); // size[969]
	~CGrabController(); // size[33]
	void SetTargetPosition(Vector *param_1, QAngle *param_2); // size[174]
	void AttachEntity(CBasePlayer *param_1, CBaseEntity *param_2, IPhysicsObject *param_3, bool param_4, Vector *param_5, bool param_6); // size[2296]
	void ComputeError(); // size[376]
	void GetSavedMass(IPhysicsObject *param_1); // size[183]
	void UpdateObject(CBasePlayer *param_1, float param_2); // size[417]
};
