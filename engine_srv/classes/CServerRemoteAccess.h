// Generated header

class CServerRemoteAccess : public IGameServerData
{
public:
	virtual ~CServerRemoteAccess() override; // vtable[0]
	virtual ~CServerRemoteAccess() override; // vtable[1]
	virtual void WriteDataRequest(uint param_1, void *param_2, int param_3); // vtable[2]
	virtual void ReadDataResponse(uint param_1, void *param_2, int param_3); // vtable[3]
	virtual void GetNextListenerID(bool param_1, netadr_s *param_2); // vtable[4]
	virtual void RegisterAdminUIID(uint param_1) override; // vtable[5]

	void UploadScreenshot(char *param_1); // size[5]
	void LogCommand(uint param_1, char *param_2); // size[147]
	void IsAuthenticated(uint param_1); // size[24]
	void GetDataResponseSize(uint param_1); // size[96]
	void SetValue(char *param_1, char *param_2); // size[452]
	void ExecCommand(char *param_1); // size[35]
	void GetUserBanList(CUtlBuffer *param_1); // size[478]
	void GetPlayerList(CUtlBuffer *param_1); // size[699]
	void GetMapList(CUtlBuffer *param_1); // size[639]
	CServerRemoteAccess(); // size[189]
	void BadPassword(CRConServer *param_1, uint param_2); // size[458]
	void CheckPassword(CRConServer *param_1, uint param_2, int param_3, char *param_4); // size[678]
	void RespondString(uint param_1, int param_2, char *param_3); // size[574]
	void SendMessageToAdminUI(uint param_1, char *param_2); // size[590]
	void SendResponseToClient(uint param_1, ServerDataResponseType_t param_2, void *param_3, int param_4); // size[861]
	void SendVProfData(uint param_1, bool param_2, void *param_3, int param_4); // size[21]
	void LookupStringValue(char *param_1); // size[346]
	void GetStatsString(char *param_1, int param_2); // size[123]
	void LookupValue(char *param_1, CUtlBuffer *param_2); // size[1320]
	void RequestValue(uint param_1, int param_2, char *param_3); // size[929]
	void WriteDataRequest(CRConServer *param_1, uint param_2, void *param_3, int param_4); // size[1558]
};
