// Generated header

class CTraceFilterLua : public CTraceFilterSimpleList
{
public:
	virtual void ShouldHitEntity(IHandleEntity *param_1, int param_2) override; // vtable[0]
	virtual void GetTraceType() override; // vtable[1]
	virtual void SetIgnoreWorld(bool param_1); // vtable[5]
	virtual void SetIsWhitelist(bool param_1); // vtable[6]
	virtual void AddEntityClassToIgnore(char *param_1); // vtable[7]
	virtual void SetFunction(ILuaObject *param_1); // vtable[8]

	~CTraceFilterLua(); // size[63]
};
