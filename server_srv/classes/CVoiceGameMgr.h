// Generated header

class CVoiceGameMgr
{
public:
	virtual ~CVoiceGameMgr(); // vtable[0]
	virtual ~CVoiceGameMgr(); // vtable[1]

	CVoiceGameMgr(); // size[56]
	void Init(IVoiceGameMgrHelper *param_1, int param_2); // size[39]
	void SetHelper(IVoiceGameMgrHelper *param_1); // size[14]
	void ClientConnected(edict_t *param_1); // size[126]
	void ClientCommand(CBasePlayer *param_1, CCommand *param_2); // size[565]
	void UpdatePlayer(CBasePlayer *param_1, bool param_2, CBasePlayer *param_3); // size[76]
	void UpdateMasks(bool param_1, CBasePlayer *param_2); // size[108]
	void Update(double param_1); // size[173]
	void OnReceivedVoicePacket(CBaseEntity *param_1); // size[139]
	void IsPlayerIgnoringPlayer(int param_1, int param_2); // size[74]
	void SetProximityDistance(int param_1); // size[14]
	void CheckProximity(int param_1); // size[17]
};
