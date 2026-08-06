// Generated header

class CServerGameClients : public IServerGameClients
{
public:
	virtual void GetPlayerLimits(int *param_1, int *param_2, int *param_3); // vtable[0]
	virtual void ClientConnect(edict_t *param_1, char *param_2, char *param_3, char *param_4, int param_5); // vtable[1]
	virtual void ClientActive(edict_t *param_1, bool param_2); // vtable[2]
	virtual void ClientDisconnect(edict_t *param_1); // vtable[3]
	virtual void ClientPutInServer(edict_t *param_1, char *param_2); // vtable[4]
	virtual void ClientCommand(edict_t *param_1, CCommand *param_2); // vtable[5]
	virtual void SetCommandClient(int param_1); // vtable[6]
	virtual void ClientSettingsChanged(edict_t *param_1); // vtable[7]
	virtual void ClientSetupVisibility(edict_t *param_1, edict_t *param_2, uchar *param_3, int param_4); // vtable[8]
	virtual void ProcessUsercmds(edict_t *param_1, bf_read *param_2, int param_3, int param_4, int param_5, bool param_6, bool param_7); // vtable[9]
	virtual void PostClientMessagesSent_DEPRECIATED(); // vtable[10]
	virtual void GetPlayerState(edict_t *param_1); // vtable[11]
	virtual void ClientEarPosition(edict_t *param_1, Vector *param_2); // vtable[12]
	virtual void GetReplayDelay(edict_t *param_1, int *param_2); // vtable[13]
	virtual void GetBugReportInfo(char *param_1, int param_2); // vtable[14]
	virtual void NetworkIDValidated(char *param_1, char *param_2, ulonglong param_3); // vtable[15]
	virtual void ClientCommandKeyValues(edict_t *param_1, KeyValues *param_2); // vtable[16]
	virtual void ClientSpawned(edict_t *param_1); // vtable[17]
	virtual void GMOD_ReceiveClientMessage(int param_1, edict_t *param_2, bf_read *param_3, int param_4); // vtable[18]
	virtual void GMOD_ClientConnected(int param_1); // vtable[19]
	virtual void GMOD_SentClientStringTables(int param_1); // vtable[20]
	virtual void GMOD_OnReceivedVoicePacket(edict_t *param_1); // vtable[21]

	void _GLOBAL__sub_I_GetPlayerLimits(); // size[113]
};
