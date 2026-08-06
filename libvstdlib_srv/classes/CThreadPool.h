// Generated header

class CThreadPool : public CRefCounted1
{
public:
	virtual void ~CThreadPool() override; // vtable[2]
	virtual void ~CThreadPool() override; // vtable[3]
	virtual void Start(); // vtable[4]
	virtual void Stop(); // vtable[5]
	virtual void GetJobCount(); // vtable[6]
	virtual void NumThreads(); // vtable[7]
	virtual void NumIdleThreads(); // vtable[8]
	virtual void SuspendExecution(); // vtable[9]
	virtual void ResumeExecution(); // vtable[10]
	virtual void YieldWait(); // vtable[11]
	virtual void YieldWait(); // vtable[12]
	virtual void Yield(); // vtable[13]
	virtual void AddJob(); // vtable[14]
	virtual void ExecuteHighPriorityFunctor(); // vtable[15]
	virtual void ChangePriority(); // vtable[17]
	virtual void ExecuteToPriority(); // vtable[18]
	virtual void AbortAll(); // vtable[19]
	virtual void Reserved1(); // vtable[20]
	virtual void AddFunctorInternal(); // vtable[21]
	virtual void GetDummyJob(); // vtable[22]
	virtual void Distribute(); // vtable[23]
	virtual void Start() override; // vtable[24]

	void DoExecute();
	void ~CDummyJob();
	void ~CDummyJob();
	void ~CDummyJob();
	void ~CDummyJob();
	void WaitForIdle();
	void InsertJobInQueue();
	void CThreadPool();
	void ~CThreadPool();
	void ~CThreadPool();
};
