// Generated header

class CMissile : public CBaseCombatCharacter
{
public:
	virtual void ~CMissile() override; // vtable[0]
	virtual void ~CMissile() override; // vtable[1]
	virtual void DoExplosion(); // vtable[388]
	virtual void ComputeActualDotPosition(); // vtable[389]
	virtual void AugerHealth(); // vtable[390]

	void AccelerateThink();
	void GetBaseMap();
	void CMissile();
	void SetGracePeriod();
	void CreateSmokeTrail();
	void DumbFire();
	void IgniteThink();
	void Create();
	void ShotDown();
	void ShotDown();
	void Explode();
	void AugerThink();
	void MissileTouch();
	void SeekThink();
	void GetShootPosition();
};
