// Generated header

class CRocket_Turret_Projectile : public CMissile
{
public:
	virtual ~CRocket_Turret_Projectile() override; // vtable[0]
	virtual ~CRocket_Turret_Projectile() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void NotifySystemEvent(CBaseEntity *param_1, notify_system_event_tparam_2, notify_system_event_params_t *param_3) override; // vtable[112]
	virtual void DoExplosion() override; // vtable[388]
	virtual void NotifyLauncherOnDeath(); // vtable[391]
	virtual void SetLauncher(CHandleparam_1); // vtable[392]
	virtual void CreateSmokeTrail(); // vtable[393]
	virtual void MissileTouch(CBaseEntity *param_1); // vtable[394]
	virtual void CreateSounds(); // vtable[395]

	void GetBaseMap(); // size[10]
};
