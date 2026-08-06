// Generated header

class CAI_BaseFlyingBot : public CAI_BaseNPC
{
public:
	virtual void ~CAI_BaseFlyingBot() override; // vtable[0]
	virtual void ~CAI_BaseFlyingBot() override; // vtable[1]
	virtual void MinGroundDist(); // vtable[652]
	virtual void GetHeadTurnRate(); // vtable[653]
	virtual void __cxa_pure_virtual(); // vtable[654]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void TurnHeadToTarget();
	void VelocityToAvoidObstacles();
	void MoveToTarget();
	void ProgressFlyPath();
	void CAI_BaseFlyingBot();
};
