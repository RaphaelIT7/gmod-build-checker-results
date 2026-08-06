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

	void CServerPlugin();
	void DisablePlugins();
	void EnablePlugins();
	void DisablePlugin();
	void EnablePlugin();
	void PrintDetails();
	void UnloadPlugins();
	void UnloadPlugin();
	void ~CServerPlugin();
	void LoadPlugin();
	void LoadPlugins();
};
