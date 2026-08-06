// Generated header

class CWorkerThread : public CThread
{
public:
	virtual void ~CWorkerThread() override; // vtable[0]
	virtual void ~CWorkerThread() override; // vtable[1]

	void CWorkerThread();
	void GetCallHandle();
	void GetCallParam();
	void BoostPriority();
	void WaitForReply();
	void WaitForReply();
	void Call();
	void CallWorker();
	void CallMaster();
	void WaitForCall();
	void WaitForCall();
	void PeekCall();
	void Reply();
};
