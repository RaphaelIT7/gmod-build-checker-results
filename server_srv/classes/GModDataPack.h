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

	GModDataPack(); // size[0]
	void Initialize(); // size[0]
	void BuildSearchPaths(); // size[0]
	void Contains(); // size[0]
	void FindInTable(); // size[0]
	void GetClientSearchPaths(); // size[0]
	void OnClientConnected(); // size[0]
	~GModDataPack(); // size[0]
	void Reset(); // size[0]
	void GetHashFromDatatable(); // size[0]
	void AddOrUpdateFile(); // size[0]
	void SendFileToClient(); // size[0]
	void OnFilesRequested(); // size[0]
	void SendFileRequestRequest(); // size[0]
};
