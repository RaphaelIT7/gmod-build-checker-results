// Generated header

class CThread
{
public:
	virtual ~CThread(); // vtable[0]
	virtual ~CThread(); // vtable[1]
	virtual void Start(uintparam_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void __cxa_pure_virtual(); // vtable[4]
	virtual void OnExit(); // vtable[5]
	virtual void GetThreadProc(); // vtable[6]
	virtual void IsThreadRunning(); // vtable[7]

	void ThreadProc(void *param_1); // size[216]
	CThread(); // size[100]
	void GetName(); // size[89]
	void SetName(char *param_1); // size[68]
	void IsAlive(); // size[16]
	void Join(uintparam_1); // size[44]
	void GetThreadId(); // size[11]
	void GetResult(); // size[11]
	void Stop(intparam_1); // size[131]
	void GetPriority(); // size[39]
	void SetPriority(intparam_1); // size[18]
	void Suspend(); // size[25]
	void Resume(); // size[25]
	void Terminate(intparam_1); // size[47]
	void GetCurrentCThread(); // size[21]
	void Yield(); // size[9]
	void Sleep(uintparam_1); // size[21]
	void Cleanup(); // size[15]
	void WaitForCreateComplete(CThreadEvent *param_1); // size[22]
};
