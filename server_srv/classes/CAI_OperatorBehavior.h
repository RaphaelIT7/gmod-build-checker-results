// Generated header

class CAI_OperatorBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_OperatorBehavior() override; // vtable[0]
	virtual void ~CAI_OperatorBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void SetParameters() override; // vtable[71]
	virtual void LoadedSchedules() override; // vtable[72]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void CanSeePositionEntity();
	void IsAtPositionEntity();
	void GetGoalEntity();
	void IsGoalReady();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_OperatorBehavior();
};
