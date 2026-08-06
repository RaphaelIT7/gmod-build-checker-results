// Generated header

class CQueuedPacketSender : public CThread, public IQueuedPacketSender
{
public:
	virtual ~CQueuedPacketSender(); // vtable[0]
	virtual ~CQueuedPacketSender(); // vtable[1]
	virtual void Start(uintparam_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Run(); // vtable[4]
	virtual void GetThreadProc(); // vtable[6]
	virtual void IsThreadRunning(); // vtable[7]
	virtual void Setup(); // vtable[8]
	virtual void Shutdown(); // vtable[9]
	virtual void IsRunning(); // vtable[10]
	virtual void ClearQueuedPacketsForChannel(INetChannel *param_1); // vtable[11]
	virtual void QueuePacket(INetChannel *param_1, intparam_2, char *param_3, intparam_4, sockaddr *param_5, intparam_6, uintparam_7); // vtable[12]
	virtual void HasQueuedPackets(INetChannel *param_1); // vtable[13]

	void Setup(); // size[7]
	void HasQueuedPackets(INetChannel *param_1); // size[7]
	CQueuedPacketSender(); // size[84]
	void Shutdown(); // size[10]
	void ClearQueuedPacketsForChannel(INetChannel *param_1); // size[10]
	void QueuePacket(INetChannel *param_1, intparam_2, char *param_3, intparam_4, sockaddr *param_5, intparam_6, uintparam_7); // size[10]
	void LessFunc(CQueuedPacket * *param_1, CQueuedPacket * *param_2); // size[22]
	void IsRunning(); // size[7]
};
