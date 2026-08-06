// Generated header

class CLuaGameCallback : public ILuaCallback
{
public:
	virtual void CreateLuaObject(); // vtable[0]
	virtual void DestroyLuaObject(); // vtable[1]
	virtual void ErrorPrint(); // vtable[2]
	virtual void Msg(); // vtable[3]
	virtual void MsgColour(); // vtable[4]
	virtual void LuaError() override; // vtable[5]
	virtual void InterfaceCreated() override; // vtable[6]

	CLuaGameCallback(); // size[0]
};
