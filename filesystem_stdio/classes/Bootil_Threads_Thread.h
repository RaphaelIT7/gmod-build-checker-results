// Generated header
// Estimated minimum size: 0x4 (4) bytes

class Bootil_Threads_Thread
{
public:
	virtual ~Thread(); // vtable[0]
	virtual ~Thread(); // vtable[1]

	~Thread(); // size[10]
	~Thread(); // size[10]
	Thread(); // size[10]
	void Running(); // size[11]
	void Lock(); // size[9]
	void Lock(); // size[9]
	void Unlock(); // size[9]
	void Unlock(); // size[9]
	void RunInThread(void *param_1); // size[10]
	void TryLock(); // size[9]
	void WantsToClose(); // size[11]
	void SetClosing(bool param_1); // size[12]
	void SetClosing(bool param_1); // size[12]
	void Join(); // size[14]
	void StartInThread(); // size[11]
	void StartInThreadAndDetatch(); // size[9]
	void StartInThreadAndDetatch(); // size[9]
	void StartInThreadAndDestroy(); // size[9]
};
