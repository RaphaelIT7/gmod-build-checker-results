// Generated header

class CGarrysMod : public IGarrysMod, public CGameEventListener
{
public:
	virtual void MenuThink() override; // vtable[0]
	virtual void RunConsoleCommand() override; // vtable[1]
	virtual void StartVideoScale() override; // vtable[2]
	virtual void EndVideoScale() override; // vtable[3]
	virtual void FireGameEvent(); // vtable[4]
	virtual ~CGarrysMod(); // vtable[5]
	virtual ~CGarrysMod(); // vtable[6]

	void OnP2PSessionConnectFail(); // size[0]
	void FireGameEvent(); // size[0]
	void OnP2PSessionRequest(); // size[0]
	CGarrysMod(); // size[0]
	void InitializeMod(); // size[0]
	void Shutdown(); // size[0]
	void LevelInit(); // size[0]
	void LevelShutdown(); // size[0]
	void GetGameDescription(); // size[0]
	void PostInitialize(); // size[0]
	void ShouldCollide(); // size[0]
	void EntityCreated(); // size[0]
	void EntityRemoved(); // size[0]
	void Think(); // size[0]
	~CGarrysMod(); // size[0]
	~CGarrysMod(); // size[0]
};
