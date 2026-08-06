// Generated header

class CGarrysMod : public IGarrysMod, public CGameEventListener
{
public:
	virtual void MenuThink() override; // vtable[0]
	virtual void RunConsoleCommand() override; // vtable[1]
	virtual void StartVideoScale() override; // vtable[2]
	virtual void EndVideoScale() override; // vtable[3]
	virtual void FireGameEvent(); // vtable[4]
	virtual void ~CGarrysMod(); // vtable[5]
	virtual void ~CGarrysMod(); // vtable[6]

	void OnP2PSessionConnectFail();
	void FireGameEvent();
	void OnP2PSessionRequest();
	void CGarrysMod();
	void InitializeMod();
	void Shutdown();
	void LevelInit();
	void LevelShutdown();
	void GetGameDescription();
	void PostInitialize();
	void ShouldCollide();
	void EntityCreated();
	void EntityRemoved();
	void Think();
	void ~CGarrysMod();
	void ~CGarrysMod();
};
