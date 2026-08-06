// Generated header

class CServerGameClients : public IServerGameClients
{
public:
	virtual void GetPlayerLimits(); // vtable[0]
	virtual void ClientConnect(); // vtable[1]
	virtual void ClientActive(); // vtable[2]
	virtual void ClientDisconnect(); // vtable[3]
	virtual void ClientPutInServer(); // vtable[4]
	virtual void ClientCommand(); // vtable[5]
	virtual void SetCommandClient(); // vtable[6]
	virtual void ClientSettingsChanged(); // vtable[7]
	virtual void ClientSetupVisibility(); // vtable[8]
	virtual void ProcessUsercmds(); // vtable[9]
	virtual void PostClientMessagesSent_DEPRECIATED(); // vtable[10]
	virtual void GetPlayerState(); // vtable[11]
	virtual void ClientEarPosition(); // vtable[12]
	virtual void GetReplayDelay(); // vtable[13]
	virtual void GetBugReportInfo(); // vtable[14]
	virtual void NetworkIDValidated(); // vtable[15]
	virtual void ClientCommandKeyValues(); // vtable[16]
	virtual void ClientSpawned(); // vtable[17]
	virtual void GMOD_ReceiveClientMessage(); // vtable[18]
	virtual void GMOD_ClientConnected(); // vtable[19]
	virtual void GMOD_SentClientStringTables(); // vtable[20]
	virtual void GMOD_OnReceivedVoicePacket(); // vtable[21]

	void _GLOBAL__sub_I_GetPlayerLimits(); // size[0]
	void GetBugReportInfo(); // size[0]
};
