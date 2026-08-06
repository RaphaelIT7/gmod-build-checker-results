// Generated header

class CDataCacheSection : public IDataCacheSection
{
public:
	virtual void GetSharedCache(); // vtable[0]
	virtual void GetName(); // vtable[1]
	virtual void SetLimits(); // vtable[2]
	virtual void SetOptions(); // vtable[3]
	virtual void GetStatus(); // vtable[4]
	virtual void EnsureCapacity(); // vtable[5]
	virtual void Add(); // vtable[6]
	virtual void Find(); // vtable[7]
	virtual void Remove(); // vtable[8]
	virtual void IsPresent(); // vtable[9]
	virtual void Lock(); // vtable[10]
	virtual void Unlock(); // vtable[11]
	virtual void Get(); // vtable[12]
	virtual void GetNoTouch(); // vtable[13]
	virtual void BeginFrameLocking(); // vtable[14]
	virtual void IsFrameLocking(); // vtable[15]
	virtual void FrameLock(); // vtable[16]
	virtual void EndFrameLocking(); // vtable[17]
	virtual void GetFrameUnlockCounterPtr(); // vtable[18]
	virtual void GetLockCount(); // vtable[19]
	virtual void BreakLock(); // vtable[20]
	virtual void Touch(); // vtable[21]
	virtual void Age(); // vtable[22]
	virtual void Flush(); // vtable[23]
	virtual void Purge(); // vtable[24]
	virtual void OutputReport(); // vtable[25]
	virtual void UpdateSize(); // vtable[26]
	virtual void LockMutex(); // vtable[27]
	virtual void UnlockMutex(); // vtable[28]
	virtual void AddEx() override; // vtable[29]
	virtual void OnAdd(); // vtable[30]
	virtual void DoFind(); // vtable[31]
	virtual void OnRemove(); // vtable[32]

	void CDataCacheSection();
	void ~CDataCacheSection();
	void GetLimits();
	void GetFirstUnlockedItem();
	void GetFirstLockedItem();
	void GetNextItem();
	void DiscardItemData();
	void DiscardItem();
	void PurgeItems();
};
