// Generated header

class CLuaGameCallback : public ILuaCallback
{
public:
	virtual void CreateLuaObject(); // vtable[0]
	virtual void DestroyLuaObject(ILuaObject *param_1); // vtable[1]
	virtual void ErrorPrint(char *param_1, bool param_2); // vtable[2]
	virtual void Msg(char *param_1, bool param_2); // vtable[3]
	virtual void MsgColour(char *param_1, Color *param_2); // vtable[4]
	virtual void LuaError(CLuaError *param_1) override; // vtable[5]
	virtual void InterfaceCreated(ILuaInterface *param_1) override; // vtable[6]

	CLuaGameCallback(); // size[18]
};
