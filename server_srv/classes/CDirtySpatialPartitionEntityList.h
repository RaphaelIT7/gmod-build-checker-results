// Generated header

class CDirtySpatialPartitionEntityList : public CAutoGameSystem, public IPartitionQueryCallback
{
public:
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CDirtySpatialPartitionEntityList() override; // vtable[13]
	virtual ~CDirtySpatialPartitionEntityList() override; // vtable[14]
	virtual void OnPreQuery_V1(); // vtable[18]
	virtual void OnPreQuery(intparam_1); // vtable[19]
	virtual void OnPostQuery(intparam_1); // vtable[20]

	void OnPostQuery(intparam_1); // size[80]
	void OnPostQuery(intparam_1); // size[7]
	void AddEntity(CBaseEntity *param_1); // size[183]
	CDirtySpatialPartitionEntityList(char *param_1); // size[186]
	void OnPreQuery(intparam_1); // size[10]
	void OnPreQuery_V1(); // size[7]
};
