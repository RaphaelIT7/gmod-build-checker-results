// Generated header
// Estimated minimum size: 0x38 (56) bytes

class CDirtySpatialPartitionEntityList : public CAutoGameSystem, public IPartitionQueryCallback
{
public:
	virtual void Init() override; // vtable[1]
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CDirtySpatialPartitionEntityList() override; // vtable[13]
	virtual ~CDirtySpatialPartitionEntityList() override; // vtable[14]
	virtual void OnPreQuery_V1(); // vtable[18]
	virtual void OnPreQuery(int param_1); // vtable[19]
	virtual void OnPostQuery(int param_1); // vtable[20]
	virtual void OnPreQuery_V1(); // vtable[0]
	virtual void OnPreQuery(int param_1); // vtable[1]
	virtual void OnPostQuery(int param_1); // vtable[2]

	void OnPostQuery(int param_1); // size[80]
	void AddEntity(CBaseEntity *param_1); // size[183]
	CDirtySpatialPartitionEntityList(char *param_1); // size[194]
};
