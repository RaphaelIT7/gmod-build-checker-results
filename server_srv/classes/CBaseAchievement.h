// Generated header

class CBaseAchievement : public CGameEventListener, public IAchievement
{
public:
	virtual void ~CBaseAchievement() override; // vtable[0]
	virtual void ~CBaseAchievement() override; // vtable[1]
	virtual void FireGameEvent() override; // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void ListenForEvents(); // vtable[4]
	virtual void Event_EntityKilled(); // vtable[5]
	virtual void GetAchievementID(); // vtable[6]
	virtual void GetName(); // vtable[7]
	virtual void GetFlags(); // vtable[8]
	virtual void GetGoal(); // vtable[9]
	virtual void GetPointValue() override; // vtable[10]
	virtual void ShouldHideUntilAchieved(); // vtable[11]
	virtual void ShouldShowProgressNotification(); // vtable[12]
	virtual void OnPlayerStatsUpdate(); // vtable[13]
	virtual void ShouldSaveWithGame(); // vtable[14]
	virtual void PreRestoreSavedGame(); // vtable[15]
	virtual void PostRestoreSavedGame(); // vtable[16]
	virtual void GetCount(); // vtable[17]
	virtual void IsAchieved(); // vtable[18]
	virtual void IsActive(); // vtable[19]
	virtual void LocalPlayerCanEarn(); // vtable[20]
	virtual void IsMetaAchievement(); // vtable[21]
	virtual void AlwaysListen(); // vtable[22]
	virtual void AlwaysEnabled(); // vtable[23]
	virtual void OnAchieved(); // vtable[24]
	virtual void OnMapEvent(); // vtable[25]
	virtual void PrintAdditionalStatus(); // vtable[26]
	virtual void OnSteamUserStatsStored(); // vtable[27]
	virtual void UpdateAchievement(); // vtable[28]
	virtual void ShouldShowOnHUD(); // vtable[29]
	virtual void SetShowOnHUD(); // vtable[30]
	virtual void GetSettings(); // vtable[31]
	virtual void ApplySettings(); // vtable[32]
	virtual void Think(); // vtable[33]
	virtual void FireGameEvent_Internal(); // vtable[34]
	virtual void CalcProgressMsgIncrement(); // vtable[35]
	virtual void GetDataDescMap(); // vtable[36]

	void SetShowOnHUD();
	void ShouldSaveWithGame();
	void GetBaseMap();
	void CBaseAchievement();
	void SetFlags();
	void SetVictimFilter();
	void SetAttackerFilter();
	void SetInflictorFilter();
	void SetInflictorEntityNameFilter();
	void SetMapNameFilter();
	void SetGameDirFilter();
	void SetComponentPrefix();
	void SetNextThink();
	void ClearThink();
	void EvaluateIsAlreadyAchieved();
	void AwardAchievement();
	void EvaluateNewAchievement();
	void ShowProgressNotification();
	void HandleProgressUpdate();
	void IncrementCount();
	void IncrementCount();
	void EnsureComponentBitSetAndEvaluate();
	void OnComponentEvent();
	void SetComponentBits();
	void ShouldSaveGlobal();
	void GetAchievementID();
	void GetName();
	void GetFlags();
	void GetGoal();
	void GetPointValue();
	void ShouldHideUntilAchieved();
	void GetCount();
	void IsAchieved();
	void ShouldShowOnHUD();
};
