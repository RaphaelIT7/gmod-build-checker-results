// Generated header

class CNetworkStringTableContainer : public INetworkStringTableContainer
{
public:
	virtual ~CNetworkStringTableContainer() override; // vtable[0]
	virtual ~CNetworkStringTableContainer() override; // vtable[1]
	virtual void CreateStringTable(char *param_1, intparam_2, intparam_3, intparam_4); // vtable[2]
	virtual void RemoveAllTables(); // vtable[3]
	virtual void FindTable(char *param_1); // vtable[4]
	virtual void GetTable(intparam_1); // vtable[5]
	virtual void GetNumTables(); // vtable[6]
	virtual void CreateStringTableEx(char *param_1, intparam_2, intparam_3, intparam_4, boolparam_5); // vtable[7]
	virtual void SetAllowClientSideAddString(INetworkStringTable *param_1, boolparam_2) override; // vtable[8]

	CNetworkStringTableContainer(); // size[68]
	void AllowCreation(boolparam_1); // size[14]
	void Lock(boolparam_1); // size[84]
	void DirectUpdate(intparam_1); // size[159]
	void EnableRollback(boolparam_1); // size[14]
	void RestoreTick(intparam_1); // size[33]
	void TriggerCallbacks(intparam_1); // size[95]
	void SetTick(intparam_1); // size[72]
	void Dump(); // size[53]
	void ReadStringTables(bf_read *param_1); // size[126]
	void WriteUpdateMessage(CBaseClient *param_1, intparam_2, bf_write *param_3); // size[489]
	void WriteBaselines(intparam_1, bf_write *param_2, INetChannel *param_3); // size[1562]
};
