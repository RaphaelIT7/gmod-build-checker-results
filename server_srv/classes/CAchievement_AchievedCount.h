// Generated header
// Estimated minimum size: 0x84 (132) bytes

class CAchievement_AchievedCount : public CBaseAchievement
{
public:
	virtual ~CAchievement_AchievedCount() override; // vtable[0]
	virtual ~CAchievement_AchievedCount() override; // vtable[1]
	virtual void Init() override; // vtable[3]
	virtual void IsMetaAchievement() override; // vtable[21]
	virtual void OnSteamUserStatsStored() override; // vtable[27]
	virtual void GetAchievementID(); // vtable[0]
	virtual void GetName(); // vtable[1]
	virtual void GetFlags(); // vtable[2]
	virtual void GetGoal(); // vtable[3]
	virtual void GetCount(); // vtable[4]
	virtual void IsAchieved(); // vtable[5]
	virtual void GetPointValue(); // vtable[6]
	virtual void ShouldSaveWithGame(); // vtable[7]
	virtual void ShouldHideUntilAchieved(); // vtable[8]
	virtual void ShouldShowOnHUD(); // vtable[9]
	virtual void SetShowOnHUD(bool param_1); // vtable[10]

	void SetAchievementsRequired(int param_1, int param_2, int param_3); // size[29]
};
