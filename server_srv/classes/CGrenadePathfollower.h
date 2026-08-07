// Generated header

class CGrenadePathfollower : public CBaseGrenade
{
public:
	virtual ~CGrenadePathfollower() override; // vtable[0]
	virtual ~CGrenadePathfollower() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void Detonate() override; // vtable[283]

	void GrenadeTouch(CBaseEntity *param_1); // size[380]
	void GetBaseMap(); // size[10]
	void Launch(float param_1, string_t param_2); // size[559]
	CGrenadePathfollower(); // size[70]
	void CreateGrenadePathfollower(string_t param_1, string_t param_2, Vector *param_3, QAngle *param_4, edict_t *param_5); // size[84]
	void PlayFlySound(); // size[103]
	void AimThink(); // size[1194]
};
