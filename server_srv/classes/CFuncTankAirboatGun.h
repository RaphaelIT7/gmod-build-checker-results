// Generated header

class CFuncTankAirboatGun : public CFuncTank
{
public:
	virtual ~CFuncTankAirboatGun() override; // vtable[0]
	virtual ~CFuncTankAirboatGun() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void GetTracerType() override; // vtable[22]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void DoImpactEffect() override; // vtable[116]
	virtual void OnStopControlled() override; // vtable[249]
	virtual void DoMuzzleFlash() override; // vtable[250]
	virtual void WorldBarrelPosition() override; // vtable[252]
	virtual void Fire() override; // vtable[254]
	virtual void ControllerPostFrame() override; // vtable[258]

	void StopFiring(); // size[0]
	void CreateSounds(); // size[0]
	void DestroySounds(); // size[0]
	void StartFiring(); // size[0]
	void StopFiring(); // size[0]
};
