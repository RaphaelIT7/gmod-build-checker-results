// Generated header

class CNetworkStringTableContainer : public INetworkStringTableContainer
{
public:
	virtual ~CNetworkStringTableContainer() override; // vtable[0]
	virtual ~CNetworkStringTableContainer() override; // vtable[1]
	virtual void CreateStringTable(char *param_1, int param_2, int param_3, int param_4); // vtable[2]
	virtual void RemoveAllTables(); // vtable[3]
	virtual void FindTable(char *param_1); // vtable[4]
	virtual void GetTable(int param_1); // vtable[5]
	virtual void GetNumTables(); // vtable[6]
	virtual void CreateStringTableEx(char *param_1, int param_2, int param_3, int param_4, bool param_5); // vtable[7]
	virtual void SetAllowClientSideAddString(INetworkStringTable *param_1, bool param_2) override; // vtable[8]

	void OnStringTableRemoved(CNetworkStringTable *param_1); // size[64]
	CNetworkStringTableContainer(); // size[68]
	void AllowCreation(bool param_1); // size[14]
	void Lock(bool param_1); // size[84]
	void DirectUpdate(int param_1); // size[317]
	void EnableRollback(bool param_1); // size[14]
	void RestoreTick(int param_1); // size[72]
	void TriggerCallbacks(int param_1); // size[95]
	void SetTick(int param_1); // size[72]
	void Dump(char *param_1); // size[132]
	void ReadStringTables(bf_read *param_1); // size[317]
	void WriteUpdateMessage(CBaseClient *param_1, int param_2, bf_write *param_3); // size[641]
	void WriteBaselines(int param_1, bf_write *param_2, INetChannel *param_3); // size[1714]
};
