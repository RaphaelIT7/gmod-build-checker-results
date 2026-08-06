// Generated header

class CHLTVServer : public IGameEventListener2, public CBaseServer, public CClientFrameManager, public IHLTVServer, public IDemoPlayer
{
public:
	virtual void ~CHLTVServer() override; // vtable[0]
	virtual void ~CHLTVServer() override; // vtable[1]
	virtual void FireGameEvent() override; // vtable[2]
	virtual void ProcessConnectionlessPacket() override; // vtable[3]
	virtual void Init() override; // vtable[4]
	virtual void Shutdown() override; // vtable[5]
	virtual void Clear() override; // vtable[6]
	virtual void IsHLTV() override; // vtable[7]
	virtual void IsMultiplayer() override; // vtable[8]
	virtual void FillServerInfo() override; // vtable[9]
	virtual void GetNetStats() override; // vtable[10]
	virtual void GetChallengeType() override; // vtable[11]
	virtual void GetName() override; // vtable[12]
	virtual void GetPassword() override; // vtable[13]
	virtual void ConnectClient() override; // vtable[14]
	virtual void GetBaseServer() override; // vtable[15]
	virtual void GetDirector() override; // vtable[16]
	virtual void GetHLTVSlot() override; // vtable[17]
	virtual void GetOnlineTime() override; // vtable[18]
	virtual void GetLocalStats() override; // vtable[19]
	virtual void GetGlobalStats() override; // vtable[20]
	virtual void IsMasterProxy() override; // vtable[21]
	virtual void IsDemoPlayback() override; // vtable[22]
	virtual void GetRelayAddress() override; // vtable[23]
	virtual void BroadcastEvent() override; // vtable[24]
	virtual void GetDemoFile() override; // vtable[25]
	virtual void GetPlaybackStartTick() override; // vtable[26]
	virtual void GetPlaybackTick() override; // vtable[27]
	virtual void GetTotalTicks() override; // vtable[28]
	virtual void StartPlayback() override; // vtable[29]
	virtual void IsPlayingBack() override; // vtable[30]
	virtual void IsPlaybackPaused() override; // vtable[31]
	virtual void IsPlayingTimeDemo() override; // vtable[32]
	virtual void IsSkipping() override; // vtable[33]
	virtual void CanSkipBackwards() override; // vtable[34]
	virtual void SetPlaybackTimeScale() override; // vtable[35]
	virtual void GetPlaybackTimeScale() override; // vtable[36]
	virtual void PausePlayback() override; // vtable[37]
	virtual void SkipToTick() override; // vtable[38]
	virtual void SetEndTick() override; // vtable[39]
	virtual void ResumePlayback() override; // vtable[40]
	virtual void StopPlayback() override; // vtable[41]
	virtual void InterpolateViewpoint() override; // vtable[42]
	virtual void ReadPacket() override; // vtable[43]
	virtual void ResetDemoInterpolation() override; // vtable[44]
	virtual void GetProtocolVersion() override; // vtable[45]
	virtual void ShouldLoopDemos() override; // vtable[46]
	virtual void OnLastDemoInLoopPlayed() override; // vtable[47]
	virtual void IsLoading() override; // vtable[48]
	virtual void SetMaxClients() override; // vtable[49]
	virtual void UserInfoChanged() override; // vtable[50]
	virtual void SendClientMessages() override; // vtable[51]
	virtual void ShouldUpdateMasterServer() override; // vtable[52]
	virtual void CreateNewClient() override; // vtable[53]

	void SetMaxClients();
	void GetHLTVSlot();
	void GetOnlineTime();
	void GetLocalStats();
	void IsMasterProxy();
	void IsDemoPlayback();
	void ShouldUpdateMasterServer();
	void UserInfoChanged();
	void SendClientMessages();
	void GetBaseServer();
	void GetDirector();
	void GetDemoFile();
	void IsPlayingBack();
	void IsPlaybackPaused();
	void GetPlaybackTimeScale();
	void SetPlaybackTimeScale();
	void GetPlaybackStartTick();
	void GetPlaybackTick();
	void GetTotalTicks();
	void GetChallengeType();
	void CreateNewClient();
	void GetRelayAddress();
	void GetProtocolVersion();
	void GetName();
	void GetPassword();
	void BroadcastEvent();
	void FreeClientRecvTables();
	void InitClientRecvTables();
	void StartDemo();
	void DispatchToRelay();
	void StartRelay();
	void GetRelayStats();
	void GetGlobalStats();
	void IsTVRelay();
	void BroadcastLocalTitle();
	void BroadcastLocalChat();
	void BroadcastEventLocal();
	void InstallStringTables();
	void RestoreTick();
	void LinkInstanceBaselines();
	void EntityPVSCheck();
	void SignonComplete();
	void UpdateStats();
	void SendNetMsg();
	void FireGameEvent();
	void GetBuffer();
	void UpdateTick();
	void ResyncDemoClock();
	void ReplyInfo();
	void GetDeltaFrame();
	void CHLTVServer();
	void ~CHLTVServer();
	void ~CHLTVServer();
	void ~CHLTVServer();
	void ~CHLTVServer();
	void ~CHLTVServer();
	void ~CHLTVServer();
	void ~CHLTVServer();
	void ~CHLTVServer();
	void StartMaster();
	void Changelevel();
	void ConnectRelay();
	void AddNewFrame();
	void RunFrame();
	void FillServerInfo();
	void Clear();
	void ProcessConnectionlessPacket();
	void Init();
	void GetNetStats();
	void Shutdown();
	void ReadCompeleteDemoFile();
	void StartPlayback();
	void ConnectClient();
	void IsHLTV();
	void IsMultiplayer();
	void IsPlayingTimeDemo();
	void IsSkipping();
	void CanSkipBackwards();
	void PausePlayback();
	void SkipToTick();
	void SetEndTick();
	void ResumePlayback();
	void StopPlayback();
	void InterpolateViewpoint();
	void ReadPacket();
	void ResetDemoInterpolation();
	void ShouldLoopDemos();
	void OnLastDemoInLoopPlayed();
	void IsLoading();
};
