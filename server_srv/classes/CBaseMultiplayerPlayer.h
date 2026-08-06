// Generated header

class CBaseMultiplayerPlayer : public CAI_ExpresserHost
{
public:
	virtual void ~CBaseMultiplayerPlayer() override; // vtable[0]
	virtual void ~CBaseMultiplayerPlayer() override; // vtable[1]
	virtual void SpeakIfAllowed(); // vtable[540]
	virtual void SpeakConceptIfAllowed(); // vtable[541]
	virtual void CanBeAutobalanced(); // vtable[542]
	virtual void CanSpeakVoiceCommand(); // vtable[543]
	virtual void ShouldShowVoiceSubtitleToEnemy(); // vtable[544]
	virtual void NoteSpokeVoiceCommand(); // vtable[545]
	virtual void OnAchievementEarned(); // vtable[546]
	virtual void GetMultiplayerExpresser(); // vtable[547]
	virtual void CalculateTeamBalanceScore(); // vtable[548]
	virtual void CreateExpresser(); // vtable[549]

	void _GLOBAL__sub_I_CBaseMultiplayerPlayer();
	void EscortScoringThink();
	void SpeakConcept();
	void AwardAchievement();
	void GetPerLifeCounterKV();
	void SetPerLifeCounterKV();
	void ResetPerLifeCounters();
	void StartScoringEscortPoints();
	void StopScoringEscortPoints();
	void CBaseMultiplayerPlayer();
	void ShouldRunRateLimitedCommand();
	void ShouldRunRateLimitedCommand();
};
