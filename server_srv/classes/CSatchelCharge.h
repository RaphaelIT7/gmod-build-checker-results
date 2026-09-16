// Generated header
// Estimated minimum size: 0x5E5B1CC8 (1583029448) bytes

class CSatchelCharge : public CBaseGrenade
{
public:
	virtual ~CSatchelCharge() override; // vtable[0]
	virtual ~CSatchelCharge() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void UpdateOnRemove() override; // vtable[108]
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

	void InputExplode(inputdata_t *param_1); // size[220]
	void SatchelThink(); // size[806]
	void GetBaseMap(); // size[10]
	void Deactivate(); // size[124]
	void CreateEffects(); // size[363]
	CSatchelCharge(); // size[87]
};
