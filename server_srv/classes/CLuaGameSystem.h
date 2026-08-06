// Generated header

class CLuaGameSystem : public CAutoGameSystemPerFrame, public CGameEventListener
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual void LevelShutdownPreEntity() override; // vtable[7]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CLuaGameSystem() override; // vtable[13]
	virtual ~CLuaGameSystem() override; // vtable[14]
	virtual void FrameUpdatePreEntityThink() override; // vtable[15]
	virtual void FireGameEvent(); // vtable[19]

	void FireGameEvent(); // size[0]
	~CLuaGameSystem(); // size[0]
	~CLuaGameSystem(); // size[0]
};
