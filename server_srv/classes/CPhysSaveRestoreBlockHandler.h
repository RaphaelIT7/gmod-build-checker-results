// Generated header

class CPhysSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler, public IPhysSaveRestoreManager, public IEntityListener
{
public:
	virtual void GetBlockName() override; // vtable[0]
	virtual void PreSave(CSaveRestoreData *param_1) override; // vtable[1]
	virtual void Save(ISave *param_1) override; // vtable[2]
	virtual void WriteSaveHeaders(ISave *param_1) override; // vtable[3]
	virtual void PostSave() override; // vtable[4]
	virtual void PreRestore() override; // vtable[5]
	virtual void ReadRestoreHeaders(IRestore *param_1) override; // vtable[6]
	virtual void Restore(IRestore *param_1, bool param_2) override; // vtable[7]
	virtual void PostRestore() override; // vtable[8]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[9]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[10]
	virtual void NoteBBox(Vector *param_1, Vector *param_2, CPhysCollide *param_3); // vtable[11]
	virtual void AssociateModel(IPhysicsObject *param_1, int param_2); // vtable[12]
	virtual void AssociateModel(IPhysicsObject *param_1, CPhysCollide *param_2); // vtable[13]
	virtual void ForgetModel(IPhysicsObject *param_1); // vtable[14]
	virtual void ForgetAllModels(); // vtable[15]

	void OnEntityCreated(CBaseEntity *param_1); // size[7]
	void SaveQueueFunc(QueuedItem_t *param_1, QueuedItem_t *param_2); // size[145]
	void RestorePhysicsObjectAndModel(IRestore *param_1, PhysObjectHeader_t *param_2, QueuedItem_t *param_3, int param_4); // size[848]
	void ForgetAllModels(); // size[7]
	CPhysSaveRestoreBlockHandler(); // size[376]
	~CPhysSaveRestoreBlockHandler(); // size[14]
	void OnEntityDeleted(CBaseEntity *param_1); // size[10]
	void NoteBBox(Vector *param_1, Vector *param_2, CPhysCollide *param_3); // size[10]
	void AssociateModel(IPhysicsObject *param_1, int param_2); // size[7]
	void AssociateModel(IPhysicsObject *param_1, CPhysCollide *param_2); // size[7]
	void ForgetModel(IPhysicsObject *param_1); // size[10]
};
