// Generated header

class CServerRemoteAccess : public IGameServerData
{
public:
	virtual ~CServerRemoteAccess() override; // vtable[0]
	virtual ~CServerRemoteAccess() override; // vtable[1]
	virtual void WriteDataRequest(); // vtable[2]
	virtual void ReadDataResponse(); // vtable[3]
	virtual void GetNextListenerID(); // vtable[4]
	virtual void RegisterAdminUIID() override; // vtable[5]

	void UploadScreenshot(); // size[0]
	void LogCommand(); // size[0]
	void IsAuthenticated(); // size[0]
	void GetDataResponseSize(); // size[0]
	void SetValue(); // size[0]
	void ExecCommand(); // size[0]
	void GetUserBanList(); // size[0]
	void GetPlayerList(); // size[0]
	void GetMapList(); // size[0]
	CServerRemoteAccess(); // size[0]
	void BadPassword(); // size[0]
	void CheckPassword(); // size[0]
	void RespondString(); // size[0]
	void SendMessageToAdminUI(); // size[0]
	void SendResponseToClient(); // size[0]
	void SendVProfData(); // size[0]
	void LookupStringValue(); // size[0]
	void GetStatsString(); // size[0]
	void LookupValue(); // size[0]
	void RequestValue(); // size[0]
	void WriteDataRequest(); // size[0]
};
