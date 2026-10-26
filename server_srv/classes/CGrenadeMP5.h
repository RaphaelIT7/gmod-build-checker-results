// Generated header
// Estimated minimum size: 0x15A8 (5544) bytes

class CGrenadeMP5 : public CHL1BaseGrenade
{
public:
	virtual ~CGrenadeMP5() override; // vtable[0]
	virtual ~CGrenadeMP5() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Detonate() override; // vtable[283]
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

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GrenadeMP5Touch(CBaseEntity *param_1); // size[162]
	void GetBaseMap(); // size[10]
	void Event_Killed(CBaseEntity *param_1, CBaseEntity *param_2, float param_3, int param_4); // size[17]
};
