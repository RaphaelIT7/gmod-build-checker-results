// Generated header

class Bootil_Threads_Thread
{
public:
	virtual ~Thread(); // vtable[0]
	virtual ~Thread(); // vtable[1]
	virtual void __cxa_pure_virtual(); // vtable[2]
	virtual void FUN_000ec6a0(); // vtable[3]
	virtual void _M_dispose(); // vtable[4]

	~Thread(); // size[10]
	Thread(); // size[10]
	void Running(); // size[11]
	void Lock(); // size[9]
	void Unlock(); // size[9]
	void Unlock(); // size[9]
	void RunInThread(void *param_1); // size[10]
	void TryLock(); // size[9]
	void WantsToClose(); // size[11]
	void SetClosing(boolparam_1); // size[12]
	void Join(); // size[14]
	void StartInThread(); // size[11]
	void StartInThreadAndDetatch(); // size[9]
	void StartInThreadAndDestroy(); // size[9]
};
