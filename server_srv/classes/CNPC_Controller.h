// Generated header

class CNPC_Controller : public CAI_BaseFlyingBot
{
public:
	virtual void ~CNPC_Controller() override; // vtable[0]
	virtual void ~CNPC_Controller() override; // vtable[1]
	virtual void MoveToTarget() override; // vtable[654]

	void GetBaseMap();
	void AttackSound();
	void LookupFloat();
	void Stop();
	void OverridePathMove();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
