// Generated header

class CVProfExport : public IVProfExport
{
public:
	virtual void AddListener(); // vtable[0]
	virtual void RemoveListener(); // vtable[1]
	virtual void PauseProfile(); // vtable[2]
	virtual void ResumeProfile(); // vtable[3]
	virtual void SetBudgetFlagsFilter(intparam_1); // vtable[4]
	virtual void GetNumBudgetGroups(); // vtable[5]
	virtual void GetBudgetGroupInfos(CExportedBudgetGroupInfo *param_1); // vtable[6]
	virtual void GetBudgetGroupTimes(float *param_1); // vtable[7]

	void CalculateBudgetGroupTimes_Recursive(CVProfNode *param_1); // size[2192]
	~CVProfExport(); // size[55]
};
