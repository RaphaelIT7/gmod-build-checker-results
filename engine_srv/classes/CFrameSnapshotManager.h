// Generated header

class CFrameSnapshotManager
{
public:
	virtual ~CFrameSnapshotManager(); // vtable[0]
	virtual ~CFrameSnapshotManager(); // vtable[1]
	virtual void LevelChanged(); // vtable[2]

	void NextSnapshot(); // size[0]
	void RemoveEntityReference(); // size[0]
	void AddEntityReference(); // size[0]
	void ShouldForceRepack(); // size[0]
	void UsePreviouslySentPacket(); // size[0]
	void GetPreviouslySentPacket(); // size[0]
	void GetMutex(); // size[0]
	void CreatePackedEntity(); // size[0]
	void GetPackedEntity(); // size[0]
	CFrameSnapshotManager(); // size[0]
	void DeleteFrameSnapshot(); // size[0]
	void AddExplicitDelete(); // size[0]
	void CreateEmptySnapshot(); // size[0]
	void TakeTickSnapshot(); // size[0]
	void BuildSnapshotList(); // size[0]
	void GetCachedUncompressedEntity(); // size[0]
};
