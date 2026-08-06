// Generated header

class CClientState : public CBaseClientState, public CClientFrameManager
{
public:
	virtual void ~CClientState() override; // vtable[0]
	virtual void ~CClientState() override; // vtable[1]
	virtual void ShouldAcceptFile() override; // vtable[11]
	virtual void ReadEnterPVS(); // vtable[45]
	virtual void ReadLeavePVS(); // vtable[46]
	virtual void ReadDeltaEnt(); // vtable[47]
	virtual void ReadPreserveEnt(); // vtable[48]
	virtual void ReadDeletions() override; // vtable[49]
	virtual void ProcessVoiceInit(); // vtable[50]
	virtual void ProcessVoiceData(); // vtable[51]
	virtual void ProcessSounds(); // vtable[52]
	virtual void ProcessFixAngle(); // vtable[53]
	virtual void ProcessCrosshairAngle(); // vtable[54]
	virtual void ProcessBSPDecal(); // vtable[55]
	virtual void ProcessGameEvent(); // vtable[56]
	virtual void ProcessUserMessage(); // vtable[57]
	virtual void ProcessEntityMessage(); // vtable[58]
	virtual void ProcessTempEntities(); // vtable[59]
	virtual void ProcessPrefetch(); // vtable[60]

	void ProcessConnectionlessPacket();
	void ProcessGameEvent();
	void ProcessUserMessage();
	void ProcessEntityMessage();
	void ProcessBSPDecal();
	void ProcessCrosshairAngle();
	void ProcessFixAngle();
	void ProcessVoiceData();
	void ProcessVoiceInit();
	void ProcessSetPause();
	void ProcessClassInfo();
	void ProcessStringCmd();
	void ProcessServerInfo();
	void ProcessTick();
	void ProcessTempEntities();
	void ProcessPacketEntities();
	void ProcessSounds();
	void ProcessPrefetch();
	void SendClientInfo();
	void SendServerCmdKeyValues();
	void InstallEngineStringTableCallback();
	void GetTime();
	void ~CClientState();
	void ~CClientState();
	void ~CClientState();
	void ~CClientState();
	void ~CClientState();
	void ~CClientState();
	void CClientState();
};
