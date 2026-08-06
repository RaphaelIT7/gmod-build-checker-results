// Generated header

class CWorkerThread : public CThread
{
public:
	virtual ~CWorkerThread() override; // vtable[0]
	virtual ~CWorkerThread() override; // vtable[1]

	CWorkerThread(); // size[0]
	void GetCallHandle(); // size[0]
	void GetCallParam(); // size[0]
	void BoostPriority(); // size[0]
	void WaitForReply(); // size[0]
	void WaitForReply(); // size[0]
	void Call(); // size[0]
	void CallWorker(); // size[0]
	void CallMaster(); // size[0]
	void WaitForCall(); // size[0]
	void WaitForCall(); // size[0]
	void PeekCall(); // size[0]
	void Reply(); // size[0]
};
