// Generated header

class CAppSystemGroup : public IAppSystemGroup
{
public:
	virtual void Startup(); // vtable[5]
	virtual void Shutdown(); // vtable[6]
	virtual void LoadModuleDLL(char *param_1); // vtable[7]

	_GLOBAL__sub_I_CAppSystemGroup(); // size[48]
	~CAppSystemGroup(); // size[228]
	void UnloadAllModules(); // size[100]
	void GetParent(); // size[11]
	void DisconnectSystems(); // size[18]
	void ShutdownSystems(); // size[65]
	void GetErrorStage(); // size[11]
	void GetFactory(); // size[10]
	CAppSystemGroup(CAppSystemGroup *param_1); // size[212]
	void FindSystem(char *param_1); // size[148]
	void ReportStartupFailure(intparam_1, intparam_2); // size[156]
	void ConnectSystems(); // size[100]
	void InitSystems(); // size[94]
	void OnStartup(); // size[140]
	void RemoveAllSystems(); // size[25]
	void OnShutdown(); // size[186]
	void Run(); // size[73]
	void LoadModule(char *param_1); // size[464]
	void LoadModule(_func_void_ptr_char_ptr_int_ptr *param_1); // size[269]
	void AddSystem(intparam_1, char *param_2); // size[243]
	void AddSystems(AppSystemInfo_t *param_1); // size[139]
	void AddSystem(IAppSystem *param_1, char *param_2); // size[76]
};
