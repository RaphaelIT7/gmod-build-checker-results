// Generated header

class CSaveRestoreBlockSet : public ISaveRestoreBlockSet
{
public:
	virtual void GetBlockName(); // vtable[0]
	virtual void PreSave(CSaveRestoreData *param_1); // vtable[1]
	virtual void Save(ISave *param_1); // vtable[2]
	virtual void WriteSaveHeaders(ISave *param_1); // vtable[3]
	virtual void PostSave(); // vtable[4]
	virtual void PreRestore(); // vtable[5]
	virtual void ReadRestoreHeaders(IRestore *param_1); // vtable[6]
	virtual void Restore(IRestore *param_1, boolparam_2); // vtable[7]
	virtual void PostRestore() override; // vtable[8]
	virtual void AddBlockHandler(ISaveRestoreBlockHandler *param_1); // vtable[9]
	virtual void RemoveBlockHandler(ISaveRestoreBlockHandler *param_1); // vtable[10]
	virtual void CallBlockHandlerRestore(ISaveRestoreBlockHandler *param_1, intparam_2, IRestore *param_3, boolparam_4); // vtable[11]

	~CSaveRestoreBlockSet(); // size[87]
};
