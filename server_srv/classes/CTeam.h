// Generated header

class CTeam : public CBaseEntity
{
public:
	virtual ~CTeam() override; // vtable[0]
	virtual ~CTeam() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void Init(char *param_1, intparam_2); // vtable[246]
	virtual void GetTeamNumber(); // vtable[247]
	virtual void GetName(); // vtable[248]
	virtual void UpdateClientData(CBasePlayer *param_1); // vtable[249]
	virtual void ShouldTransmitToPlayer(CBasePlayer *param_1, CBaseEntity *param_2); // vtable[250]
	virtual void InitializeSpawnpoints(); // vtable[251]
	virtual void AddSpawnpoint(CTeamSpawnPoint *param_1); // vtable[252]
	virtual void RemoveSpawnpoint(CTeamSpawnPoint *param_1); // vtable[253]
	virtual void SpawnPlayer(CBasePlayer *param_1); // vtable[254]
	virtual void InitializePlayers(); // vtable[255]
	virtual void AddPlayer(CBasePlayer *param_1); // vtable[256]
	virtual void RemovePlayer(CBasePlayer *param_1); // vtable[257]
	virtual void GetNumPlayers(); // vtable[258]
	virtual void GetPlayer(intparam_1); // vtable[259]
	virtual void AddScore(intparam_1); // vtable[260]
	virtual void SetScore(intparam_1); // vtable[261]
	virtual void GetScore(); // vtable[262]
	virtual void ResetScores(); // vtable[263]
	virtual void GetRoundsWon(); // vtable[264]
	virtual void SetRoundsWon(intparam_1); // vtable[265]
	virtual void IncrementRoundsWon(); // vtable[266]
	virtual void GetAliveMembers(); // vtable[267]

	CTeam(); // size[28]
	void AwardAchievement(intparam_1); // size[23]
};
