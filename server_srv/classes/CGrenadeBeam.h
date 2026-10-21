// Generated header
// Estimated minimum size: 0x15E4 (5604) bytes

class CGrenadeBeam : public CBaseGrenade
{
public:
	virtual ~CGrenadeBeam() override; // vtable[0]
	virtual ~CGrenadeBeam() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
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

	void KillBeam(); // size[67]
	void GetBaseMap(); // size[10]
	void Create(CBaseEntity *param_1, Vector *param_2); // size[79]
	void Format(color32_s param_1, float param_2); // size[38]
	void GetChaserTargetPos(Vector *param_1); // size[182]
	void CreateBeams(); // size[775]
	void UpdateBeams(); // size[614]
	void GrenadeBeamTouch(CBaseEntity *param_1); // size[801]
	void GetNextTargetPos(Vector *param_1); // size[182]
	void Shoot(Vector param_1, float param_2, float param_3, float param_4, float param_5); // size[71]
};
