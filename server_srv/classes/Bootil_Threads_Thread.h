// Generated header
// Estimated minimum size: 0x8 (8) bytes

class Bootil_Threads_Thread
{
public:
	virtual ~Thread(); // vtable[0]
	virtual ~Thread(); // vtable[1]

	void OnThreadFinished(); // size[1]
	~Thread(); // size[10]
	~Thread(); // size[10]
	Thread(); // size[59]
	Thread(); // size[59]
	void Running(); // size[21]
	void Lock(); // size[4]
	void Lock(); // size[4]
	void Unlock(); // size[9]
	void Unlock(); // size[9]
	void RunInThread(void *param_1); // size[5]
	void TryLock(); // size[1]
	void WantsToClose(); // size[59]
	void SetClosing(bool param_1); // size[7]
	void SetClosing(bool param_1); // size[7]
	void Join(); // size[67]
	void Join(); // size[67]
	void StartInThread(); // size[17]
	void StartInThreadAndDetatch(); // size[41]
	void StartInThreadAndDetatch(); // size[41]
	void StartInThreadAndDestroy(); // size[82]
};
