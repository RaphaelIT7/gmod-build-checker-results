// Generated header
// Estimated minimum size: 0xF8 (248) bytes

class CFileAsyncReadJob : public CFileAsyncJob, public FileAsyncRequest_t
{
public:
	virtual ~CFileAsyncReadJob() override; // vtable[2]
	virtual ~CFileAsyncReadJob() override; // vtable[3]
	virtual void Describe() override; // vtable[4]
	virtual void DoExecute(); // vtable[6]
	virtual void DoAbort(bool param_1); // vtable[7]
	virtual void DoCleanup(); // vtable[8]
	virtual void GetResult(void * *param_1, int *param_2); // vtable[9]
	virtual void IsWrite(); // vtable[10]
	virtual ~CFileAsyncReadJob(); // vtable[0]
	virtual ~CFileAsyncReadJob(); // vtable[1]
	virtual void OnFinalRelease(); // vtable[2]

	void InterceptCallback(FileAsyncRequest_t *param_1, int param_2, FSAsyncStatus_t param_3); // size[139]
};
