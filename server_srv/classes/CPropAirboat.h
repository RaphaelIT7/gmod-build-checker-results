// Generated header

class CPropAirboat : public CPropVehicleDriveable
{
public:
	virtual void ~CPropAirboat() override; // vtable[0]
	virtual void ~CPropAirboat() override; // vtable[1]
	virtual void DoMuzzleFlash(); // vtable[315]
	virtual void PhysGunLaunchAngularImpulse(); // vtable[316]
	virtual void ShouldPuntUseLaunchForces(); // vtable[317]

	void _GLOBAL__sub_I_GetServerClass();
	void InputExitVehicle();
	void InputWake();
	void InputStartRotorWashForces();
	void InputStopRotorWashForces();
	void PhysGunLaunchAngularImpulse();
	void InputEnableGun();
	void GetBaseMap();
	void UpdateWeaponSound();
	void HeadlightTurnOn();
	void HeadlightTurnOff();
	void PreExitVehicle();
	void AimGunAt();
	void RemoveAmmo();
	void RechargeAmmo();
	void ComputeAimPoint();
	void UpdateWaterLevel();
	void UpdatePropeller();
	void UpdateGauge();
	void CreateSounds();
	void UpdateEngineSound();
	void UpdateFanSound();
	void UpdateWaterSound();
	void UpdateSound();
	void FireGun();
	void UpdateGunState();
	void CreateDangerSounds();
	void ProcessMovement();
	void ComputePDControllerCoefficients();
	void DampenForwardMotion();
	void DampenUpMotion();
	void CreateSplash();
	void UpdateSplashEffects();
	void CalculatePhysicsStressDamage();
	void ApplyStressDamage();
	void EnterVehicle();
	void ExitVehicle();
	void AllowBlockedExit();
	void PassengerShouldReceiveDamage();
	void ShouldPuntUseLaunchForces();
};
