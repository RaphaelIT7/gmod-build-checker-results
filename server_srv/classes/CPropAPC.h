// Generated header

class CPropAPC : public CPropVehicleDriveable
{
public:
	virtual void ~CPropAPC() override; // vtable[0]
	virtual void ~CPropAPC() override; // vtable[1]
	virtual void ClassifyPassenger(); // vtable[315]
	virtual void PassengerDamageModifier(); // vtable[316]

	void InputDestroy();
	void InputFireMissileAt();
	void ProcessMovement();
	void GetBaseMap();
	void CreateAPCLaserDot();
	void AddSmokeTrail();
	void ExplodeAndThrowChunk();
	void UpdateWaterLevel();
	void AimSecondaryWeaponAt();
	void AimPrimaryWeapon();
	void DoMuzzleFlash();
	void FireMachineGun();
	void GetRocketShootPosition();
	void CreateCorpse();
	void FireDying();
	void FireRocket();
	void MaxAttackRange();
};
