// Generated header
// Estimated minimum size: 0x15B4 (5556) bytes

class CGrenadeSpit : public CBaseGrenade
{
public:
	virtual ~CGrenadeSpit() override; // vtable[0]
	virtual ~CGrenadeSpit() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
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

	void GrenadeSpitTouch(CBaseEntity *param_1); // size[1065]
	void GrenadeSpitTouch(CBaseEntity *param_1); // size[44]
	void GetBaseMap(); // size[10]
	CGrenadeSpit(); // size[67]
	void SetSpitSize(int param_1); // size[196]
	void InitHissSound(); // size[34]
};
