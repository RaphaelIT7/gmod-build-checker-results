// Generated header

class CDefaultPlayerPickupVPhysics : public IPlayerPickupVPhysics
{
public:
	virtual void OnAttemptPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_tparam_2); // vtable[0]
	virtual void OnFailedPhysGunPickup(Vectorparam_1); // vtable[1]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_tparam_2); // vtable[2]
	virtual void OnPhysGunDrop(CBasePlayer *param_1, PhysGunDrop_tparam_2); // vtable[3]
	virtual void HasPreferredCarryAnglesForPlayer(CBasePlayer *param_1); // vtable[4]
	virtual void PreferredCarryAngles(); // vtable[5]
	virtual void ForcePhysgunOpen(CBasePlayer *param_1); // vtable[6]
	virtual void PhysGunLaunchAngularImpulse(); // vtable[7]
	virtual void ShouldPuntUseLaunchForces(PhysGunForce_tparam_1); // vtable[8]
	virtual void PhysGunLaunchVelocity(Vector *param_1, floatparam_2) override; // vtable[9]
};
