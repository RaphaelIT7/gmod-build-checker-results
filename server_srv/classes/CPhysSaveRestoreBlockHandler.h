// Generated header

class CPhysSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler, public IPhysSaveRestoreManager, public IEntityListener
{
public:
	virtual void GetBlockName() override; // vtable[0]
	virtual void PreSave() override; // vtable[1]
	virtual void Save() override; // vtable[2]
	virtual void WriteSaveHeaders() override; // vtable[3]
	virtual void PostSave() override; // vtable[4]
	virtual void PreRestore() override; // vtable[5]
	virtual void ReadRestoreHeaders() override; // vtable[6]
	virtual void Restore() override; // vtable[7]
	virtual void PostRestore() override; // vtable[8]
	virtual void OnEntityCreated(); // vtable[9]
	virtual void OnEntityDeleted(); // vtable[10]
	virtual void NoteBBox(); // vtable[11]
	virtual void AssociateModel(); // vtable[12]
	virtual void AssociateModel(); // vtable[13]
	virtual void ForgetModel(); // vtable[14]
	virtual void ForgetAllModels(); // vtable[15]

	void OnEntityCreated(); // size[0]
	void SaveQueueFunc(); // size[0]
	void RestorePhysicsObjectAndModel(); // size[0]
	void ForgetAllModels(); // size[0]
	CPhysSaveRestoreBlockHandler(); // size[0]
	~CPhysSaveRestoreBlockHandler(); // size[0]
	void OnEntityDeleted(); // size[0]
	void NoteBBox(); // size[0]
	void AssociateModel(); // size[0]
	void AssociateModel(); // size[0]
	void ForgetModel(); // size[0]
};
