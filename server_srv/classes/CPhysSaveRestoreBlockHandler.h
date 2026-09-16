// Generated header
// Estimated minimum size: 0x278 (632) bytes, no debug info available

class CPhysSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler, public IPhysSaveRestoreManager, public IEntityListener
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
	virtual void PostRestore(); // vtable[8]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[9]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[10]
	virtual void NoteBBox(Vector *param_1, Vector *param_2, CPhysCollide *param_3); // vtable[11]
	virtual void AssociateModel(IPhysicsObject *param_1, int param_2); // vtable[12]
	virtual void AssociateModel(IPhysicsObject *param_1, CPhysCollide *param_2); // vtable[13]
	virtual void ForgetModel(IPhysicsObject *param_1); // vtable[14]
	virtual void ForgetAllModels(); // vtable[15]
	virtual void NoteBBox(Vector *param_1, Vector *param_2, CPhysCollide *param_3); // vtable[0]
	virtual void AssociateModel(IPhysicsObject *param_1, int param_2); // vtable[1]
	virtual void AssociateModel(IPhysicsObject *param_1, CPhysCollide *param_2); // vtable[2]
	virtual void ForgetModel(IPhysicsObject *param_1); // vtable[3]
	virtual void ForgetAllModels(); // vtable[4]
	virtual void OnEntityCreated(CBaseEntity *param_1) override; // vtable[0]
	virtual void OnEntityDeleted(CBaseEntity *param_1) override; // vtable[2]

	void SaveQueueFunc(QueuedItem_t *param_1, QueuedItem_t *param_2); // size[145]
	void RestorePhysicsObjectAndModel(IRestore *param_1, PhysObjectHeader_t *param_2, QueuedItem_t *param_3, int param_4); // size[848]
	CPhysSaveRestoreBlockHandler(); // size[366]
	~CPhysSaveRestoreBlockHandler(); // size[235]
};
