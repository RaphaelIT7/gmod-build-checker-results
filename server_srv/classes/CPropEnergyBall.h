// Generated header
// Estimated minimum size: 0x15D0 (5584) bytes

class CPropEnergyBall : public CPropCombineBall
{
public:
	virtual ~CPropEnergyBall() override; // vtable[0]
	virtual ~CPropEnergyBall() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void NotifySystemEvent(CBaseEntity *param_1, notify_system_event_t param_2, notify_system_event_params_t *param_3) override; // vtable[112]
	virtual void VPhysicsCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void ExplodeThink() override; // vtable[285]
	virtual void CreateSounds(); // vtable[287]
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

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputBallCaught(inputdata_t *param_1); // size[101]
	void GetBaseMap(); // size[10]
};
