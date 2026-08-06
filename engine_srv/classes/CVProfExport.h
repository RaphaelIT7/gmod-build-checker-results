// Generated header

class CVProfExport : public IVProfExport
{
public:
	virtual void AddListener(); // vtable[0]
	virtual void RemoveListener(); // vtable[1]
	virtual void PauseProfile(); // vtable[2]
	virtual void ResumeProfile(); // vtable[3]
	virtual void SetBudgetFlagsFilter(); // vtable[4]
	virtual void GetNumBudgetGroups(); // vtable[5]
	virtual void GetBudgetGroupInfos(); // vtable[6]
	virtual void GetBudgetGroupTimes(); // vtable[7]

	void CalculateBudgetGroupTimes_Recursive();
	void ~CVProfExport();
};
