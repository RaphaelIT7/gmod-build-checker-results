// Generated header

class CAI_PolicingBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_PolicingBehavior() override; // vtable[0]
	virtual void ~CAI_PolicingBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void TargetIsHostile();
	void Enable();
	void Disable();
	void HostSetBatonState();
	void HostBatonIsOn();
	void HostSpeakSentence();
	void AnnouncePolicing();
	void GetGoalTarget();
	void SetTargetHostileDuration();
	void MaintainGoalPosition();
	void ShouldKnockOutTarget();
	void KnockOutTarget();
	void SelectSuppressSchedule();
	void SelectHarassSchedule();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_PolicingBehavior();
};
