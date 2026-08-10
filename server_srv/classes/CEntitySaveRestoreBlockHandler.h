// Generated header

class CEntitySaveRestoreBlockHandler : public ISaveRestoreBlockHandler
{
public:
	virtual void GetBlockName(); // vtable[0]
	virtual void PreSave(CSaveRestoreData *param_1); // vtable[1]
	virtual void Save(ISave *param_1); // vtable[2]
	virtual void WriteSaveHeaders(ISave *param_1); // vtable[3]
	virtual void PostSave(); // vtable[4]
	virtual void PreRestore(); // vtable[5]
	virtual void ReadRestoreHeaders(IRestore *param_1); // vtable[6]
	virtual void Restore(IRestore *param_1, bool param_2); // vtable[7]
	virtual void PostRestore() override; // vtable[8]

	void FindGlobalEntity(string_t param_1, string_t param_2); // size[227]
	void DoRestoreEntity(CBaseEntity *param_1, IRestore *param_2); // size[224]
	void ModelSpaceLandmark(int param_1); // size[191]
	void RestoreEntity(CBaseEntity *param_1, IRestore *param_2, entitytable_t *param_3); // size[202]
	void RestoreGlobalEntity(CBaseEntity *param_1, CSaveRestoreData *param_2, entitytable_t *param_3); // size[486]
	void SaveInitEntities(CSaveRestoreData *param_1); // size[38]
};
