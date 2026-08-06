// Generated header

class CHLTVClient : public CBaseClient
{
public:
	virtual void ~CHLTVClient() override; // vtable[0]
	virtual void ~CHLTVClient() override; // vtable[1]
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
	virtual void ProcessSaveReplay(); // vtable[74]
	virtual void ProcessGMod_ClientToServer(); // vtable[75]

	void _GLOBAL__sub_I_CHLTVClient();
	void ProcessMove();
	void ProcessListenEvents();
	void ProcessRespondCvarValue();
	void ProcessFileCRCCheck();
	void ProcessVoiceData();
	void ProcessGMod_ClientToServer();
	void ConnectionClosing();
	void ConnectionCrashed();
	void PacketStart();
	void PacketEnd();
	void ShouldAcceptFile();
	void FileSent();
	void SetUpdateRate();
	void FileRequested();
	void FileDenied();
	void FileReceived();
	void ~CHLTVClient();
	void ~CHLTVClient();
	void ~CHLTVClient();
	void ~CHLTVClient();
	void CHLTVClient();
	void ProcessClientInfo();
	void ExecuteStringCommand();
	void SetRate();
	void ProcessSetConVar();
	void ProcessFileMD5Check();
};
