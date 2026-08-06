// Generated header

class CBaseClientState : public INetChannelHandler, public IConnectionlessPacketHandler, public IServerMessageHandler
{
public:
	virtual void ~CBaseClientState() override; // vtable[0]
	virtual void ~CBaseClientState() override; // vtable[1]
	virtual void ConnectionStart() override; // vtable[2]
	virtual void ConnectionClosing(); // vtable[3]
	virtual void ConnectionCrashed(); // vtable[4]
	virtual void PacketStart() override; // vtable[5]
	virtual void PacketEnd(); // vtable[6]
	virtual void FileRequested(); // vtable[7]
	virtual void FileReceived(); // vtable[8]
	virtual void FileDenied(); // vtable[9]
	virtual void FileSent(); // vtable[10]
	virtual void _ZN16CBaseClientState16ShouldAcceptFileEPKcj() override; // vtable[11]
	virtual void ProcessConnectionlessPacket(); // vtable[12]
	virtual void ProcessTick(); // vtable[13]
	virtual void ProcessStringCmd(); // vtable[14]
	virtual void ProcessSetConVar(); // vtable[15]
	virtual void ProcessSignonState(); // vtable[16]
	virtual void ProcessPrint(); // vtable[17]
	virtual void ProcessServerInfo(); // vtable[18]
	virtual void ProcessSendTable(); // vtable[19]
	virtual void ProcessClassInfo(); // vtable[20]
	virtual void ProcessSetPause(); // vtable[21]
	virtual void ProcessCreateStringTable(); // vtable[22]
	virtual void ProcessUpdateStringTable(); // vtable[23]
	virtual void ProcessSetView(); // vtable[24]
	virtual void ProcessPacketEntities(); // vtable[25]
	virtual void ProcessGameEventList(); // vtable[26]
	virtual void ProcessGetCvarValue(); // vtable[27]
	virtual void ProcessCmdKeyValues(); // vtable[28]
	virtual void ProcessGMod_ServerToClient(); // vtable[29]
	virtual void GetDemoProtocolVersion() override; // vtable[30]
	virtual void Clear(); // vtable[31]
	virtual void FullConnect(); // vtable[32]
	virtual void Connect(); // vtable[33]
	virtual void SetSignonState(); // vtable[34]
	virtual void Disconnect(); // vtable[35]
	virtual void SendConnectPacket(); // vtable[36]
	virtual void GetCDKeyHash(); // vtable[37]
	virtual void RunFrame(); // vtable[38]
	virtual void CheckForResend(); // vtable[39]
	virtual void InstallStringTableCallback(); // vtable[40]
	virtual void HookClientStringTable(); // vtable[41]
	virtual void LinkClasses(); // vtable[42]
	virtual void GetConnectionRetryNumber(); // vtable[43]
	virtual void GetClientName(); // vtable[44]
	virtual void __cxa_pure_virtual(); // vtable[49]

	void ProcessGMod_ServerToClient();
	void ProcessCmdKeyValues();
	void ~CBaseClientState();
	void ~CBaseClientState();
	void ~CBaseClientState();
	void ~CBaseClientState();
	void ProcessSetPause();
	void ProcessSetView();
	void ProcessSignonState();
	void ProcessSendTable();
	void ProcessGameEventList();
	void ProcessUpdateStringTable();
	void ProcessConnectionlessPacket();
	void ProcessCreateStringTable();
	void ProcessPacketEntities();
	void ProcessTick();
	void ProcessPrint();
	void ProcessGetCvarValue();
	void ProcessSetConVar();
	void ProcessClassInfo();
	void CBaseClientState();
	void PrepareSteamConnectResponse();
	void GetStringTable();
	void SendStringCmd();
	void InternalProcessStringCmd();
	void ProcessStringCmd();
	void ReadPacketEntities();
	void FindClientClass();
	void GetEntityBaseline();
	void FreeEntityBaselines();
	void ForceFullUpdate();
	void ProcessServerInfo();
	void SetEntityBaseline();
	void CopyEntityBaseline();
	void GetClientClass();
	void GetClassBaseline();
	void SetSignOnState();
};
