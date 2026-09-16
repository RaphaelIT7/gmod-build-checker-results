// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CGrenadeFrag : public CBaseGrenade
{
public:
	virtual ~CGrenadeFrag() override; // vtable[0]
	virtual ~CGrenadeFrag() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void OnRestore() override; // vtable[45]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // vtable[290]
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

	void DelayThink(); // size[301]
	void GetBaseMap(); // size[10]
	void CreateEffects(); // size[845]
	void SetTimer(float param_1, float param_2); // size[93]
	void InputSetTimer(inputdata_t *param_1); // size[59]
	void SetVelocity(Vector *param_1, Vector *param_2); // size[35]
};
