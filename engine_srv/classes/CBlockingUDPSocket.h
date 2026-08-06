// Generated header

class CBlockingUDPSocket
{
public:
	virtual ~CBlockingUDPSocket(); // vtable[0]
	virtual ~CBlockingUDPSocket(); // vtable[1]

	void CreateSocket(); // size[139]
	CBlockingUDPSocket(); // size[32]
	void WaitForMessage(float param_1); // size[177]
	void ReceiveSocketMessage(sockaddr_in *param_1, uchar *param_2, uint param_3); // size[169]
	void SendSocketMessage(sockaddr_in *param_1, uchar *param_2, uint param_3); // size[65]
};
