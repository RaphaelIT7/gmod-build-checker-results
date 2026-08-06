// Generated header

class CThread
{
public:
	virtual ~CThread(); // vtable[0]
	virtual ~CThread(); // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void __cxa_pure_virtual(); // vtable[4]
	virtual void OnExit(); // vtable[5]
	virtual void GetThreadProc(); // vtable[6]
	virtual void IsThreadRunning(); // vtable[7]

	void ThreadProc(); // size[0]
	CThread(); // size[0]
	void GetName(); // size[0]
	void SetName(); // size[0]
	void IsAlive(); // size[0]
	void Join(); // size[0]
	void GetThreadId(); // size[0]
	void GetResult(); // size[0]
	void Stop(); // size[0]
	void GetPriority(); // size[0]
	void SetPriority(); // size[0]
	void Suspend(); // size[0]
	void Resume(); // size[0]
	void Terminate(); // size[0]
	void GetCurrentCThread(); // size[0]
	void Yield(); // size[0]
	void Sleep(); // size[0]
	void Cleanup(); // size[0]
	void WaitForCreateComplete(); // size[0]
};
