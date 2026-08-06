// Generated header

class CFileAsyncReadJob : public CFileAsyncJob, public FileAsyncRequest_t
{
public:
	virtual ~CFileAsyncReadJob() override; // vtable[2]
	virtual ~CFileAsyncReadJob() override; // vtable[3]
	virtual void Describe() override; // vtable[4]
	virtual void DoExecute() override; // vtable[6]
	virtual void GetResult(void * *param_1, int *param_2) override; // vtable[9]

	void InterceptCallback(FileAsyncRequest_t *param_1, intparam_2, FSAsyncStatus_tparam_3); // size[139]
	~CFileAsyncReadJob(); // size[10]
	~CFileAsyncReadJob(); // size[10]
};
