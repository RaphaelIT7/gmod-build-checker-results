// Generated header

class CThread
{
public:
	virtual void ~CThread(); // vtable[0]
	virtual void ~CThread(); // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void __cxa_pure_virtual(); // vtable[4]
	virtual void OnExit(); // vtable[5]
	virtual void GetThreadProc(); // vtable[6]
	virtual void IsThreadRunning(); // vtable[7]

	void ThreadProc();
	void CThread();
	void GetName();
	void SetName();
	void IsAlive();
	void Join();
	void GetThreadId();
	void GetResult();
	void Stop();
	void GetPriority();
	void SetPriority();
	void Suspend();
	void Resume();
	void Terminate();
	void GetCurrentCThread();
	void Yield();
	void Sleep();
	void Cleanup();
	void WaitForCreateComplete();
};
