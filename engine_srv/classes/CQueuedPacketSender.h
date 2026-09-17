// Generated header
// Estimated minimum size: 0xF4 (244) bytes

class CQueuedPacketSender : public CThread, public IQueuedPacketSender
{
public:
	virtual ~CQueuedPacketSender(); // vtable[0]
	virtual ~CQueuedPacketSender(); // vtable[1]
	virtual void Start(uint param_1); // vtable[2]

	void Setup(); // size[27]
	void Setup(); // size[7]
	void HasQueuedPackets(INetChannel *param_1); // size[89]
	void HasQueuedPackets(INetChannel *param_1); // size[7]
	CQueuedPacketSender(); // size[173]
	void Shutdown(); // size[219]
	void Shutdown(); // size[10]
	void Run(); // size[383]
	void ClearQueuedPacketsForChannel(INetChannel *param_1); // size[237]
	void ClearQueuedPacketsForChannel(INetChannel *param_1); // size[10]
	void QueuePacket(INetChannel *param_1, int param_2, char *param_3, int param_4, sockaddr *param_5, int param_6, uint param_7); // size[110]
	void QueuePacket(INetChannel *param_1, int param_2, char *param_3, int param_4, sockaddr *param_5, int param_6, uint param_7); // size[10]
	void IsRunning(); // size[9]
	void IsRunning(); // size[7]
};
