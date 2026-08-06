// Generated header

class GModDataPack : public LuaClientDatatableHook
{
public:
	virtual void GetFromDatatable(); // vtable[0]
	virtual void GetHashFromDatatable(); // vtable[1]
	virtual void GetHashFromString(); // vtable[2]
	virtual void FindInDatatable(); // vtable[3]
	virtual void FindFileInDatatable(); // vtable[4]
	virtual void IsSingleplayer(); // vtable[5]
	virtual void v000000000000000000000000000oo0000000000000000fff000000000000000000000000000000000o0o(); // vtable[6]
	virtual void IsValidDirectory() override; // vtable[7]

	void GModDataPack();
	void Initialize();
	void BuildSearchPaths();
	void Contains();
	void FindInTable();
	void GetClientSearchPaths();
	void OnClientConnected();
	void ~GModDataPack();
	void Reset();
	void GetHashFromDatatable();
	void AddOrUpdateFile();
	void SendFileToClient();
	void OnFilesRequested();
	void SendFileRequestRequest();
};
