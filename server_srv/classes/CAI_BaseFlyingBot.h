// Generated header

class CAI_BaseFlyingBot : public CAI_BaseNPC
{
public:
	virtual ~CAI_BaseFlyingBot() override; // vtable[0]
	virtual ~CAI_BaseFlyingBot() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void GetVelocity() override; // vtable[143]
	virtual void BodyAngles() override; // vtable[299]
	virtual void StartTask() override; // vtable[410]
	virtual void TranslateNavGoal() override; // vtable[613]
	virtual void MinGroundDist(); // vtable[652]
	virtual void GetHeadTurnRate(); // vtable[653]
	virtual void __cxa_pure_virtual(); // vtable[654]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void TurnHeadToTarget(); // size[0]
	void VelocityToAvoidObstacles(); // size[0]
	void MoveToTarget(); // size[0]
	void ProgressFlyPath(); // size[0]
	CAI_BaseFlyingBot(); // size[0]
};
