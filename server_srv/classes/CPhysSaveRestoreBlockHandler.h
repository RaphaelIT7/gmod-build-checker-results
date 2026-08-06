// Generated header

class CPhysSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler, public IPhysSaveRestoreManager, public IEntityListener
{
public:
	virtual void GetBlockName() override; // vtable[0]
	virtual void PreSave() override; // vtable[1]
	virtual void Save() override; // vtable[2]
	virtual void PostSave() override; // vtable[4]
	virtual void OnEntityCreated(); // vtable[9]
	virtual void OnEntityDeleted(); // vtable[10]
	virtual void NoteBBox(); // vtable[11]
	virtual void AssociateModel(); // vtable[12]
	virtual void AssociateModel(); // vtable[13]
	virtual void ForgetModel(); // vtable[14]
	virtual void ForgetAllModels(); // vtable[15]

	void OnEntityCreated();
	void SaveQueueFunc();
	void RestorePhysicsObjectAndModel();
	void ForgetAllModels();
	void CPhysSaveRestoreBlockHandler();
	void ~CPhysSaveRestoreBlockHandler();
	void OnEntityDeleted();
	void NoteBBox();
	void AssociateModel();
	void AssociateModel();
	void ForgetModel();
};
