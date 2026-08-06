// Generated header

class CFileTransferMgr
{
public:
	virtual ~CFileTransferMgr(); // vtable[0]
	virtual ~CFileTransferMgr(); // vtable[1]
	virtual void __cxa_pure_virtual(); // vtable[5]

	_GLOBAL__sub_I_CFileTransferMgr(); // size[72]
	CFileTransferMgr(); // size[14]
	void StartSending(INetChannel *param_1, void *param_2, intparam_3, char *param_4, intparam_5, intparam_6); // size[7]
	void HandleClientDisconnect(INetChannel *param_1); // size[5]
	void HandleReceivedData(INetChannel *param_1, void *param_2, intparam_3); // size[5]
	void FirstIncoming(); // size[7]
	void NextIncoming(intparam_1); // size[7]
	void InvalidIncoming(); // size[7]
	void GetIncomingUserData(intparam_1, void * *param_2, int *param_3); // size[5]
};
