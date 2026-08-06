// Generated header

class CSaveRestoreBlockSet : public ISaveRestoreBlockSet
{
public:
	virtual void GetBlockName(); // vtable[0]
	virtual void PreSave(); // vtable[1]
	virtual void Save(); // vtable[2]
	virtual void WriteSaveHeaders(); // vtable[3]
	virtual void PostSave(); // vtable[4]
	virtual void PreRestore(); // vtable[5]
	virtual void ReadRestoreHeaders(); // vtable[6]
	virtual void Restore(); // vtable[7]
	virtual void PostRestore() override; // vtable[8]
	virtual void AddBlockHandler(); // vtable[9]
	virtual void RemoveBlockHandler(); // vtable[10]
	virtual void CallBlockHandlerRestore(); // vtable[11]

	~CSaveRestoreBlockSet(); // size[0]
};
