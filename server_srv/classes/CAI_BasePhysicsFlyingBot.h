// Generated header

class CAI_BasePhysicsFlyingBot : public CAI_BaseNPC, public IMotionEvent
{
public:
	virtual ~CAI_BasePhysicsFlyingBot() override; // vtable[0]
	virtual ~CAI_BasePhysicsFlyingBot() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldSavePhysics() override; // vtable[43]
	virtual void GetVelocity(Vector *param_1, Vector *param_2) override; // vtable[143]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void BodyAngles() override; // vtable[299]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void TranslateNavGoal(CBaseEntity *param_1, Vector *param_2) override; // vtable[613]
	virtual void MinGroundDist(); // vtable[652]
	virtual void TurnHeadToTarget(float param_1, Vector *param_2); // vtable[653]
	virtual void __cxa_pure_virtual(); // vtable[654]
	virtual void GetHeadTurnRate(); // vtable[655]
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5); // vtable[656]
	virtual void ClampMotorForces(Vector *param_1, Vector *param_2); // vtable[657]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5); // size[13]
	void GetBaseMap(); // size[10]
	void VelocityToAvoidObstacles(float param_1); // size[698]
	void MoveToTarget(float param_1, Vector *param_2); // size[5]
	void ProgressFlyPath(float param_1, CBaseEntity *param_2, uint param_3, bool param_4, float param_5); // size[175]
	CAI_BasePhysicsFlyingBot(); // size[18]
};
