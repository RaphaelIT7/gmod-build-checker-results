// Generated header

class CNetworkStringTable : public INetworkStringTable
{
public:
	virtual void ~CNetworkStringTable() override; // vtable[0]
	virtual void ~CNetworkStringTable() override; // vtable[1]
	virtual void GetTableName(); // vtable[2]
	virtual void GetTableId(); // vtable[3]
	virtual void GetNumStrings(); // vtable[4]
	virtual void GetMaxStrings(); // vtable[5]
	virtual void GetEntryBits(); // vtable[6]
	virtual void SetTick(); // vtable[7]
	virtual void ChangedSinceTick(); // vtable[8]
	virtual void AddString(); // vtable[9]
	virtual void GetString(); // vtable[10]
	virtual void SetStringUserData(); // vtable[11]
	virtual void GetStringUserData(); // vtable[12]
	virtual void FindStringIndex(); // vtable[13]
	virtual void SetStringChangedCallback() override; // vtable[14]
	virtual void Dump(); // vtable[15]
	virtual void Lock(); // vtable[16]

	void IsUserDataFixedSize();
	void HasFileNameStrings();
	void GetUserDataSize();
	void GetUserDataSizeBits();
	void GetItem();
	void GetCallback();
	void EnableRollback();
	void SetMirrorTable();
	void RestoreTick();
	void UpdateMirrorTable();
	void GMOD_WriteUpdateSelective();
	void CopyStringTable();
	void TriggerCallbacks();
	void DataChanged();
	void WriteStringTable();
	void SetAllowClientSideAddString();
	void DeleteAllStrings();
	void ReadStringTable();
	void CNetworkStringTable();
	void WriteUpdate();
	void WriteBaselines();
	void ParseUpdate();
};
