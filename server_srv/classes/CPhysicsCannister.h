// Generated header

class CPhysicsCannister : public CBaseCombatCharacter, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CPhysicsCannister() override; // vtable[0]
	virtual void ~CPhysicsCannister() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void PreferredCarryAngles(); // vtable[388]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[389]
	virtual void OnAttemptPhysGunPickup(); // vtable[390]
	virtual void OnPhysGunPickup(); // vtable[391]
	virtual void OnPhysGunDrop(); // vtable[392]
	virtual void ShouldPuntUseLaunchForces(); // vtable[393]
	virtual void PhysGunLaunchAngularImpulse(); // vtable[394]
	virtual void PhysGunLaunchVelocity(); // vtable[395]

	void InputWake();
	void OnPhysGunPickup();
	void GetBaseMap();
	void CalcLocalThrust();
	void ShutdownJet();
	void Deactivate();
	void InputDeactivate();
	void Explode();
	void InputExplode();
	void ExplodeTouch();
	void BeginShutdownThink();
	void CannisterActivate();
	void CannisterFire();
	void InputActivate();
	void OnPhysGunDrop();
	void PreferredCarryAngles();
	void HasPreferredCarryAnglesForPlayer();
	void OnAttemptPhysGunPickup();
	void ShouldPuntUseLaunchForces();
	void PhysGunLaunchAngularImpulse();
	void PhysGunLaunchVelocity();
};
