// Generated header

class Bootil_Threads_Thread
{
public:
	virtual ~Thread(); // vtable[0]
	virtual ~Thread(); // vtable[1]
	virtual void __cxa_pure_virtual(); // vtable[2]
	virtual void OnThreadFinished(); // vtable[3]

	~Thread(); // size[185]
	~Thread(); // size[185]
	Thread(); // size[59]
	void Running(); // size[59]
	void Lock(); // size[35]
	void Lock(); // size[35]
	void Unlock(); // size[35]
	void Unlock(); // size[35]
	void RunInThread(void *param_1); // size[91]
	void TryLock(); // size[4]
	void WantsToClose(); // size[21]
	void SetClosing(boolparam_1); // size[58]
	void SetClosing(boolparam_1); // size[58]
	void Join(); // size[149]
	void Join(); // size[149]
	void StartInThread(); // size[56]
	void StartInThreadAndDetatch(); // size[41]
	void StartInThreadAndDestroy(); // size[31]
};
