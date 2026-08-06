// Generated header

class CMoveHelperServer : public IMoveHelperServer
{
public:
	virtual void GetName(CBaseHandle param_1); // vtable[0]
	virtual void ResetTouchList(); // vtable[1]
	virtual void AddToTouched(CGameTrace *param_1, Vector *param_2); // vtable[2]
	virtual void ProcessImpacts(); // vtable[3]
	virtual void Con_NPrintf(int param_1, char *param_2); // vtable[4]
	virtual void StartSound(Vector *param_1, int param_2, char *param_3, float param_4, soundlevel_t param_5, int param_6, int param_7); // vtable[5]
	virtual void StartSound(Vector *param_1, char *param_2); // vtable[6]
	virtual void PlaybackEventFull(int param_1, int param_2, ushort param_3, float param_4, Vector *param_5, Vector *param_6, float param_7, float param_8, int param_9, int param_10, int param_11, int param_12); // vtable[7]
	virtual void PlayerFallingDamage(); // vtable[8]
	virtual void PlayerSetAnimation(PLAYER_ANIM param_1); // vtable[9]
	virtual void GetSurfaceProps(); // vtable[10]
	virtual void IsWorldEntity(CBaseHandle *param_1) override; // vtable[11]
	virtual ~CMoveHelperServer() override; // vtable[12]
	virtual ~CMoveHelperServer() override; // vtable[13]
	virtual void SetHost(CBasePlayer *param_1) override; // vtable[14]

	CMoveHelperServer(); // size[89]
};
