// Generated header

class CGrenadeHelicopter : public CBaseGrenade
{
public:
	virtual void ~CGrenadeHelicopter() override; // vtable[0]
	virtual void ~CGrenadeHelicopter() override; // vtable[1]
	virtual void PreferredCarryAngles(); // vtable[290]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[291]
	virtual void OnPhysGunPickup(); // vtable[292]
	virtual void OnPhysGunDrop(); // vtable[293]
	virtual void ShouldPuntUseLaunchForces(); // vtable[294]
	virtual void PhysGunLaunchVelocity(); // vtable[295]

	void RampSoundThink();
	void AnimateThink();
	void OnPhysGunDrop();
	void PhysGunLaunchVelocity();
	void WarningBlinkerThink();
	void GetBaseMap();
	void BecomeActive();
	void InputExplodeIn();
	void OnPhysGunPickup();
	void StopWarningBlinker();
	void GetBombLifetime();
	void DoExplosion();
	void IsThrownByPlayer();
	void SendMissEvent();
	void ExplodeConcussion();
	void ExplodeThink();
	void PreferredCarryAngles();
	void HasPreferredCarryAnglesForPlayer();
	void ShouldPuntUseLaunchForces();
};
