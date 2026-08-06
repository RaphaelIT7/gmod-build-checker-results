// Generated header

class CLuaGameEventListener : public CAutoGameSystemPerFrame, public CGameEventListener
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CLuaGameEventListener() override; // vtable[13]
	virtual ~CLuaGameEventListener() override; // vtable[14]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[19]

	~CLuaGameEventListener(); // size[10]
	~CLuaGameEventListener(); // size[7]
	void FireGameEvent(IGameEvent *param_1); // size[10]
};
