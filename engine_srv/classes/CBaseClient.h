// Generated header

class CBaseClient : public IGameEventListener2, public IClient, public IClientMessageHandler
{
public:
	virtual void ~CBaseClient() override; // vtable[0]
	virtual void ~CBaseClient() override; // vtable[1]
	virtual void FireGameEvent() override; // vtable[2]
	virtual void GetPlayerSlot(); // vtable[3]
	virtual void GetUserID(); // vtable[4]
	virtual void GetNetworkID() override; // vtable[5]
	virtual void GetClientName(); // vtable[6]
	virtual void GetNetChannel(); // vtable[7]
	virtual void GetServer(); // vtable[8]
	virtual void GetUserSetting(); // vtable[9]
	virtual void GetNetworkIDString(); // vtable[10]
	virtual void Connect() override; // vtable[11]
	virtual void Inactivate(); // vtable[12]
	virtual void Reconnect(); // vtable[13]
	virtual void Disconnect(); // vtable[14]
	virtual void SetRate() override; // vtable[15]
	virtual void GetRate(); // vtable[16]
	virtual void SetUpdateRate(); // vtable[17]
	virtual void GetUpdateRate(); // vtable[18]
	virtual void Clear(); // vtable[19]
	virtual void DemoRestart(); // vtable[20]
	virtual void GetMaxAckTickCount(); // vtable[21]
	virtual void ExecuteStringCommand(); // vtable[22]
	virtual void SendNetMsg(); // vtable[23]
	virtual void ClientPrintf(); // vtable[24]
	virtual void IsConnected(); // vtable[25]
	virtual void IsSpawned(); // vtable[26]
	virtual void IsActive(); // vtable[27]
	virtual void IsFakeClient(); // vtable[28]
	virtual void IsHLTV(); // vtable[29]
	virtual void IsHearingClient(); // vtable[30]
	virtual void IsProximityHearingClient(); // vtable[31]
	virtual void SetMaxRoutablePayloadSize(); // vtable[32]
	virtual void IsSplitScreenUser(); // vtable[33]
	virtual void ProcessTick(); // vtable[34]
	virtual void ProcessStringCmd(); // vtable[35]
	virtual void ProcessSetConVar(); // vtable[36]
	virtual void ProcessSignonState(); // vtable[37]
	virtual void ProcessClientInfo(); // vtable[38]
	virtual void ProcessBaselineAck(); // vtable[39]
	virtual void ProcessListenEvents() override; // vtable[40]
	virtual void ProcessCmdKeyValues(); // vtable[41]
	virtual void ConnectionStart(); // vtable[42]
	virtual void UpdateAcknowledgedFramecount(); // vtable[43]
	virtual void ShouldSendMessages(); // vtable[44]
	virtual void UpdateSendState(); // vtable[45]
	virtual void FillUserInfo(); // vtable[46]
	virtual void UpdateUserSettings(); // vtable[47]
	virtual void SetSignonState(); // vtable[48]
	virtual void WriteGameSounds(); // vtable[49]
	virtual void GetDeltaFrame(); // vtable[50]
	virtual void SendSnapshot(); // vtable[51]
	virtual void SendServerInfo(); // vtable[52]
	virtual void SendSignonData(); // vtable[53]
	virtual void SpawnPlayer(); // vtable[54]
	virtual void ActivatePlayer(); // vtable[55]
	virtual void SetName(); // vtable[56]
	virtual void SetUserCVar(); // vtable[57]
	virtual void FreeBaselines(); // vtable[58]
	virtual void IgnoreTempEntity(); // vtable[59]

	void SetRate();
	void GetRate();
	void SetUpdateRate();
	void GetUpdateRate();
	void ProcessTick();
	void ProcessStringCmd();
	void GetNetworkID();
	void SetMaxRoutablePayloadSize();
	void GetMaxAckTickCount();
	void ProcessCmdKeyValues();
	void ClientPrintf();
	void GetUserSetting();
	void ProcessListenEvents();
	void ExecuteStringCommand();
	void ConnectionStart();
	void ProcessBaselineAck();
	void ProcessClientInfo();
	void ProcessSignonState();
	void CBaseClient();
	void StartTrace();
	void SendOnFullUpdateRequestedEvent();
	void CheckFlushNameChange();
	void ClientRequestNameChange();
	void ProcessSetConVar();
	void OnRequestFullUpdate();
	void GetNetworkIDString();
	void SetSteamID();
	void OnSignonStateFull();
	void SetSignOnState();
	void Reconnect();
	void Connect();
	void Disconnect();
	void Clear();
	void Inactivate();
	void EndTrace();
	void ~CBaseClient();
	void ~CBaseClient();
	void ~CBaseClient();
	void ~CBaseClient();
	void TraceNetworkData();
	void TraceNetworkMsg();
	void SendNetMsg();
	void GetPlayerSlot();
	void GetUserID();
	void GetClientName();
	void GetNetChannel();
	void GetServer();
	void IsConnected();
	void IsSpawned();
	void IsActive();
	void IsFakeClient();
	void IsHLTV();
	void IsHearingClient();
	void IsProximityHearingClient();
};
