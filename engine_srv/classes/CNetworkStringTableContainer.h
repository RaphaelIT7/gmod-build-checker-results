// Generated header

class CNetworkStringTableContainer : public INetworkStringTableContainer
{
public:
	virtual ~CNetworkStringTableContainer() override; // vtable[0]
	virtual ~CNetworkStringTableContainer() override; // vtable[1]
	virtual void CreateStringTable(); // vtable[2]
	virtual void RemoveAllTables(); // vtable[3]
	virtual void FindTable(); // vtable[4]
	virtual void GetTable(); // vtable[5]
	virtual void GetNumTables(); // vtable[6]
	virtual void CreateStringTableEx(); // vtable[7]
	virtual void SetAllowClientSideAddString() override; // vtable[8]

	CNetworkStringTableContainer(); // size[0]
	void AllowCreation(); // size[0]
	void Lock(); // size[0]
	void DirectUpdate(); // size[0]
	void EnableRollback(); // size[0]
	void RestoreTick(); // size[0]
	void TriggerCallbacks(); // size[0]
	void SetTick(); // size[0]
	void Dump(); // size[0]
	void ReadStringTables(); // size[0]
	void WriteUpdateMessage(); // size[0]
	void WriteBaselines(); // size[0]
};
