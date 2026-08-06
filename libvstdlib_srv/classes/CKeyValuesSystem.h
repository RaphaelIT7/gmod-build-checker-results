// Generated header

class CKeyValuesSystem : public IKeyValuesSystem
{
public:
	virtual void RegisterSizeofKeyValues(int param_1); // vtable[0]
	virtual void AllocKeyValuesMemory(int param_1); // vtable[1]
	virtual void FreeKeyValuesMemory(void *param_1); // vtable[2]
	virtual void GetSymbolForString(char *param_1, bool param_2); // vtable[3]
	virtual void GetStringForSymbol(int param_1); // vtable[4]
	virtual void AddKeyValuesToMemoryLeakList(void *param_1, int param_2); // vtable[5]
	virtual void RemoveKeyValuesFromMemoryLeakList(void *param_1); // vtable[6]
	virtual void GMOD_SetAllowGrowingPool(bool param_1) override; // vtable[7]

	void CaseInsensitiveHash(char *param_1, int param_2); // size[58]
	~CKeyValuesSystem(); // size[124]
	CKeyValuesSystem(); // size[430]
	void MemoryLeakTrackerLessFunc(MemoryLeakTracker_t *param_1, MemoryLeakTracker_t *param_2); // size[20]
};
