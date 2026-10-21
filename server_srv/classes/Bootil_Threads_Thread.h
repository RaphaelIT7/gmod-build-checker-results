// Generated header
// Estimated minimum size: 0x10 (16) bytes

class Bootil_Threads_Thread
{
public:
	virtual _ZN6Bootil7Threads6ThreadD1Ev(); // vtable[0]
	virtual ~Thread(); // vtable[1]

	void OnThreadFinished(); // size[1]
	Thread(); // size[59]
	void Running(); // size[59]
	void Lock(); // size[35]
	void Lock(); // size[35]
	void Unlock(); // size[35]
	void Unlock(); // size[35]
	void RunInThread(void *param_1); // size[91]
	void TryLock(); // size[35]
	void WantsToClose(); // size[59]
	void SetClosing(bool param_1); // size[58]
	void SetClosing(bool param_1); // size[58]
	void Join(); // size[149]
	void Join(); // size[149]
	void StartInThread(); // size[56]
	void StartInThreadAndDetatch(); // size[49]
	void StartInThreadAndDestroy(); // size[77]
};
