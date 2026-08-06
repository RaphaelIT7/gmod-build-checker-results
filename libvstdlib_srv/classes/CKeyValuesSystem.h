// Generated header

class CKeyValuesSystem : public IKeyValuesSystem
{
public:
	virtual void RegisterSizeofKeyValues(); // vtable[0]
	virtual void AllocKeyValuesMemory(); // vtable[1]
	virtual void FreeKeyValuesMemory(); // vtable[2]
	virtual void GetSymbolForString(); // vtable[3]
	virtual void GetStringForSymbol(); // vtable[4]
	virtual void AddKeyValuesToMemoryLeakList(); // vtable[5]
	virtual void RemoveKeyValuesFromMemoryLeakList(); // vtable[6]
	virtual void GMOD_SetAllowGrowingPool() override; // vtable[7]

	void CaseInsensitiveHash();
	void ~CKeyValuesSystem();
	void CKeyValuesSystem();
	void MemoryLeakTrackerLessFunc();
};
