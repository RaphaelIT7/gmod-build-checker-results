// Generated header

class CGameClient : public CBaseClient, public CClientFrameManager
{
public:
	virtual void ~CGameClient() override; // vtable[0]
	virtual void ~CGameClient() override; // vtable[1]
	virtual void ConnectionClosing(); // vtable[60]
	virtual void ConnectionCrashed(); // vtable[61]
	virtual void PacketStart(); // vtable[62]
	virtual void PacketEnd(); // vtable[63]
	virtual void ShouldAcceptFile(); // vtable[64]
	virtual void FileReceived(); // vtable[65]
	virtual void FileRequested(); // vtable[66]
	virtual void FileDenied(); // vtable[67]
	virtual void FileSent(); // vtable[68]
	virtual void ProcessMove(); // vtable[69]
	virtual void ProcessVoiceData(); // vtable[70]
	virtual void ProcessRespondCvarValue(); // vtable[71]
	virtual void ProcessFileCRCCheck(); // vtable[72]
	virtual void ProcessFileMD5Check(); // vtable[73]
	virtual void ProcessGMod_ClientToServer(); // vtable[74]

	void ProcessGMod_ClientToServer();
	void ProcessCmdKeyValues();
	void ProcessRespondCvarValue();
	void ProcessFileCRCCheck();
	void ProcessFileMD5Check();
	void PacketStart();
	void FileDenied();
	void IsHearingClient();
	void FileSent();
	void PacketEnd();
	void ConnectionClosing();
	void FileReceived();
	void ConnectionCrashed();
	void ProcessVoiceData();
	void ProcessVoiceData();
	void IsProximityHearingClient();
	void ShouldAcceptFile();
	void FileRequested();
	void DownloadCustomizations();
	void SetupPackInfo();
	void SetupPrevPackInfo();
	void CheckConnect();
	void WriteViewAngleUpdate();
	void IsEngineClientCommand();
	void GetSendFrame();
	void GetPrevPackInfo();
	void FillSoundsMessage();
	void WriteGameSounds();
	void ~CGameClient();
	void ~CGameClient();
	void ~CGameClient();
	void ~CGameClient();
	void ~CGameClient();
	void ~CGameClient();
	void SendSound();
	void ProcessClientInfo();
	void ProcessMove();
	void Connect();
	void SetRate();
	void SetUpdateRate();
	void Inactivate();
	void Clear();
	void CGameClient();
	void Reconnect();
	void Disconnect();
	void SendNetMsg();
	void ExecuteStringCommand();
};
