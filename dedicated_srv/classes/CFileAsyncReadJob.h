// Generated header

class CFileAsyncReadJob : public CFileAsyncJob, public FileAsyncRequest_t
{
public:
	virtual ~CFileAsyncReadJob() override; // vtable[2]
	virtual ~CFileAsyncReadJob() override; // vtable[3]
	virtual void Describe() override; // vtable[4]
	virtual void DoExecute() override; // vtable[6]
	virtual void GetResult() override; // vtable[9]

	void InterceptCallback(); // size[0]
	~CFileAsyncReadJob(); // size[0]
	~CFileAsyncReadJob(); // size[0]
};
