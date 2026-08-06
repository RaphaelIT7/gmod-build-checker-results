// Generated header

class CAppSystemGroup : public IAppSystemGroup
{
public:
	virtual void Startup(); // vtable[5]
	virtual void Shutdown(); // vtable[6]
	virtual void LoadModuleDLL(); // vtable[7]

	void _GLOBAL__sub_I_CAppSystemGroup();
	void UnloadAllModules();
	void GetParent();
	void DisconnectSystems();
	void ShutdownSystems();
	void GetErrorStage();
	void GetFactory();
	void CAppSystemGroup();
	void FindSystem();
	void ReportStartupFailure();
	void ConnectSystems();
	void InitSystems();
	void OnStartup();
	void RemoveAllSystems();
	void OnShutdown();
	void Run();
	void LoadModule();
	void LoadModule();
	void AddSystem();
	void AddSystems();
	void AddSystem();
};
