// Generated header

class CGrenadeHomer : public CBaseGrenade
{
public:
	virtual ~CGrenadeHomer() override; // vtable[0]
	virtual ~CGrenadeHomer() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void Detonate() override; // vtable[283]

	void GetBaseMap(); // size[10]
	void CreateGrenadeHomer(string_tparam_1, string_tparam_2, Vector *param_3, QAngle *param_4, edict_t *param_5); // size[206]
	void SetSpin(floatparam_1, floatparam_2); // size[94]
	void SetHoming(floatparam_1, floatparam_2, floatparam_3, floatparam_4, floatparam_5); // size[73]
	void StartRocketTrail(); // size[68]
	void UpdateRocketTrail(floatparam_1); // size[426]
	void StopRocketTrail(); // size[146]
	void GrenadeHomerTouch(CBaseEntity *param_1); // size[53]
	CGrenadeHomer(); // size[13]
	void PlayFlySound(); // size[103]
	void AimThink(); // size[2472]
	void Launch(CBaseEntity *param_1, CBaseEntity *param_2, Vector *param_3, floatparam_4, floatparam_5, intparam_6); // size[118]
};
