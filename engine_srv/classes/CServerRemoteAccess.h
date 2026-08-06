// Generated header

class CServerRemoteAccess : public IGameServerData
{
public:
	virtual void ~CServerRemoteAccess() override; // vtable[0]
	virtual void ~CServerRemoteAccess() override; // vtable[1]
	virtual void WriteDataRequest(); // vtable[2]
	virtual void ReadDataResponse(); // vtable[3]
	virtual void GetNextListenerID(); // vtable[4]
	virtual void RegisterAdminUIID() override; // vtable[5]

	void UploadScreenshot();
	void LogCommand();
	void IsAuthenticated();
	void GetDataResponseSize();
	void SetValue();
	void ExecCommand();
	void GetUserBanList();
	void GetPlayerList();
	void GetMapList();
	void CServerRemoteAccess();
	void BadPassword();
	void CheckPassword();
	void RespondString();
	void SendMessageToAdminUI();
	void SendResponseToClient();
	void SendVProfData();
	void LookupStringValue();
	void GetStatsString();
	void LookupValue();
	void RequestValue();
	void WriteDataRequest();
};
