// Generated header

class CWeaponStriderBuster : public CPhysicsProp
{
public:
	virtual void ~CWeaponStriderBuster() override; // vtable[0]
	virtual void ~CWeaponStriderBuster() override; // vtable[1]
	virtual void ShouldPuntUseLaunchForces(); // vtable[327]
	virtual void PhysGunLaunchVelocity(); // vtable[328]
	virtual void BusterTouch(); // vtable[329]

	void BusterPingThink();
	void PhysGunLaunchVelocity();
	void CreateConstraintToObject();
	void BusterFlyThink();
	void BusterFlyThink();
	void GetBaseMap();
	void CWeaponStriderBuster();
	void DestroyConstraint();
	void CreateConstraintToObject();
	void ShouldStickToEntity();
	void StickToEntity();
	void CreateDestroyedEffect();
	void Launch();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void Shatter();
	void InputConstraintBroken();
	void Detonate();
	void BusterDetachThink();
	void OnAddToCargoHold();
	void OnFlechetteAttach();
	void ShouldPuntUseLaunchForces();
	void PreferredCarryAngles();
	void HasPreferredCarryAnglesForPlayer();
};
