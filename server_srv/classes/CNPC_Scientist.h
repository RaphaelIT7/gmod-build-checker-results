// Generated header

class CNPC_Scientist : public CHL1NPCTalker
{
public:
	virtual void ~CNPC_Scientist() override; // vtable[0]
	virtual void ~CNPC_Scientist() override; // vtable[1]
	virtual void _ZN14CNPC_Scientist22ModifyOrAppendCriteriaER14AI_CriteriaSet() override; // vtable[121]

	void SUB_LVFadeOut();
	void GetBaseMap();
	void TalkInit();
	void SUB_StartLVFadeOut();
	void Scream();
	void GetStoppedActivity();
	void CanHeal();
	void Heal();
	void TargetDistance();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
