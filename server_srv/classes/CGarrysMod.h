// Generated header

class CGarrysMod : public IGarrysMod, public CGameEventListener
{
public:
	virtual void MenuThink() override; // vtable[0]
	virtual void RunConsoleCommand(char *param_1) override; // vtable[1]
	virtual void StartVideoScale(int param_1, int param_2) override; // vtable[2]
	virtual void EndVideoScale(int param_1, int param_2) override; // vtable[3]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[4]
	virtual ~CGarrysMod(); // vtable[5]
	virtual ~CGarrysMod(); // vtable[6]

	void OnP2PSessionConnectFail(P2PSessionConnectFail_t *param_1); // size[61]
	void FireGameEvent(IGameEvent *param_1); // size[7]
	void OnP2PSessionRequest(P2PSessionRequest_t *param_1); // size[305]
	CGarrysMod(); // size[149]
	void InitializeMod(_func_void_ptr_char_ptr_int_ptr *param_1); // size[941]
	void Shutdown(); // size[66]
	void LevelInit(char *param_1, char *param_2, char *param_3, char *param_4, bool param_5, bool param_6); // size[17]
	void LevelShutdown(); // size[17]
	void GetGameDescription(); // size[307]
	void PostInitialize(); // size[10]
	void ShouldCollide(CBaseEntity *param_1, CBaseEntity *param_2); // size[144]
	void EntityCreated(CBaseEntity *param_1); // size[118]
	void EntityRemoved(CBaseEntity *param_1, bool param_2); // size[50]
	void Think(); // size[85]
	~CGarrysMod(); // size[10]
	~CGarrysMod(); // size[10]
};
