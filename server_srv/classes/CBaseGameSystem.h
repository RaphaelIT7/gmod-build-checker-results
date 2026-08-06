// Generated header

class CBaseGameSystem : public IGameSystem
{
public:
	virtual void Name(); // vtable[0]
	virtual void Init(); // vtable[1]
	virtual void PostInit(); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void LevelInitPreEntity(); // vtable[4]
	virtual void LevelInitPostEntity(); // vtable[5]
	virtual void LevelShutdownPreClearSteamAPIContext() override; // vtable[6]
	virtual void LevelShutdownPreEntity(); // vtable[7]
	virtual void LevelShutdownPostEntity(); // vtable[8]
	virtual void OnSave(); // vtable[9]
	virtual void OnRestore(); // vtable[10]
	virtual void SafeRemoveIfDesired(); // vtable[11]
	virtual void IsPerFrame() override; // vtable[12]
	virtual ~CBaseGameSystem() override; // vtable[13]
	virtual ~CBaseGameSystem() override; // vtable[14]
	virtual void FrameUpdatePreEntityThink(); // vtable[15]
	virtual void FrameUpdatePostEntityThink(); // vtable[16]
	virtual void PreClientUpdate(); // vtable[17]
};
