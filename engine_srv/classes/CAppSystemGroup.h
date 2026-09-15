// Generated header

class CAppSystemGroup : public IAppSystemGroup
{
public:
	virtual void Startup(); // vtable[5]
	virtual void Shutdown(); // vtable[6]
	virtual void LoadModuleDLL(char *param_1); // vtable[7]

	_GLOBAL__sub_I_CAppSystemGroup(); // size[48]
	void UnloadAllModules(); // size[21]
	void GetParent(); // size[11]
	void DisconnectSystems(); // size[1]
	void GetErrorStage(); // size[11]
	void GetFactory(); // size[10]
	CAppSystemGroup(CAppSystemGroup *param_1); // size[79]
	void FindSystem(char *param_1); // size[148]
	void ReportStartupFailure(int param_1, int param_2); // size[156]
	void ConnectSystems(); // size[100]
	void InitSystems(); // size[94]
	void OnStartup(); // size[25]
	void RemoveAllSystems(); // size[25]
	void OnShutdown(); // size[156]
	void Run(); // size[73]
	void LoadModule(char *param_1); // size[438]
	void LoadModule(_func_void_ptr_char_ptr_int_ptr *param_1); // size[239]
	void AddSystem(int param_1, char *param_2); // size[243]
	void AddSystems(AppSystemInfo_t *param_1); // size[130]
	void AddSystem(IAppSystem *param_1, char *param_2); // size[76]
};
