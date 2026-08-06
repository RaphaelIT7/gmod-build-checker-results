// Generated header

class CNPC_Citizen : public CNPC_PlayerCompanion
{
public:
	virtual void ~CNPC_Citizen() override; // vtable[0]
	virtual void ~CNPC_Citizen() override; // vtable[1]

	void InputStartPatrolling();
	void InputStopPatrolling();
	void InputSpeakIdleResponse();
	void PlayerSquadCandidateSortFunc();
	void SimpleUse();
	void UseSemaphore();
	void InputSetAmmoResupplierOn();
	void InputSetMedicOn();
	void InputSetAmmoResupplierOff();
	void InputSetMedicOff();
	void InputSetCommandable();
	void TossHealthKit();
	void InputForceHealthKitToss();
	void GetBaseMap();
	void SelectExpressionType();
	void FixupMattWeapon();
	void SelectScheduleRetrieveItem();
	void IsManhackMeleeCombatant();
	void SelectScheduleManhackCombat();
	void CanJoinPlayerSquad();
	void WasInPlayerSquad();
	void HaveCommandGoal();
	void ShouldSpeakRadio();
	void ClearFollowTarget();
	void FixupPlayerSquad();
	void AddToPlayerSquad();
	void RemoveFromPlayerSquad();
	void IsFollowingCommandPoint();
	void UpdateFollowCommandPoint();
	void CanHeal();
	void ShouldHealTarget();
	void ShouldHealTossTarget();
	void SelectScheduleHeal();
	void Heal();
	void TossHealthKit();
	void ShouldLookForHealthItem();
	void AddInsignia();
	void RemoveInsignia();
	void PrecacheAllOfType();
	void SpeakCommandResponse();
	void TogglePlayerSquadState();
	void CommanderUse();
	void MoveOrder();
	void UpdatePlayerSquad();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void InputRemoveFromPlayerSquad();
};
