// Generated header

class CServerRemoteAccess : public IGameServerData
{
public:
	virtual ~CServerRemoteAccess() override; // vtable[0]
	virtual ~CServerRemoteAccess() override; // vtable[1]
	virtual void WriteDataRequest(uintparam_1, void *param_2, intparam_3); // vtable[2]
	virtual void ReadDataResponse(uintparam_1, void *param_2, intparam_3); // vtable[3]
	virtual void GetNextListenerID(boolparam_1, netadr_s *param_2); // vtable[4]
	virtual void RegisterAdminUIID(uintparam_1) override; // vtable[5]

	void UploadScreenshot(char *param_1); // size[5]
	void LogCommand(uintparam_1, char *param_2); // size[147]
	void IsAuthenticated(uintparam_1); // size[24]
	void GetDataResponseSize(uintparam_1); // size[96]
	void SetValue(char *param_1, char *param_2); // size[587]
	void ExecCommand(char *param_1); // size[35]
	void GetUserBanList(CUtlBuffer *param_1); // size[383]
	void GetPlayerList(CUtlBuffer *param_1); // size[625]
	void GetMapList(CUtlBuffer *param_1); // size[527]
	CServerRemoteAccess(); // size[189]
	void BadPassword(CRConServer *param_1, uintparam_2); // size[396]
	void CheckPassword(CRConServer *param_1, uintparam_2, intparam_3, char *param_4); // size[1]
	void RespondString(uintparam_1, intparam_2, char *param_3); // size[365]
	void SendMessageToAdminUI(uintparam_1, char *param_2); // size[366]
	void SendResponseToClient(uintparam_1, ServerDataResponseType_tparam_2, void *param_3, intparam_4); // size[546]
	void SendVProfData(uintparam_1, boolparam_2, void *param_3, intparam_4); // size[21]
	void LookupStringValue(char *param_1); // size[346]
	void GetStatsString(char *param_1, intparam_2); // size[303]
	void LookupValue(char *param_1, CUtlBuffer *param_2); // size[1086]
	void RequestValue(uintparam_1, intparam_2, char *param_3); // size[621]
	void WriteDataRequest(CRConServer *param_1, uintparam_2, void *param_3, intparam_4); // size[1748]
};
