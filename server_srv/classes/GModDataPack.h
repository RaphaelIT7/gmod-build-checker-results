// Generated header

class GModDataPack : public LuaClientDatatableHook
{
public:
	virtual void GetFromDatatable(string *param_1); // vtable[0]
	virtual void GetHashFromDatatable(string *param_1); // vtable[1]
	virtual void GetHashFromString(char *param_1, uintparam_2); // vtable[2]
	virtual void FindInDatatable(string *param_1, vector *param_2, boolparam_3); // vtable[3]
	virtual void FindFileInDatatable(string *param_1, boolparam_2, boolparam_3); // vtable[4]
	virtual void IsSingleplayer(); // vtable[5]
	virtual void v000000000000000000000000000oo0000000000000000fff000000000000000000000000000000000o0o(); // vtable[6]
	virtual void IsValidDirectory(string *param_1) override; // vtable[7]

	GModDataPack(); // size[96]
	void Initialize(); // size[123]
	void BuildSearchPaths(); // size[334]
	void Contains(char *param_1); // size[54]
	void FindInTable(string *param_1); // size[57]
	void GetClientSearchPaths(); // size[11]
	void OnClientConnected(intparam_1); // size[19]
	~GModDataPack(); // size[114]
	void Reset(); // size[85]
	void GetHashFromDatatable(intparam_1); // size[199]
	void AddOrUpdateFile(LuaFile *param_1, boolparam_2); // size[1169]
	void SendFileToClient(intparam_1, intparam_2); // size[796]
	void OnFilesRequested(intparam_1, bf_read *param_2, intparam_3); // size[1043]
	void SendFileRequestRequest(intparam_1); // size[150]
};
