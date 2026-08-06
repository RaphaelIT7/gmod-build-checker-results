// Generated header

class CQueuedPacketSender : public CThread, public IQueuedPacketSender
{
public:
	virtual void ~CQueuedPacketSender(); // vtable[0]
	virtual void ~CQueuedPacketSender(); // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Run(); // vtable[4]
	virtual void OnExit() override; // vtable[5]
	virtual void GetThreadProc(); // vtable[6]
	virtual void IsThreadRunning(); // vtable[7]
	virtual void Setup(); // vtable[8]
	virtual void Shutdown(); // vtable[9]
	virtual void IsRunning(); // vtable[10]
	virtual void ClearQueuedPacketsForChannel(); // vtable[11]
	virtual void QueuePacket(); // vtable[12]
	virtual void HasQueuedPackets(); // vtable[13]

	void Setup();
	void HasQueuedPackets();
	void CQueuedPacketSender();
	void Shutdown();
	void ClearQueuedPacketsForChannel();
	void QueuePacket();
	void LessFunc();
	void IsRunning();
};
