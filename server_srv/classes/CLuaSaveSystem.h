// Generated header

class CLuaSaveSystem : public CAutoGameSystem, public CDefSaveRestoreBlockHandler
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual void LevelShutdownPreClearSteamAPIContext() override; // vtable[6]
	virtual void LevelShutdownPreEntity() override; // vtable[7]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CLuaSaveSystem() override; // vtable[13]
	virtual ~CLuaSaveSystem() override; // vtable[14]
	virtual void GetBlockName(); // vtable[18]
	virtual void PreSave(CSaveRestoreData *param_1); // vtable[19]
	virtual void PreRestore(); // vtable[20]
	virtual void Save(ISave *param_1); // vtable[21]
	virtual void Restore(IRestore *param_1, boolparam_2); // vtable[22]

	void GetBlockName(); // size[7]
	void PreSave(CSaveRestoreData *param_1); // size[10]
	void PreRestore(); // size[10]
	void Save(ISave *param_1); // size[10]
	void Restore(IRestore *param_1, boolparam_2); // size[10]
};
