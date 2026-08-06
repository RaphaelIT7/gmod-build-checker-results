// Generated header

class CMoveHelperServer : public IMoveHelperServer
{
public:
	virtual void GetName(CBaseHandleparam_1); // vtable[0]
	virtual void ResetTouchList(); // vtable[1]
	virtual void AddToTouched(CGameTrace *param_1, Vector *param_2); // vtable[2]
	virtual void ProcessImpacts(); // vtable[3]
	virtual void Con_NPrintf(intparam_1, char *param_2); // vtable[4]
	virtual void StartSound(Vector *param_1, intparam_2, char *param_3, floatparam_4, soundlevel_tparam_5, intparam_6, intparam_7); // vtable[5]
	virtual void StartSound(Vector *param_1, char *param_2); // vtable[6]
	virtual void PlaybackEventFull(intparam_1, intparam_2, ushortparam_3, floatparam_4, Vector *param_5, Vector *param_6, floatparam_7, floatparam_8, intparam_9, intparam_10, intparam_11, intparam_12); // vtable[7]
	virtual void PlayerFallingDamage(); // vtable[8]
	virtual void PlayerSetAnimation(PLAYER_ANIMparam_1); // vtable[9]
	virtual void GetSurfaceProps(); // vtable[10]
	virtual void IsWorldEntity(CBaseHandle *param_1) override; // vtable[11]
	virtual ~CMoveHelperServer() override; // vtable[12]
	virtual ~CMoveHelperServer() override; // vtable[13]
	virtual void SetHost(CBasePlayer *param_1) override; // vtable[14]

	CMoveHelperServer(); // size[89]
};
