// Generated header

class CNPC_Vortigaunt : public CNPC_PlayerCompanion
{
public:
	virtual void ~CNPC_Vortigaunt() override; // vtable[0]
	virtual void ~CNPC_Vortigaunt() override; // vtable[1]
	virtual void ClearSchedule(); // vtable[739]
	virtual void DeclineFollowing(); // vtable[740]
	virtual void IsPlayerAlly(); // vtable[741]

	void InputEnableArmorRecharge();
	void InputDisableArmorRecharge();
	void InputEnableHealthRegeneration();
	void InputDisableHealthRegeneration();
	void InputDispel();
	void InputBeginCarryNPC();
	void InputEndCarryNPC();
	void InputExtractBugbait();
	void ClearBeams();
	void PlayerBelowHealthPercentage();
	void InputChargeTarget();
	void InputTurnBlack();
	void InputTurnBlue();
	void GetBaseMap();
	void PlayerBelowHealthPercentage();
	void NumAntlionsInRadius();
	void SetHealTarget();
	void HealBehaviorAvailable();
	void ShouldHealTarget();
	void FindHealTarget();
	void StartHealing();
	void ArmBeam();
	void CreateBeamBlast();
	void ClearHandGlow();
	void ClearBeams();
	void HealGestureHasLOS();
	void GatherHealConditions();
	void OnSquishedGrub();
	void StartHandGlow();
	void EndHandGlow();
	void StopHealing();
	void SelectHealSchedule();
	void MaintainHealSchedule();
	void MaintainGlows();
	void DispelAntlions();
	void ZapBeam();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Vortigaunt();
};
