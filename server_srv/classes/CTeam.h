// Generated header
// Estimated minimum size: 0x13F4 (5108) bytes

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
	virtual void Init(char *param_1, int param_2); // vtable[246]
	virtual void GetTeamNumber(); // vtable[247]
	virtual void GetName(); // vtable[248]
	virtual void UpdateClientData(CBasePlayer *param_1); // vtable[249]
	virtual void ShouldTransmitToPlayer(CBasePlayer *param_1, CBaseEntity *param_2); // vtable[250]
	virtual void InitializePlayers(); // vtable[251]
	virtual void AddPlayer(CBasePlayer *param_1); // vtable[252]
	virtual void RemovePlayer(CBasePlayer *param_1); // vtable[253]
	virtual void GetNumPlayers(); // vtable[254]
	virtual void GetPlayer(int param_1); // vtable[255]
	virtual void AddScore(int param_1); // vtable[256]
	virtual void SetScore(int param_1); // vtable[257]
	virtual void GetScore(); // vtable[258]
	virtual void ResetScores(); // vtable[259]
	virtual void GetRoundsWon(); // vtable[260]
	virtual void SetRoundsWon(int param_1); // vtable[261]
	virtual void IncrementRoundsWon(); // vtable[262]
	virtual void GetAliveMembers(); // vtable[263]

	CTeam(); // size[28]
	void AwardAchievement(int param_1); // size[23]
};
