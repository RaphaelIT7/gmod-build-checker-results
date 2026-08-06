// Generated header

class CFrameSnapshotManager
{
public:
	virtual ~CFrameSnapshotManager(); // vtable[0]
	virtual ~CFrameSnapshotManager(); // vtable[1]
	virtual void LevelChanged(); // vtable[2]

	void NextSnapshot(CFrameSnapshot *param_1); // size[51]
	void RemoveEntityReference(int param_1); // size[279]
	void AddEntityReference(int param_1); // size[12]
	void ShouldForceRepack(CFrameSnapshot *param_1, int param_2, int param_3); // size[122]
	void UsePreviouslySentPacket(CFrameSnapshot *param_1, int param_2, int param_3); // size[118]
	void GetPreviouslySentPacket(int param_1, int param_2); // size[41]
	void GetMutex(); // size[13]
	void CreatePackedEntity(CFrameSnapshot *param_1, int param_2); // size[309]
	void GetPackedEntity(CFrameSnapshot *param_1, int param_2); // size[31]
	CFrameSnapshotManager(); // size[297]
	void DeleteFrameSnapshot(CFrameSnapshot *param_1); // size[151]
	void AddExplicitDelete(int param_1); // size[289]
	void CreateEmptySnapshot(int param_1, int param_2); // size[485]
	void TakeTickSnapshot(int param_1); // size[559]
	void BuildSnapshotList(CFrameSnapshot *param_1, CFrameSnapshot *param_2, CReferencedSnapshotList *param_3); // size[370]
	void GetCachedUncompressedEntity(PackedEntity *param_1); // size[363]
};
