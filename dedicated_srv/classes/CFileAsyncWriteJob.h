// Generated header
// Estimated minimum size: 0xCC (204) bytes

class CFileAsyncWriteJob : public CFileAsyncJob
{
public:
	virtual ~CFileAsyncWriteJob() override; // vtable[2]
	virtual ~CFileAsyncWriteJob() override; // vtable[3]
	virtual void Describe() override; // vtable[4]
	virtual void DoExecute(); // vtable[6]
	virtual void DoAbort(bool param_1); // vtable[7]
	virtual void DoCleanup(); // vtable[8]
	virtual void GetResult(void * *param_1, int *param_2); // vtable[9]
	virtual void IsWrite(); // vtable[10]
	virtual ~CFileAsyncWriteJob(); // vtable[0]
	virtual ~CFileAsyncWriteJob(); // vtable[1]
	virtual void OnFinalRelease(); // vtable[2]
};
