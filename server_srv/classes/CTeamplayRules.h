// Generated header

class CTeamplayRules : public CMultiplayRules
{
public:
	virtual void ~CTeamplayRules() override; // vtable[13]
	virtual void ~CTeamplayRules() override; // vtable[14]
	virtual void GetCaptureValueForPlayer(); // vtable[149]
	virtual void TeamMayCapturePoint(); // vtable[150]
	virtual void PlayerMayCapturePoint(); // vtable[151]
	virtual void PlayerMayBlockPoint(); // vtable[152]
	virtual void PointsMayBeCaptured(); // vtable[153]
	virtual void SetLastCapPointChanged(); // vtable[154]
	virtual void TimerMayExpire(); // vtable[155]
	virtual void SetWinningTeam(); // vtable[156]
	virtual void SetStalemate(); // vtable[157]
	virtual void SetSwitchTeams(); // vtable[158]
	virtual void ShouldSwitchTeams(); // vtable[159]
	virtual void HandleSwitchTeams(); // vtable[160]
	virtual void SetScrambleTeams(); // vtable[161]
	virtual void ShouldScrambleTeams(); // vtable[162]
	virtual void HandleScrambleTeams(); // vtable[163]
	virtual void PointsMayAlwaysBeBlocked(); // vtable[164]

	void TeamWithFewestPlayers();
	void RecountTeams();
	void CTeamplayRules();
};
