// Generated header

class IGameSystem
{
public:
	virtual void LevelShutdownPreClearSteamAPIContext(); // vtable[6]
	virtual void __cxa_pure_virtual(); // vtable[12]
	virtual ~IGameSystem(); // vtable[13]
	virtual ~IGameSystem(); // vtable[14]

	void Remove(IGameSystem *param_1); // size[170]
	void RemoveAll(); // size[25]
	void MapName(); // size[10]
	void RunCommandPlayer(); // size[7]
	void RunCommandUserCmd(); // size[7]
	void PostInitAllSystems(); // size[20]
	void ShutdownAllSystems(); // size[20]
	void LevelInitPreEntityAllSystems(char *param_1); // size[36]
	void LevelInitPostEntityAllSystems(); // size[20]
	void LevelShutdownPreClearSteamAPIContextAllSystems(); // size[20]
	void LevelShutdownPreEntityAllSystems(); // size[20]
	void LevelShutdownPostEntityAllSystems(); // size[47]
	void OnSaveAllSystems(); // size[20]
	void OnRestoreAllSystems(); // size[20]
	void SafeRemoveIfDesiredAllSystems(); // size[20]
	void FrameUpdatePreEntityThinkAllSystems(); // size[20]
	void FrameUpdatePostEntityThinkAllSystems(); // size[32]
	void PreClientUpdateAllSystems(); // size[20]
	void Add(IGameSystem *param_1); // size[163]
	void InitAllSystems(); // size[361]
};
