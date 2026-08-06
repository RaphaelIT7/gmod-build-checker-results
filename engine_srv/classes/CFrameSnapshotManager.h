// Generated header

class CFrameSnapshotManager
{
public:
	virtual ~CFrameSnapshotManager(); // vtable[0]
	virtual ~CFrameSnapshotManager(); // vtable[1]
	virtual void LevelChanged(); // vtable[2]

	void NextSnapshot(CFrameSnapshot *param_1); // size[51]
	void RemoveEntityReference(intparam_1); // size[50]
	void AddEntityReference(intparam_1); // size[12]
	void ShouldForceRepack(CFrameSnapshot *param_1, intparam_2, intparam_3); // size[122]
	void UsePreviouslySentPacket(CFrameSnapshot *param_1, intparam_2, intparam_3); // size[118]
	void GetPreviouslySentPacket(intparam_1, intparam_2); // size[41]
	void GetMutex(); // size[13]
	void CreatePackedEntity(CFrameSnapshot *param_1, intparam_2); // size[20]
	void GetPackedEntity(CFrameSnapshot *param_1, intparam_2); // size[31]
	CFrameSnapshotManager(); // size[297]
	void DeleteFrameSnapshot(CFrameSnapshot *param_1); // size[151]
	void AddExplicitDelete(intparam_1); // size[29]
	void CreateEmptySnapshot(intparam_1, intparam_2); // size[33]
	void TakeTickSnapshot(intparam_1); // size[598]
	void BuildSnapshotList(CFrameSnapshot *param_1, CFrameSnapshot *param_2, CReferencedSnapshotList *param_3); // size[38]
	void GetCachedUncompressedEntity(PackedEntity *param_1); // size[363]
};
