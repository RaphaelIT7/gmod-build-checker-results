// Generated header

class CServerPlugin : public IServerPluginHelpers
{
public:
	virtual void CreateMessage(); // vtable[0]
	virtual void ClientCommand(); // vtable[1]
	virtual void StartQueryCvarValue() override; // vtable[2]
	virtual void LevelInit(); // vtable[3]
	virtual void ServerActivate(); // vtable[4]
	virtual void GameFrame(); // vtable[5]
	virtual void LevelShutdown(); // vtable[6]
	virtual void ClientActive(); // vtable[7]
	virtual void ClientDisconnect(); // vtable[8]
	virtual void ClientPutInServer(); // vtable[9]
	virtual void SetCommandClient(); // vtable[10]
	virtual void ClientSettingsChanged(); // vtable[11]
	virtual void ClientConnect(); // vtable[12]
	virtual void ClientCommand(); // vtable[13]
	virtual void NetworkIDValidated(); // vtable[14]
	virtual void OnQueryCvarValueFinished(); // vtable[15]
	virtual void OnEdictAllocated(); // vtable[16]
	virtual void OnEdictFreed(); // vtable[17]

	CServerPlugin(); // size[0]
	void DisablePlugins(); // size[0]
	void EnablePlugins(); // size[0]
	void DisablePlugin(); // size[0]
	void EnablePlugin(); // size[0]
	void PrintDetails(); // size[0]
	void UnloadPlugins(); // size[0]
	void UnloadPlugin(); // size[0]
	~CServerPlugin(); // size[0]
	void LoadPlugin(); // size[0]
	void LoadPlugins(); // size[0]
};
