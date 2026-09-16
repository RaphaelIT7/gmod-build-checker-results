// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CRagdollPropAttached : public CRagdollProp
{
public:
	virtual ~CRagdollPropAttached() override; // vtable[0]
	virtual ~CRagdollPropAttached() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]
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

	void GetBaseMap(); // size[10]
	void DetachOnNextUpdate(); // size[15]
	void Detach(); // size[110]
	void InitRagdollAttached(IPhysicsObject *param_1, Vector *param_2, int param_3, matrix3x4_t *param_4, matrix3x4_t *param_5, float param_6, int param_7, CBaseAnimating *param_8, int param_9, Vector *param_10, int param_11, Vector *param_12); // size[1505]
};
