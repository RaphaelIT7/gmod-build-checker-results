// Generated header

class CNPC_Alyx : public CNPC_PlayerCompanion
{
public:
	virtual void ~CNPC_Alyx() override; // vtable[0]
	virtual void ~CNPC_Alyx() override; // vtable[1]

	void InputVehiclePunted();
	void GetBaseMap();
	void GetAlyx();
	void SetupAlyxWithoutParent();
	void CreateEmpTool();
	void InputGiveEMP();
	void AnalyzeGunfireSound();
	void EnemyIgnited();
	void RunningPassengerBehavior();
	void DoMobbedCombatAI();
	void DoCustomCombatAI();
	void CanSeeEntityInDarkness();
	void HolsterPistol();
	void DrawPistol();
	void IsValidInteractTarget();
	void SetInteractTarget();
	void SearchForInteractTargets();
	void EmpZapTarget();
	void CanBeBlindedByFlashlight();
	void PlayerFlashlightOnMyEyes();
	void BlindedByFlare();
	void CheckBlindedByFlare();
	void EnemyIsValidCrouchTarget();
	void IsAllowedToInteract();
	void CanInteractWithTarget();
	void GetPassengerState();
	void SpeakAttacking();
	void ComputeWeaponType();
	void CombineBallSocketed();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Alyx();
	void InputAllowInteraction();
	void InputDisallowInteraction();
	void InputAllowDarknessSpeech();
};
