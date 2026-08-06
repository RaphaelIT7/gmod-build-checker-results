// Generated header

class CPhysGunControllerPoint : public IMotionEvent
{
public:
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5) override; // vtable[0]

	CPhysGunControllerPoint(); // size[94]
	void SetTargetRotation(QAngle *param_1); // size[47]
	void ValidatePhysObj(); // size[42]
	void SetTargetPosition(Vector *param_1, CBasePlayer *param_2); // size[271]
	void AttachEntity(CBasePlayer *param_1, CBaseEntity *param_2, IPhysicsObject *param_3, Vector *param_4); // size[695]
	void DetachEntity(bool param_1); // size[287]
	~CPhysGunControllerPoint(); // size[33]
};
