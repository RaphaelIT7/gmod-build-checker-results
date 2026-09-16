// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CWeaponBox : public CHL1Item
{
public:
	virtual ~CWeaponBox() override; // vtable[0]
	virtual ~CWeaponBox() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
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
	void BoxTouch(CBaseEntity *param_1); // size[41]
	void GetBaseMap(); // size[10]
	void GiveAmmo(int param_1, char *param_2, int param_3, int *param_4); // size[228]
	void PackAmmo(char *param_1, int param_2); // size[136]
};
