// Generated header

class CDataManagerBase
{
public:
	virtual void Lock(); // vtable[0]
	virtual void TryLock(); // vtable[1]
	virtual void Unlock(); // vtable[2]
	virtual void ~CDataManagerBase(); // vtable[3]
	virtual void ~CDataManagerBase(); // vtable[4]
	virtual void __cxa_pure_virtual(); // vtable[6]

	void _GLOBAL__sub_I_CDataManagerBase();
	void NotifySizeChanged();
	void SetTargetSize();
	void GetResource_NoLockNoLRUTouch();
	void StoreResourceInHandle();
	void ToHandle();
	void TargetSize();
	void AvailableSize();
	void UsedSize();
	void MarkAsStale();
	void LockResource();
	void GetForFreeByIndex();
	void EnsureCapacity();
	void FlushToTargetSize();
	void Purge();
	void UnlockResource();
	void BreakLock();
	void DestroyResource();
	void BreakAllLocks();
	void TouchByIndex();
	void GetResource_NoLock();
	void TouchResource();
	void FlushAllUnlocked();
	void FlushAll();
	void CreateHandle();
	void GetLRUHandleList();
	void GetLockHandleList();
	void CDataManagerBase();
};
