// Generated header

class CServerPlugin : public IServerPluginHelpers
{
public:
	virtual void CreateMessage(edict_t *param_1, DIALOG_TYPE param_2, KeyValues *param_3, IServerPluginCallbacks *param_4); // vtable[0]
	virtual void ClientCommand(edict_t *param_1, char *param_2); // vtable[1]
	virtual void StartQueryCvarValue(edict_t *param_1, char *param_2) override; // vtable[2]
	virtual void LevelInit(char *param_1, char *param_2, char *param_3, char *param_4, bool param_5, bool param_6); // vtable[3]
	virtual void ServerActivate(edict_t *param_1, int param_2, int param_3); // vtable[4]
	virtual void GameFrame(bool param_1); // vtable[5]
	virtual void LevelShutdown(); // vtable[6]
	virtual void ClientActive(edict_t *param_1, bool param_2); // vtable[7]
	virtual void ClientDisconnect(edict_t *param_1); // vtable[8]
	virtual void ClientPutInServer(edict_t *param_1, char *param_2); // vtable[9]
	virtual void SetCommandClient(int param_1); // vtable[10]
	virtual void ClientSettingsChanged(edict_t *param_1); // vtable[11]
	virtual void ClientConnect(edict_t *param_1, char *param_2, char *param_3, char *param_4, int param_5); // vtable[12]
	virtual void ClientCommand(edict_t *param_1, CCommand *param_2); // vtable[13]
	virtual void NetworkIDValidated(char *param_1, char *param_2); // vtable[14]
	virtual void OnQueryCvarValueFinished(int param_1, edict_t *param_2, EQueryCvarValueStatus param_3, char *param_4, char *param_5); // vtable[15]
	virtual void OnEdictAllocated(edict_t *param_1); // vtable[16]
	virtual void OnEdictFreed(edict_t *param_1); // vtable[17]

	CServerPlugin(); // size[56]
	void DisablePlugins(); // size[61]
	void EnablePlugins(); // size[61]
	void DisablePlugin(int param_1); // size[42]
	void EnablePlugin(int param_1); // size[42]
	void PrintDetails(); // size[101]
	void UnloadPlugins(); // size[51]
	void UnloadPlugin(int param_1); // size[78]
	~CServerPlugin(); // size[55]
	void LoadPlugin(char *param_1); // size[24]
	void LoadPlugins(); // size[452]
};
