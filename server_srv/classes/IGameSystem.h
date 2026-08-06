// Generated header

class IGameSystem
{
public:
	virtual void LevelShutdownPreClearSteamAPIContext(); // vtable[6]
	virtual void __cxa_pure_virtual(); // vtable[12]
	virtual void ~IGameSystem(); // vtable[13]
	virtual void ~IGameSystem(); // vtable[14]

	void Remove();
	void RemoveAll();
	void MapName();
	void RunCommandPlayer();
	void RunCommandUserCmd();
	void PostInitAllSystems();
	void ShutdownAllSystems();
	void LevelInitPreEntityAllSystems();
	void LevelInitPostEntityAllSystems();
	void LevelShutdownPreClearSteamAPIContextAllSystems();
	void LevelShutdownPreEntityAllSystems();
	void LevelShutdownPostEntityAllSystems();
	void OnSaveAllSystems();
	void OnRestoreAllSystems();
	void SafeRemoveIfDesiredAllSystems();
	void FrameUpdatePreEntityThinkAllSystems();
	void FrameUpdatePostEntityThinkAllSystems();
	void PreClientUpdateAllSystems();
	void Add();
	void InitAllSystems();
};
