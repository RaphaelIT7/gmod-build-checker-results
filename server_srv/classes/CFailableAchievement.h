// Generated header

class CFailableAchievement : public CBaseAchievement
{
public:
	virtual void ~CFailableAchievement() override; // vtable[0]
	virtual void ~CFailableAchievement() override; // vtable[1]
	virtual void OnActivationEvent(); // vtable[37]
	virtual void OnEvaluationEvent(); // vtable[38]
	virtual void __cxa_pure_virtual(); // vtable[40]

	void ShouldSaveWithGame();
	void GetBaseMap();
	void CFailableAchievement();
	void Activate();
	void SetFailed();
	void IsAchieved();
};
