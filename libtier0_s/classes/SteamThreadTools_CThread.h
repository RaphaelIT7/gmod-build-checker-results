// Generated header

class SteamThreadTools_CThread
{
public:
	void Init(); // size[6]
	void OnExit(); // size[1]
	void GetThreadProc(); // size[17]
	void ThreadExceptionWrapper(void *param_1); // size[22]
	void ThreadProc(void *param_1); // size[10]
	CThread(); // size[56]
	void GetName(); // size[12]
	void SetName(char *param_1); // size[7]
	void BHasValidThreadID(); // size[13]
	void IsThreadRunning(); // size[7]
	void IsAlive(); // size[7]
	void GetResult(); // size[8]
	void GetPriority(); // size[6]
	void SetPriority(intparam_1); // size[6]
	void Suspend(); // size[6]
	void Resume(); // size[6]
	void Terminate(intparam_1); // size[7]
	void GetCurrentCThread(); // size[7]
	void Join(uintparam_1); // size[9]
	~CThread(); // size[12]
	~CThread(); // size[7]
	void Stop(intparam_1); // size[7]
	void Yield(); // size[6]
	void Sleep(uintparam_1); // size[6]
	void WaitForCreateComplete(CThreadEvent *param_1); // size[7]
	void Start(uintparam_1); // size[10]
};
