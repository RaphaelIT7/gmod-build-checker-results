// Generated header

class CHLTVClientState : public CBaseClientState
{
public:
	virtual void ~CHLTVClientState() override; // vtable[0]
	virtual void ~CHLTVClientState() override; // vtable[1]
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

	void ~CHLTVClientState();
	void ~CHLTVClientState();
	void ~CHLTVClientState();
	void ~CHLTVClientState();
	void ProcessStringCmd();
	void ProcessVoiceInit();
	void ProcessPrefetch();
	void ProcessFixAngle();
	void ProcessCrosshairAngle();
	void ProcessBSPDecal();
	void ProcessVoiceData();
	void ProcessSounds();
	void ProcessUserMessage();
	void ProcessEntityMessage();
	void ProcessTempEntities();
	void ProcessGameEvent();
	void ProcessClassInfo();
	void CHLTVClientState();
	void CopyNewEntity();
	void SendClientInfo();
	void SendPacket();
	void UpdateStats();
	void ProcessSetConVar();
	void ProcessServerInfo();
	void ProcessSetView();
	void ProcessGameEventList();
	void ProcessPacketEntities();
};
