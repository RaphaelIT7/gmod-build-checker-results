// Generated header

class CRConServer : public ISocketCreatorListener
{
public:
	virtual void ShouldAcceptSocket(); // vtable[0]
	virtual void OnSocketAccepted(); // vtable[1]
	virtual void OnSocketClosed() override; // vtable[2]

	void ConnectToListeningClient();
	void IsConnected();
	void SetPassword();
	void HasPassword();
	void IsPassword();
	void SetAddress();
	void CreateSocket();
	void SetRequestID();
	void operator<();
	void BCloseAcceptedSocket();
	void SendRCONResponse();
	void FinishRedirect();
	void CRConServer();
	void CRConServer();
	void ~CRConServer();
	void HandleFailedRconAuth();
	void RunFrame();
};
