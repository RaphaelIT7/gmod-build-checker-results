// Generated header

class CAI_SaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler
{
public:
	virtual void GetBlockName() override; // vtable[0]
	virtual void Save(ISave *param_1) override; // vtable[2]
	virtual void WriteSaveHeaders(ISave *param_1) override; // vtable[3]
	virtual void ReadRestoreHeaders(IRestore *param_1) override; // vtable[6]
	virtual void Restore(IRestore *param_1, boolparam_2) override; // vtable[7]
	virtual void PostRestore() override; // vtable[8]
};
