// Generated header

class CAI_BaseFlyingBot : public CAI_BaseNPC
{
public:
	virtual ~CAI_BaseFlyingBot() override; // vtable[0]
	virtual ~CAI_BaseFlyingBot() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void GetVelocity(Vector *param_1, Vector *param_2) override; // vtable[143]
	virtual void BodyAngles() override; // vtable[299]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void TranslateNavGoal(CBaseEntity *param_1, Vector *param_2) override; // vtable[613]
	virtual void MinGroundDist(); // vtable[652]
	virtual void GetHeadTurnRate(); // vtable[653]
	virtual void __cxa_pure_virtual(); // vtable[654]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void TurnHeadToTarget(floatparam_1, Vector *param_2); // size[235]
	void VelocityToAvoidObstacles(floatparam_1); // size[698]
	void MoveToTarget(floatparam_1, Vector *param_2); // size[5]
	void ProgressFlyPath(floatparam_1, CBaseEntity *param_2, uintparam_3, boolparam_4, floatparam_5); // size[175]
	CAI_BaseFlyingBot(); // size[18]
};
