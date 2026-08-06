// Generated header

class CAI_AssaultBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_AssaultBehavior() override; // vtable[0]
	virtual void ~CAI_AssaultBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void LoadedSchedules() override; // vtable[71]

	void GetBaseMap();
	void ReceiveAssaultCue();
	void AssaultHasBegun();
	void SetAssaultPoint();
	void OnHitAssaultPoint();
	void FindBestRallyPointInRadius();
	void OnStrictAssault();
	void IsForcingCrouch();
	void UpdateForceCrouch();
	void IsUrgent();
	void UnlockRallyPoint();
	void PollAssaultCue();
	void ClearSchedule();
	void IsAllowedToDivert();
	void FindAssaultPoint();
	void ClearAssaultPoint();
	void InitializeBehavior();
	void SetParameters();
	void SetParameters();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_AssaultBehavior();
};
