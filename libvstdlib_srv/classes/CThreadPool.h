// Generated header

class CThreadPool : public CRefCounted1
{
public:
	virtual ~CThreadPool() override; // vtable[2]
	virtual ~CThreadPool() override; // vtable[3]
	virtual void Start(ThreadPoolStartParams_t *param_1); // vtable[4]
	virtual void Stop(int param_1); // vtable[5]
	virtual void GetJobCount(); // vtable[6]
	virtual void NumThreads(); // vtable[7]
	virtual void NumIdleThreads(); // vtable[8]
	virtual void SuspendExecution(); // vtable[9]
	virtual void ResumeExecution(); // vtable[10]
	virtual void YieldWait(CThreadEvent * *param_1, int param_2, bool param_3, uint param_4); // vtable[11]
	virtual void YieldWait(CJob * *param_1, int param_2, bool param_3, uint param_4); // vtable[12]
	virtual void Yield(uint param_1); // vtable[13]
	virtual void AddJob(CJob *param_1); // vtable[14]
	virtual void ExecuteHighPriorityFunctor(CFunctor *param_1); // vtable[15]
	virtual void ChangePriority(CJob *param_1, JobPriority_t param_2); // vtable[17]
	virtual void ExecuteToPriority(JobPriority_t param_1, _func_bool_CJob_ptr *param_2); // vtable[18]
	virtual void AbortAll(); // vtable[19]
	virtual void Reserved1(); // vtable[20]
	virtual void AddFunctorInternal(CFunctor *param_1, CJob * *param_2, char *param_3, uint param_4); // vtable[21]
	virtual void GetDummyJob(); // vtable[22]
	virtual void Distribute(bool param_1, int *param_2); // vtable[23]
	virtual void Start(ThreadPoolStartParams_t *param_1, char *param_2) override; // vtable[24]

	void DoExecute(); // size[7]
	~CDummyJob(); // size[64]
	~CDummyJob(); // size[7]
	~CDummyJob(); // size[71]
	~CDummyJob(); // size[7]
	void WaitForIdle(bool param_1); // size[30]
	void InsertJobInQueue(CJob *param_1); // size[1147]
	CThreadPool(); // size[458]
	~CThreadPool(); // size[10]
	~CThreadPool(); // size[7]
};
