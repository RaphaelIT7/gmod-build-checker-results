// Generated header

class CAI_BasePhysicsFlyingBot : public CAI_BaseNPC, public IMotionEvent
{
public:
	virtual ~CAI_BasePhysicsFlyingBot() override; // vtable[0]
	virtual ~CAI_BasePhysicsFlyingBot() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldSavePhysics() override; // vtable[43]
	virtual void GetVelocity() override; // vtable[143]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void BodyAngles() override; // vtable[299]
	virtual void StartTask() override; // vtable[410]
	virtual void TranslateNavGoal() override; // vtable[613]
	virtual void MinGroundDist(); // vtable[652]
	virtual void TurnHeadToTarget(); // vtable[653]
	virtual void __cxa_pure_virtual(); // vtable[654]
	virtual void GetHeadTurnRate(); // vtable[655]
	virtual void Simulate(); // vtable[656]
	virtual void ClampMotorForces(); // vtable[657]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void Simulate(); // size[0]
	void GetBaseMap(); // size[0]
	void VelocityToAvoidObstacles(); // size[0]
	void MoveToTarget(); // size[0]
	void ProgressFlyPath(); // size[0]
	CAI_BasePhysicsFlyingBot(); // size[0]
};
