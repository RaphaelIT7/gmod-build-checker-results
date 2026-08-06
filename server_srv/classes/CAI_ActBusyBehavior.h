// Generated header

class CAI_ActBusyBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_ActBusyBehavior() override; // vtable[0]
	virtual void ~CAI_ActBusyBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void LoadedSchedules() override; // vtable[71]

	void GetBaseMap();
	void SetBusySearchRange();
	void StopBusying();
	void Disable();
	void IsStopBusying();
	void FindActBusyHintNode();
	void FindCombatActBusyHintNode();
	void FindCombatActBusyTeleportHintNode();
	void CheckAndCleanupOnExit();
	void SelectScheduleForLeaving();
	void ActBusyNodeStillActive();
	void ComputeAndSetRenderBounds();
	void IsActive();
	void IsCombatActBusy();
	void IsCurScheduleOverridable();
	void SelectScheduleWhileBusy();
	void IsInSafeZone();
	void CountEnemiesInSafeZone();
	void HasAnimForActBusy();
	void SelectScheduleWhileNotBusy();
	void PlayAnimForActBusy();
	void NotifyBusyEnding();
	void PlaySoundForActBusy();
	void CollectSafeZoneVolumes();
	void Enable();
	void ForceActBusy();
	void ForceActBusyLeave();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_ActBusyBehavior();
};
