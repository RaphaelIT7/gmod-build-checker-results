// Generated header
// Estimated minimum size: 0x5E5B1CC8 (1583029448) bytes

class CGrenadeHomer : public CBaseGrenade
{
public:
	virtual ~CGrenadeHomer() override; // vtable[0]
	virtual ~CGrenadeHomer() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void Detonate() override; // vtable[283]
	virtual void OnAttemptPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // vtable[0]
	virtual void OnFailedPhysGunPickup(Vector param_1); // vtable[1]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // vtable[2]
	virtual void OnPhysGunDrop(CBasePlayer *param_1, PhysGunDrop_t param_2); // vtable[3]
	virtual void HasPreferredCarryAnglesForPlayer(CBasePlayer *param_1); // vtable[4]
	virtual void PreferredCarryAngles(); // vtable[5]
	virtual void ForcePhysgunOpen(CBasePlayer *param_1); // vtable[6]
	virtual void PhysGunLaunchAngularImpulse(); // vtable[7]
	virtual void ShouldPuntUseLaunchForces(PhysGunForce_t param_1); // vtable[8]
	virtual void PhysGunLaunchVelocity(Vector *param_1, float param_2); // vtable[9]

	void GetBaseMap(); // size[10]
	void CreateGrenadeHomer(string_t param_1, string_t param_2, Vector *param_3, QAngle *param_4, edict_t *param_5); // size[202]
	void SetSpin(float param_1, float param_2); // size[94]
	void SetHoming(float param_1, float param_2, float param_3, float param_4, float param_5); // size[73]
	void StartRocketTrail(); // size[68]
	void UpdateRocketTrail(float param_1); // size[426]
	void StopRocketTrail(); // size[159]
	void GrenadeHomerTouch(CBaseEntity *param_1); // size[25]
	void PlayFlySound(); // size[103]
	void AimThink(); // size[2485]
	void Launch(CBaseEntity *param_1, CBaseEntity *param_2, Vector *param_3, float param_4, float param_5, int param_6); // size[173]
};
