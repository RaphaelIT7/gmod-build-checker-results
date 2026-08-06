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
	virtual void DoImpactEffect(CGameTrace *param_1, int param_2) override; // vtable[116]
	virtual void OnStopControlled() override; // vtable[249]
	virtual void DoMuzzleFlash() override; // vtable[250]
	virtual void WorldBarrelPosition() override; // vtable[252]
	virtual void Fire(int param_1, Vector *param_2, Vector *param_3, CBaseEntity *param_4, bool param_5) override; // vtable[254]
	virtual void ControllerPostFrame() override; // vtable[258]

	void StopFiring(); // size[117]
	void GetBaseMap(); // size[10]
	void CreateSounds(); // size[52]
	void DestroySounds(); // size[49]
	void StartFiring(); // size[120]
	void StopFiring(); // size[23]
};
