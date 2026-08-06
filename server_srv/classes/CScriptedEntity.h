// Generated header

class CScriptedEntity
{
public:
	virtual void NetworkStateChanged(); // vtable[0]
	virtual void NetworkStateChanged(void *param_1); // vtable[1]

	void GetBaseMap(); // size[7]
	~CScriptedEntity(); // size[14]
	void Init(CBaseEntity *param_1, int param_2); // size[20]
	void SetModuleName(char *param_1); // size[37]
	void SetSelfName(char *param_1); // size[39]
	void SetScriptName(char *param_1); // size[136]
	CScriptedEntity(); // size[124]
	void Ready(); // size[58]
	void StartFunction(char *param_1); // size[208]
	void StartFunction(int param_1); // size[203]
	void Call(int param_1, int param_2); // size[70]
	void CallFunction(char *param_1, bool param_2); // size[195]
	void CallFunction(int param_1, bool param_2); // size[235]
	void InitializeDataTables(); // size[137]
	void StartLua(); // size[690]
	void GetScriptName(); // size[11]
	void OnRestore(); // size[9]
};
