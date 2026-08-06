// Generated header

class CBaseServer : public IServer
{
public:
	virtual void ~CBaseServer() override; // vtable[0]
	virtual void ~CBaseServer() override; // vtable[1]
	virtual void ProcessConnectionlessPacket() override; // vtable[2]
	virtual void GetNumClients(); // vtable[3]
	virtual void GetNumProxies(); // vtable[4]
	virtual void GetNumFakeClients(); // vtable[5]
	virtual void GetMaxClients(); // vtable[6]
	virtual void GetClient(); // vtable[7]
	virtual void GetClientCount(); // vtable[8]
	virtual void GetUDPPort(); // vtable[9]
	virtual void GetTime(); // vtable[10]
	virtual void GetTick(); // vtable[11]
	virtual void GetTickInterval(); // vtable[12]
	virtual void GetName(); // vtable[13]
	virtual void GetMapName(); // vtable[14]
	virtual void GetSpawnCount(); // vtable[15]
	virtual void GetNumClasses(); // vtable[16]
	virtual void GetClassBits(); // vtable[17]
	virtual void GetNetStats(); // vtable[18]
	virtual void GetNumPlayers(); // vtable[19]
	virtual void GetPlayerInfo(); // vtable[20]
	virtual void IsActive(); // vtable[21]
	virtual void IsLoading(); // vtable[22]
	virtual void IsDedicated(); // vtable[23]
	virtual void IsPaused(); // vtable[24]
	virtual void IsMultiplayer(); // vtable[25]
	virtual void IsPausable(); // vtable[26]
	virtual void IsHLTV(); // vtable[27]
	virtual void IsReplay(); // vtable[28]
	virtual void GetPassword(); // vtable[29]
	virtual void SetPaused(); // vtable[30]
	virtual void SetPassword(); // vtable[31]
	virtual void BroadcastMessage(); // vtable[32]
	virtual void BroadcastMessage(); // vtable[33]
	virtual void DisconnectClient() override; // vtable[34]
	virtual void GetCPUUsage(); // vtable[35]
	virtual void BroadcastPrintf(); // vtable[36]
	virtual void SetMaxClients(); // vtable[37]
	virtual void WriteDeltaEntities(); // vtable[38]
	virtual void WriteTempEntities(); // vtable[39]
	virtual void Init(); // vtable[40]
	virtual void Clear(); // vtable[41]
	virtual void Shutdown(); // vtable[42]
	virtual void CreateFakeClient(); // vtable[43]
	virtual void RemoveClientFromGame(); // vtable[44]
	virtual void SendClientMessages(); // vtable[45]
	virtual void FillServerInfo(); // vtable[46]
	virtual void UserInfoChanged(); // vtable[47]
	virtual void RejectConnection(); // vtable[48]
	virtual void CheckIPRestrictions(); // vtable[49]
	virtual void ConnectClient(); // vtable[50]
	virtual void GetFreeClient(); // vtable[51]
	virtual void CreateNewClient(); // vtable[52]
	virtual void FinishCertificateCheck(); // vtable[53]
	virtual void GetChallengeNr(); // vtable[54]
	virtual void GetChallengeType(); // vtable[55]
	virtual void CheckProtocol(); // vtable[56]
	virtual void CheckChallengeNr(); // vtable[57]
	virtual void CheckChallengeType(); // vtable[58]
	virtual void CheckPassword(); // vtable[59]
	virtual void CheckIPConnectionReuse(); // vtable[60]
	virtual void ReplyChallenge(); // vtable[61]
	virtual void ReplyServerChallenge(); // vtable[62]
	virtual void CalculateCPUUsage(); // vtable[63]
	virtual void ShouldUpdateMasterServer(); // vtable[64]
	virtual void UpdateMasterServerPlayers(); // vtable[65]

	void GetNextUserID();
	void RequireValidChallenge();
	void ValidChallenge();
	void ValidInfoChallenge();
	void InactivateClients();
	void ReconnectClients();
	void CheckTimeouts();
	void UpdateUserSettings();
	void SendPendingServerInfo();
	void SetMasterServerRulesDirty();
	void GetFinalTickTime();
	void GetInstanceBaselineTable();
	void GetLightStyleTable();
	void GetUserInfoTable();
	void GetClassBaseline();
	void CompressPackedEntity();
	void UncompressPackedEntity();
	void CheckMasterServerRequestRestart();
	void UpdateMasterServerRules();
	void ForwardPacketsFromMasterServerUpdater();
	void AddTag();
	void RemoveTag();
	void CBaseServer();
	void RecalculateTags();
	void UpdateMasterServer();
	void RunFrame();
};
