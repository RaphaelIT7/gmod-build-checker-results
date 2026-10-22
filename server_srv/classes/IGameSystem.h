// Generated header
// Estimated minimum size: 0x4 (4) bytes

class IGameSystem
{
public:
	void Remove(IGameSystem *param_1); // size[150]
	~IGameSystem(); // size[18]
	~IGameSystem(); // size[37]
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
	void Add(IGameSystem *param_1); // size[158]
	void InitAllSystems(); // size[361]
	void LevelShutdownPreClearSteamAPIContext(); // size[5]
};
