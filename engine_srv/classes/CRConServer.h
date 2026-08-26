// Generated header

class CRConServer : public ISocketCreatorListener
{
public:
	virtual void ShouldAcceptSocket(int param_1, netadr_s *param_2); // vtable[0]
	virtual void OnSocketAccepted(int param_1, netadr_s *param_2, void * *param_3); // vtable[1]
	virtual void OnSocketClosed(int param_1, netadr_s *param_2, void *param_3) override; // vtable[2]

	void ConnectToListeningClient(netadr_s *param_1, bool param_2); // size[95]
	void IsConnected(); // size[13]
	void SetPassword(char *param_1); // size[45]
	void HasPassword(); // size[25]
	void IsPassword(char *param_1); // size[36]
	void SetAddress(char *param_1); // size[67]
	void CreateSocket(); // size[29]
	void SetRequestID(uint param_1, int param_2); // size[81]
	void operator<(FailedRCon_t *param_1); // size[76]
	void BCloseAcceptedSocket(uint param_1); // size[97]
	void SendRCONResponse(int param_1, void *param_2, int param_3, bool param_4); // size[432]
	void FinishRedirect(char *param_1, netadr_s *param_2); // size[927]
	CRConServer(); // size[157]
	CRConServer(char *param_1); // size[172]
	~CRConServer(); // size[78]
	void HandleFailedRconAuth(netadr_s *param_1); // size[1368]
	void RunFrame(); // size[2819]
};
