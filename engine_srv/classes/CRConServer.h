// Generated header

class CRConServer : public ISocketCreatorListener
{
public:
	virtual void ShouldAcceptSocket(); // vtable[0]
	virtual void OnSocketAccepted(); // vtable[1]
	virtual void OnSocketClosed() override; // vtable[2]

	void ConnectToListeningClient(); // size[0]
	void IsConnected(); // size[0]
	void SetPassword(); // size[0]
	void HasPassword(); // size[0]
	void IsPassword(); // size[0]
	void SetAddress(); // size[0]
	void CreateSocket(); // size[0]
	void SetRequestID(); // size[0]
	void operator<(); // size[0]
	void BCloseAcceptedSocket(); // size[0]
	void SendRCONResponse(); // size[0]
	void FinishRedirect(); // size[0]
	CRConServer(); // size[0]
	CRConServer(); // size[0]
	~CRConServer(); // size[0]
	void HandleFailedRconAuth(); // size[0]
	void RunFrame(); // size[0]
};
