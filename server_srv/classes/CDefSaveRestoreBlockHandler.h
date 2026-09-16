// Generated header
// Estimated minimum size: 0x4 (4) bytes

class CDefSaveRestoreBlockHandler : public ISaveRestoreBlockHandler
{
public:
	void PreSave(CSaveRestoreData *param_1); // size[5]
	void Save(ISave *param_1); // size[5]
	void WriteSaveHeaders(ISave *param_1); // size[5]
	void PostSave(); // size[5]
	void PreRestore(); // size[5]
	void ReadRestoreHeaders(IRestore *param_1); // size[5]
	void Restore(IRestore *param_1, bool param_2); // size[5]
	void PostRestore(); // size[5]
};
