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
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void GetDamage() override; // vtable[131]
	virtual void SetDamage(float param_1) override; // vtable[132]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void DoExplosion(); // vtable[388]
	virtual void ComputeActualDotPosition(CLaserDot *param_1, Vector *param_2, float *param_3); // vtable[389]
	virtual void AugerHealth(); // vtable[390]

	void AccelerateThink(); // size[68]
	void GetBaseMap(); // size[10]
	CMissile(); // size[50]
	void SetGracePeriod(float param_1); // size[71]
	void CreateSmokeTrail(); // size[129]
	void DumbFire(); // size[65]
	void IgniteThink(); // size[39]
	void Create(Vector *param_1, QAngle *param_2, edict_t *param_3); // size[273]
	void ShotDown(); // size[564]
	void ShotDown(); // size[23]
	void Explode(); // size[12]
	void AugerThink(); // size[287]
	void MissileTouch(CBaseEntity *param_1); // size[62]
	void SeekThink(); // size[1650]
	void GetShootPosition(CLaserDot *param_1, Vector *param_2); // size[159]
};
