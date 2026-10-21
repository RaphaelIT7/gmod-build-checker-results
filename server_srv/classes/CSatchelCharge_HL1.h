// Generated header
// Estimated minimum size: 0x15BC (5564) bytes

class CSatchelCharge_HL1 : public CHL1BaseGrenade
{
public:
	virtual ~CSatchelCharge_HL1() override; // vtable[0]
	virtual ~CSatchelCharge_HL1() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void BounceSound() override; // vtable[285]
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

	void SatchelUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[59]
	void GetBaseMap(); // size[10]
	void Deactivate(); // size[54]
	void UpdateSlideSound(); // size[342]
	void SatchelTouch(CBaseEntity *param_1); // size[181]
	void SatchelThink(); // size[227]
	CSatchelCharge_HL1(); // size[82]
};
