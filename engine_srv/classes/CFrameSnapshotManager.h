// Generated header

class CFrameSnapshotManager
{
public:
	virtual void ~CFrameSnapshotManager(); // vtable[0]
	virtual void ~CFrameSnapshotManager(); // vtable[1]
	virtual void LevelChanged(); // vtable[2]

	void NextSnapshot();
	void RemoveEntityReference();
	void AddEntityReference();
	void ShouldForceRepack();
	void UsePreviouslySentPacket();
	void GetPreviouslySentPacket();
	void GetMutex();
	void CreatePackedEntity();
	void GetPackedEntity();
	void CFrameSnapshotManager();
	void DeleteFrameSnapshot();
	void AddExplicitDelete();
	void CreateEmptySnapshot();
	void TakeTickSnapshot();
	void BuildSnapshotList();
	void GetCachedUncompressedEntity();
};
