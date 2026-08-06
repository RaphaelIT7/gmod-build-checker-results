// Generated header

class CLuaShared : public ILuaShared
{
public:
	virtual void ~CLuaShared() override; // vtable[0]
	virtual void ~CLuaShared() override; // vtable[1]
	virtual void Init(); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void DumpStats(); // vtable[4]
	virtual void CreateLuaInterface(); // vtable[5]
	virtual void CloseLuaInterface(); // vtable[6]
	virtual void GetLuaInterface(); // vtable[7]
	virtual void LoadFile(); // vtable[8]
	virtual void GetCache(); // vtable[9]
	virtual void MountLua(); // vtable[10]
	virtual void MountLuaAdd(); // vtable[11]
	virtual void UnMountLua(); // vtable[12]
	virtual void SetFileContents(); // vtable[13]
	virtual void SetLuaFindHook(); // vtable[14]
	virtual void FindScripts(); // vtable[15]
	virtual void GetStackTraces(); // vtable[16]
	virtual void InvalidateCache(); // vtable[17]
	virtual void EmptyCache(); // vtable[18]
	virtual void ScriptExists() override; // vtable[19]

	void AddSearchPath();
	void CLuaShared();
	void CreateCache();
	void LoadFile_FromFile();
	void LoadFile_FromDataTable();
};
