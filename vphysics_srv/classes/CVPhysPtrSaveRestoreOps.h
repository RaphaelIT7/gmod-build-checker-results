// Generated header

class CVPhysPtrSaveRestoreOps : public CDefSaveRestoreOps
{
public:
	virtual void Save(SaveRestoreFieldInfo_t *param_1, ISave *param_2); // vtable[0]
	virtual void Restore(SaveRestoreFieldInfo_t *param_1, IRestore *param_2); // vtable[1]
	virtual void IsEmpty(SaveRestoreFieldInfo_t *param_1); // vtable[2]
	virtual void MakeEmpty(SaveRestoreFieldInfo_t *param_1); // vtable[3]
	virtual void Parse(SaveRestoreFieldInfo_t *param_1, char *param_2); // vtable[4]

	CVPhysPtrSaveRestoreOps(); // size[14]
	void PreRestore(); // size[1]
	void PostRestore(); // size[30]
};
