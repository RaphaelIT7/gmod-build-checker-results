// Generated header

class CHL2MPRules : public CTeamplayRules
{
public:
	virtual void ~CHL2MPRules() override; // vtable[13]
	virtual void ~CHL2MPRules() override; // vtable[14]
	virtual void GetViewVectors() override; // vtable[33]

	void GetHL2MPViewVectors();
	void IsIntermission();
	void CheckGameOver();
	void RestartGame();
	void CleanUpMap();
	void CheckChatForReadySignal();
	void CheckRestartGame();
	void CheckAllPlayersReady();
	void CHL2MPRules();
};
