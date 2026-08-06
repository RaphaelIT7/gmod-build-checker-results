// Generated header

class CPropJeep : public CPropVehicleDriveable
{
public:
	virtual void ~CPropJeep() override; // vtable[0]
	virtual void ~CPropJeep() override; // vtable[1]
	virtual void AllowBlockedExit(); // vtable[315]
	virtual void PassengerDamageModifier(); // vtable[316]
	virtual void HandleWater(); // vtable[317]

	void JeepSeagullThink();
	void CanExitVehicle();
	void InputShowHudHint();
	void InputFinishRemoveTauCannon();
	void InputStartRemoveTauCannon();
	void GetBaseMap();
	void CPropJeep();
	void AimGunAt();
	void InitWaterData();
	void CheckWaterLevel();
	void CheckWater();
	void CreateSplash();
	void CreateRipple();
	void DrawBeam();
	void ChargeCannon();
	void StopChargeSound();
	void GetCannonAim();
	void FireCannon();
	void FireChargedCannon();
	void ComputePDControllerCoefficients();
	void DampenForwardMotion();
	void DampenUpMotion();
	void CreateDangerSounds();
	void ProcessMovement();
	void AddSeagullPoop();
	void SpawnPerchedSeagull();
	void SetupMove();
	void EnterVehicle();
	void ExitVehicle();
	void PassengerShouldReceiveDamage();
};
