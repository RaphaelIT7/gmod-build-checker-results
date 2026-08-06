// Generated header

class CDataManagerBase
{
public:
	virtual void Lock(); // vtable[0]
	virtual void TryLock(); // vtable[1]
	virtual void Unlock(); // vtable[2]

	void FlushAllUnlocked();
	void FlushAll();
	void CreateHandle();
	void CDataManagerBase();
	void _GLOBAL__sub_I_CDataManagerBase();
	void NotifySizeChanged();
	void SetTargetSize();
	void GetResource_NoLockNoLRUTouch();
	void StoreResourceInHandle();
	void ToHandle();
	void TargetSize();
	void AvailableSize();
	void UsedSize();
	void ~CDataManagerBase();
	void ~CDataManagerBase();
	void MarkAsStale();
	void GetForFreeByIndex();
	void EnsureCapacity();
	void FlushToTargetSize();
	void Purge();
	void FlushAllUnlocked();
	void FlushAll();
	void LockResource();
	void UnlockResource();
	void BreakLock();
	void DestroyResource();
	void BreakAllLocks();
	void GetResource_NoLock();
	void TouchByIndex();
	void TouchResource();
	void CreateHandle();
	void GetLockHandleList();
	void GetLRUHandleList();
	void CDataManagerBase();
};
