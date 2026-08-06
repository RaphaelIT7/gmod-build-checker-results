// Generated header

class CGlobalState : public CAutoGameSystem
{
public:
	virtual void LevelShutdownPreEntity() override; // vtable[7]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CGlobalState() override; // vtable[13]
	virtual ~CGlobalState() override; // vtable[14]

	void DumpGlobals(); // size[12]
	void GetBaseMap(); // size[7]
	void Save(ISave *param_1); // size[70]
	void Reset(); // size[50]
	void Restore(IRestore *param_1); // size[85]
};
