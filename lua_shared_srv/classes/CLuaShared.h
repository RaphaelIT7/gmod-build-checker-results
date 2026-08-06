// Generated header

class CLuaShared : public ILuaShared
{
public:
	virtual ~CLuaShared() override; // vtable[0]
	virtual ~CLuaShared() override; // vtable[1]
	virtual void Init(_func_void_ptr_char_ptr_int_ptr *param_1, boolparam_2, IGet *param_3); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void DumpStats(); // vtable[4]
	virtual void CreateLuaInterface(ucharparam_1, boolparam_2); // vtable[5]
	virtual void CloseLuaInterface(ILuaInterface *param_1); // vtable[6]
	virtual void GetLuaInterface(ucharparam_1); // vtable[7]
	virtual void LoadFile(string *param_1, string *param_2, boolparam_3, boolparam_4); // vtable[8]
	virtual void GetCache(string *param_1); // vtable[9]
	virtual void MountLua(char *param_1); // vtable[10]
	virtual void MountLuaAdd(char *param_1, char *param_2); // vtable[11]
	virtual void UnMountLua(char *param_1); // vtable[12]
	virtual void SetFileContents(char *param_1, char *param_2); // vtable[13]
	virtual void SetLuaFindHook(LuaClientDatatableHook *param_1); // vtable[14]
	virtual void FindScripts(string *param_1, string *param_2, vector *param_3); // vtable[15]
	virtual void GetStackTraces(); // vtable[16]
	virtual void InvalidateCache(string *param_1); // vtable[17]
	virtual void EmptyCache(); // vtable[18]
	virtual void ScriptExists(string *param_1, string *param_2, boolparam_3) override; // vtable[19]

	void AddSearchPath(char *param_1, char *param_2); // size[835]
	CLuaShared(); // size[193]
	void CreateCache(string *param_1, string *param_2, longparam_3); // size[477]
	void LoadFile_FromFile(string *param_1, string *param_2, boolparam_3, boolparam_4); // size[993]
	void LoadFile_FromDataTable(string *param_1, string *param_2, boolparam_3); // size[1353]
};
