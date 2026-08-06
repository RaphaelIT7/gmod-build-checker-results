// Generated header

class CFileTransferMgr
{
public:
	virtual void ~CFileTransferMgr(); // vtable[0]
	virtual void ~CFileTransferMgr(); // vtable[1]
	virtual void __cxa_pure_virtual(); // vtable[5]

	void _GLOBAL__sub_I_CFileTransferMgr();
	void CFileTransferMgr();
	void StartSending();
	void HandleClientDisconnect();
	void HandleReceivedData();
	void FirstIncoming();
	void NextIncoming();
	void InvalidIncoming();
	void GetIncomingUserData();
};
