// Generated header
// Estimated minimum size: 0x4C (76) bytes

class CDataManagerBase
{
public:
	virtual void Lock(); // vtable[0]
	virtual void TryLock(); // vtable[1]
	virtual void Unlock(); // vtable[2]
	virtual ~CDataManagerBase(); // vtable[3]
	virtual ~CDataManagerBase(); // vtable[4]

	_GLOBAL__sub_I_CDataManagerBase(); // size[48]
	void NotifySizeChanged(memhandle_t__ *param_1, uint param_2, uint param_3); // size[47]
	void SetTargetSize(uint param_1); // size[14]
	void GetResource_NoLockNoLRUTouch(memhandle_t__ *param_1); // size[62]
	void StoreResourceInHandle(ushort param_1, void *param_2, uint param_3); // size[82]
	void ToHandle(ushort param_1); // size[13]
	void TargetSize(); // size[11]
	void UsedSize(); // size[11]
	void MarkAsStale(memhandle_t__ *param_1); // size[279]
	void LockResource(memhandle_t__ *param_1); // size[241]
	void GetForFreeByIndex(ushort param_1); // size[153]
	void EnsureCapacity(uint param_1); // size[195]
	void FlushToTargetSize(); // size[27]
	void Purge(uint param_1); // size[41]
	void UnlockResource(memhandle_t__ *param_1); // size[199]
	void BreakLock(memhandle_t__ *param_1); // size[169]
	void DestroyResource(memhandle_t__ *param_1); // size[264]
	void BreakAllLocks(); // size[151]
	void TouchByIndex(ushort param_1); // size[106]
	void GetResource_NoLock(memhandle_t__ *param_1); // size[125]
	void TouchResource(memhandle_t__ *param_1); // size[107]
	void FlushAllUnlocked(); // size[83]
	void FlushAll(); // size[496]
	void CreateHandle(bool param_1); // size[183]
	void GetLockHandleList(CUtlVector *param_1); // size[118]
	CDataManagerBase(uint param_1); // size[213]
};
