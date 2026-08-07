// Generated header

class CAI_SensedObjectsManager : public IEntityListener
{
public:
	virtual void OnEntitySpawned(CBaseEntity *param_1) override; // vtable[1]
	virtual void OnEntityDeleted(CBaseEntity *param_1) override; // vtable[2]
	virtual void AddEntity(CBaseEntity *param_1); // vtable[3]

	void Init(); // size[72]
	void Term(); // size[39]
	void GetFirst(int *param_1); // size[84]
	void GetNext(int *param_1); // size[82]
	~CAI_SensedObjectsManager(); // size[35]
};
