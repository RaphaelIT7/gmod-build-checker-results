// Generated header

class CLuaConVars : public ILuaConVars
{
public:
	virtual ~CLuaConVars() override; // vtable[0]
	virtual ~CLuaConVars() override; // vtable[1]
	virtual void Init(); // vtable[2]
	virtual void CreateConVar(char *param_1, char *param_2, char *param_3, int param_4); // vtable[3]
	virtual void CreateConCommand(char *param_1, char *param_2, int param_3, _func_void_CCommand_ptr *param_4, int_(*)(char_const*,char *param_5); // vtable[4]
	virtual void DestroyManaged(); // vtable[5]
	virtual void Cache(char *param_1, char *param_2); // vtable[6]
	virtual void ClearCache(); // vtable[7]
	virtual void SaveManaged() override; // vtable[8]

	void _GLOBAL__sub_I_Init(); // size[237]
};
