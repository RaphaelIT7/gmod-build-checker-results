// Generated header
// Estimated minimum size: 0x8 (8) bytes

class CDataManagerBase
{
public:
	virtual void Lock(); // vtable[0]
	virtual void TryLock(); // vtable[1]
	virtual void Unlock(); // vtable[2]

	void FlushAllUnlocked(); // size[16]
	void FlushAll(); // size[16]
	void CreateHandle(bool param_1); // size[77]
	CDataManagerBase(uint param_1); // size[16]
	void NotifySizeChanged(memhandle_t__ *param_1, uint param_2, uint param_3); // size[90]
	void SetTargetSize(uint param_1); // size[4]
	void GetResource_NoLockNoLRUTouch(memhandle_t__ *param_1); // size[489]
	void StoreResourceInHandle(ushort param_1, void *param_2, uint param_3); // size[472]
	void ToHandle(ushort param_1); // size[31]
	void TargetSize(); // size[4]
	void AvailableSize(); // size[7]
	void UsedSize(); // size[4]
	~CDataManagerBase(); // size[20]
	~CDataManagerBase(); // size[46]
	void MarkAsStale(memhandle_t__ *param_1); // size[662]
	void GetForFreeByIndex(ushort param_1); // size[176]
	void EnsureCapacity(uint param_1); // size[227]
	void FlushToTargetSize(); // size[7]
	void Purge(uint param_1); // size[27]
	void FlushAllUnlocked(); // size[400]
	void FlushAll(); // size[558]
	void LockResource(memhandle_t__ *param_1); // size[569]
	void UnlockResource(memhandle_t__ *param_1); // size[580]
	void BreakLock(memhandle_t__ *param_1); // size[552]
	void DestroyResource(memhandle_t__ *param_1); // size[376]
	void BreakAllLocks(); // size[546]
	void GetResource_NoLock(memhandle_t__ *param_1); // size[564]
	void TouchByIndex(ushort param_1); // size[108]
	void TouchResource(memhandle_t__ *param_1); // size[539]
	void CreateHandle(bool param_1); // size[568]
	void GetLRUHandleList(CUtlVector *param_1); // size[245]
	void GetLockHandleList(CUtlVector *param_1); // size[244]
	CDataManagerBase(uint param_1); // size[168]
};
