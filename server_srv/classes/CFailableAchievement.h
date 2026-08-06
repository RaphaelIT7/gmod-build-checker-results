// Generated header

class CFailableAchievement : public CBaseAchievement
{
public:
	virtual ~CFailableAchievement() override; // vtable[0]
	virtual ~CFailableAchievement() override; // vtable[1]
	virtual void ShouldSaveWithGame() override; // vtable[14]
	virtual void PreRestoreSavedGame() override; // vtable[15]
	virtual void PostRestoreSavedGame() override; // vtable[16]
	virtual void IsAchieved() override; // vtable[18]
	virtual void IsActive() override; // vtable[19]
	virtual void OnMapEvent(char *param_1) override; // vtable[25]
	virtual void GetDataDescMap() override; // vtable[36]
	virtual void OnActivationEvent(); // vtable[37]
	virtual void OnEvaluationEvent(); // vtable[38]
	virtual void __cxa_pure_virtual(); // vtable[40]

	void ShouldSaveWithGame(); // size[7]
	void GetBaseMap(); // size[10]
	CFailableAchievement(); // size[45]
	void Activate(); // size[87]
	void SetFailed(); // size[108]
	void IsAchieved(); // size[7]
};
