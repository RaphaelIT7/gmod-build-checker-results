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
	virtual void Init(); // vtable[246]
	virtual void GetTeamNumber(); // vtable[247]
	virtual void GetName(); // vtable[248]
	virtual void UpdateClientData(); // vtable[249]
	virtual void ShouldTransmitToPlayer(); // vtable[250]
	virtual void InitializeSpawnpoints(); // vtable[251]
	virtual void AddSpawnpoint(); // vtable[252]
	virtual void RemoveSpawnpoint(); // vtable[253]
	virtual void SpawnPlayer(); // vtable[254]
	virtual void InitializePlayers(); // vtable[255]
	virtual void AddPlayer(); // vtable[256]
	virtual void RemovePlayer(); // vtable[257]
	virtual void GetNumPlayers(); // vtable[258]
	virtual void GetPlayer(); // vtable[259]
	virtual void AddScore(); // vtable[260]
	virtual void SetScore(); // vtable[261]
	virtual void GetScore(); // vtable[262]
	virtual void ResetScores(); // vtable[263]
	virtual void GetRoundsWon(); // vtable[264]
	virtual void SetRoundsWon(); // vtable[265]
	virtual void IncrementRoundsWon(); // vtable[266]
	virtual void GetAliveMembers(); // vtable[267]

	CTeam(); // size[0]
	void AwardAchievement(); // size[0]
};
