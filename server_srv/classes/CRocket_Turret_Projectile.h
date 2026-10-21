// Generated header
// Estimated minimum size: 0x2054 (8276) bytes

class CRocket_Turret_Projectile : public CMissile
{
public:
	virtual ~CRocket_Turret_Projectile() override; // vtable[0]
	virtual ~CRocket_Turret_Projectile() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void NotifySystemEvent(CBaseEntity *param_1, notify_system_event_t param_2, notify_system_event_params_t *param_3) override; // vtable[112]
	virtual void DoExplosion() override; // vtable[389]
	virtual void NotifyLauncherOnDeath(); // vtable[392]
	virtual void SetLauncher(CHandle param_1); // vtable[393]
	virtual void CreateSmokeTrail(); // vtable[394]
	virtual void MissileTouch(CBaseEntity *param_1); // vtable[395]
	virtual void CreateSounds(); // vtable[396]

	void GetBaseMap(); // size[10]
};
