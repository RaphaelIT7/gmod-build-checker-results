// Generated header

class GModDataPack : public LuaClientDatatableHook
{
public:
	virtual void GetFromDatatable(string *param_1); // vtable[0]
	virtual void GetHashFromDatatable(string *param_1); // vtable[1]
	virtual void GetHashFromString(char *param_1, uint param_2); // vtable[2]
	virtual void FindInDatatable(string *param_1, vector *param_2, bool param_3); // vtable[3]
	virtual void FindFileInDatatable(string *param_1, bool param_2, bool param_3); // vtable[4]
	virtual void IsSingleplayer(); // vtable[5]
	virtual void v000000000000000000000000000oo0000000000000000fff000000000000000000000000000000000o0o(); // vtable[6]
	virtual void IsValidDirectory(string *param_1) override; // vtable[7]

	GModDataPack(); // size[96]
	void Initialize(); // size[123]
	void BuildSearchPaths(); // size[44]
	void Contains(char *param_1); // size[120]
	void FindInTable(string *param_1); // size[173]
	void GetClientSearchPaths(); // size[11]
	void OnClientConnected(int param_1); // size[19]
	~GModDataPack(); // size[120]
	void Reset(); // size[85]
	void GetHashFromDatatable(int param_1); // size[199]
	void AddOrUpdateFile(LuaFile *param_1, bool param_2); // size[726]
	void SendFileToClient(int param_1, int param_2); // size[113]
	void OnFilesRequested(int param_1, bf_read *param_2, int param_3); // size[1043]
	void SendFileRequestRequest(int param_1); // size[174]
};
