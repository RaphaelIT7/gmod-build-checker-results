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
	void Running(); // size[17]
	void Lock(); // size[35]
	void Lock(); // size[35]
	void Unlock(); // size[1]
	void Unlock(); // size[1]
	void RunInThread(void *param_1); // size[91]
	void TryLock(); // size[35]
	void WantsToClose(); // size[3]
	void SetClosing(bool param_1); // size[58]
	void SetClosing(bool param_1); // size[58]
	void Join(); // size[149]
	void Join(); // size[149]
	void StartInThread(); // size[56]
	void StartInThreadAndDetatch(); // size[82]
	void StartInThreadAndDestroy(); // size[23]
};
