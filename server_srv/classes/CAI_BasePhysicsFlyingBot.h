// Generated header

class CAI_BasePhysicsFlyingBot : public CAI_BaseNPC, public IMotionEvent
{
public:
	virtual void ~CAI_BasePhysicsFlyingBot() override; // vtable[0]
	virtual void ~CAI_BasePhysicsFlyingBot() override; // vtable[1]
	virtual void MinGroundDist(); // vtable[652]
	virtual void TurnHeadToTarget(); // vtable[653]
	virtual void __cxa_pure_virtual(); // vtable[654]
	virtual void GetHeadTurnRate(); // vtable[655]
	virtual void Simulate(); // vtable[656]
	virtual void ClampMotorForces(); // vtable[657]

	void _GLOBAL__sub_I_m_DataMap();
	void Simulate();
	void GetBaseMap();
	void VelocityToAvoidObstacles();
	void MoveToTarget();
	void ProgressFlyPath();
	void CAI_BasePhysicsFlyingBot();
};
