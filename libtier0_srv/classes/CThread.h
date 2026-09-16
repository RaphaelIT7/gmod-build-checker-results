// Generated header
// Estimated minimum size: 0x5C (92) bytes, no debug info available

class CThread
{
public:
	virtual ~CThread(); // vtable[0]
	virtual ~CThread(); // vtable[1]
	virtual void Start(uint param_1); // vtable[2]
	virtual void Init(); // vtable[3]

	void OnExit(); // size[5]
	void GetThreadProc(); // size[10]
	void IsThreadRunning(); // size[43]
	void ThreadProc(void *param_1); // size[216]
	CThread(); // size[100]
	void GetName(); // size[89]
	void SetName(char *param_1); // size[68]
	void IsAlive(); // size[16]
	void Join(uint param_1); // size[44]
	void GetThreadId(); // size[11]
	void GetResult(); // size[11]
	void Stop(int param_1); // size[131]
	void GetPriority(); // size[39]
	void SetPriority(int param_1); // size[18]
	void Suspend(); // size[25]
	void Resume(); // size[25]
	void Terminate(int param_1); // size[47]
	void GetCurrentCThread(); // size[21]
	void Yield(); // size[9]
	void Sleep(uint param_1); // size[21]
	void Cleanup(); // size[15]
	void WaitForCreateComplete(CThreadEvent *param_1); // size[22]
};
