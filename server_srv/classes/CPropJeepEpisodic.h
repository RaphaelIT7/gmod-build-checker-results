// Generated header

class CPropJeepEpisodic : public CPropJeep
{
public:
	virtual void ~CPropJeepEpisodic() override; // vtable[0]
	virtual void ~CPropJeepEpisodic() override; // vtable[1]
	virtual void OnFailedPhysGunPickup(); // vtable[318]
	virtual void ShouldPuntUseLaunchForces(); // vtable[319]
	virtual void PhysGunLaunchAngularImpulse(); // vtable[320]
	virtual void PhysGunLaunchVelocity(); // vtable[321]

	void InputLockEntrance();
	void InputUnlockEntrance();
	void InputLockExit();
	void InputUnlockExit();
	void InputEnableRadarDetectEnemies();
	void InputDisableRadarDetectEnemies();
	void InputDisablePhysGun();
	void InputEnablePhysGun();
	void NPC_CanEnterVehicle();
	void NPC_CanExitVehicle();
	void HazardBlinkThink();
	void InputDestroyLinkController();
	void NPC_FinishedEnterVehicle();
	void NPC_FinishedExitVehicle();
	void PhysGunLaunchAngularImpulse();
	void AllowBlockedExit();
	void InputOutsideTransition();
	void InputCreateLinkController();
	void CreateHazardLights();
	void InputEnableHazardLights();
	void ExitVehicle();
	void GetBaseMap();
	void CPropJeepEpisodic();
	void PassengerInTransition();
	void PhysGunLaunchVelocity();
	void CreateCargoTrigger();
	void UpdateWheelDust();
	void UpdateCargoEntry();
	void CreateAvoidanceZone();
	void AddPropToCargoHold();
	void ReleasePropFromCargoHold();
	void InputReleaseBusterFromCargo();
	void InputAddBusterToCargo();
	void OnFailedPhysGunPickup();
	void CreateHazardLights();
	void DestroyHazardLights();
	void EnterVehicle();
	void InputDisableHazardLights();
	void SetBusterHopperVisibility();
	void InputSetCargoVisibility();
	void InputEnableRadar();
	void DestroyRadarPanel();
	void InputDisableRadar();
	void UpdateRadar();
	void PassengerShouldReceiveDamage();
	void ShouldPuntUseLaunchForces();
};
