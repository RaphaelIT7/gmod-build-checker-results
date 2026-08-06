// Generated header

class CMissile : public CBaseCombatCharacter
{
public:
	virtual ~CMissile() override; // vtable[0]
	virtual ~CMissile() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed() override; // vtable[68]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void GetDamage() override; // vtable[131]
	virtual void SetDamage() override; // vtable[132]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void OnTakeDamage_Alive() override; // vtable[338]
	virtual void DoExplosion(); // vtable[388]
	virtual void ComputeActualDotPosition(); // vtable[389]
	virtual void AugerHealth(); // vtable[390]

	void AccelerateThink(); // size[0]
	void GetBaseMap(); // size[0]
	CMissile(); // size[0]
	void SetGracePeriod(); // size[0]
	void CreateSmokeTrail(); // size[0]
	void DumbFire(); // size[0]
	void IgniteThink(); // size[0]
	void Create(); // size[0]
	void ShotDown(); // size[0]
	void ShotDown(); // size[0]
	void Explode(); // size[0]
	void AugerThink(); // size[0]
	void MissileTouch(); // size[0]
	void SeekThink(); // size[0]
	void GetShootPosition(); // size[0]
};
