// Generated header

class CAchievementMgr : public CAutoGameSystemPerFrame, public CGameEventListener, public IAchievementMgr
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void IsPerFrame() override; // vtable[12]
	virtual void ~CAchievementMgr() override; // vtable[13]
	virtual void ~CAchievementMgr() override; // vtable[14]
	virtual void InitializeAchievements(); // vtable[19]
	virtual void Update(); // vtable[20]
	virtual void OnMapEvent(); // vtable[21]
	virtual void GetAchievementByIndex(); // vtable[22]
	virtual void GetAchievementCount(); // vtable[23]
	virtual void GetAchievementByID(); // vtable[24]
	virtual void HasAchieved(); // vtable[25]
	virtual void DownloadUserData(); // vtable[26]
	virtual void SaveGlobalStateIfDirty(); // vtable[27]
	virtual void EnsureGlobalStateLoaded(); // vtable[28]
	virtual void AwardAchievement(); // vtable[29]
	virtual void WereCheatsEverOn(); // vtable[30]
	virtual void AddPanelToNotifyAch(); // vtable[31]
	virtual void RemovePanelFromNotifyAch(); // vtable[32]
	virtual void FireGameEvent(); // vtable[33]

	void InitializeAchievements();
	void GetAchievementByIndex();
	void GetAchievementCount();
	void Steam_OnAchievmentIconDownloaded();
	void RemovePanelFromNotifyAch();
	void OnMapEvent();
	void GetAchievementByID();
	void GetAchievementByName();
	void HasAchieved();
	void UploadUserData();
	void LoadGlobalState();
	void EnsureGlobalStateLoaded();
	void CheckAchievementsEnabled();
	void UpdateAchievement();
	void OnKillEvent();
	void OnAchievementEvent();
	void ResetAchievement_Internal();
	void ResetAchievement();
	void SaveGlobalState();
	void SaveGlobalStateIfDirty();
	void PreRestoreSavedGame();
	void PostRestoreSavedGame();
	void FireGameEvent();
	void ResetAchievements();
	void PrintAchievementStatus();
	void UpdateStateFromSteam_Internal();
	void DownloadUserData();
	void Steam_OnUserStatsReceived();
	void CheckMetaAchievements();
	void Steam_OnUserStatsStored();
	void CAchievementMgr();
	void AwardAchievement();
	void AddPanelToNotifyAch();
	void SetAchievementThink();
	void WereCheatsEverOn();
	void ~CAchievementMgr();
	void ~CAchievementMgr();
};
