// Generated header
// Estimated minimum size: 0x10 (16) bytes

class CLuaSaveSystem : public CAutoGameSystem, public CDefSaveRestoreBlockHandler
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void Shutdown() override; // vtable[3]
	virtual ~CLuaSaveSystem() override; // vtable[13]
	virtual ~CLuaSaveSystem() override; // vtable[14]
	virtual void GetBlockName(); // vtable[18]
	virtual void PreSave(CSaveRestoreData *param_1); // vtable[19]
	virtual void PreRestore(); // vtable[20]
	virtual void Save(ISave *param_1); // vtable[21]
	virtual void Restore(IRestore *param_1, bool param_2); // vtable[22]
	virtual void GetBlockName(); // vtable[0]
	virtual void PreSave(CSaveRestoreData *param_1); // vtable[1]
	virtual void Save(ISave *param_1); // vtable[2]
	virtual void WriteSaveHeaders(ISave *param_1); // vtable[3]
	virtual void PostSave(); // vtable[4]
	virtual void PreRestore(); // vtable[5]
	virtual void ReadRestoreHeaders(IRestore *param_1); // vtable[6]
	virtual void Restore(IRestore *param_1, bool param_2); // vtable[7]
	virtual void PostRestore(); // vtable[8]
};
