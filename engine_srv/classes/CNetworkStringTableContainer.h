// Generated header

class CNetworkStringTableContainer : public INetworkStringTableContainer
{
public:
	virtual void ~CNetworkStringTableContainer() override; // vtable[0]
	virtual void ~CNetworkStringTableContainer() override; // vtable[1]
	virtual void CreateStringTable(); // vtable[2]
	virtual void RemoveAllTables(); // vtable[3]
	virtual void FindTable(); // vtable[4]
	virtual void GetTable(); // vtable[5]
	virtual void GetNumTables(); // vtable[6]
	virtual void CreateStringTableEx(); // vtable[7]
	virtual void SetAllowClientSideAddString() override; // vtable[8]

	void CNetworkStringTableContainer();
	void AllowCreation();
	void Lock();
	void DirectUpdate();
	void EnableRollback();
	void RestoreTick();
	void TriggerCallbacks();
	void SetTick();
	void Dump();
	void ReadStringTables();
	void WriteUpdateMessage();
	void WriteBaselines();
};
