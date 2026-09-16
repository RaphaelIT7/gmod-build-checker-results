// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CItem_BoxXBowRounds : public CItem
{
public:
	virtual ~CItem_BoxXBowRounds() override; // vtable[0]
	virtual ~CItem_BoxXBowRounds() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void MyTouch(CBasePlayer *param_1) override; // vtable[284]
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
};
