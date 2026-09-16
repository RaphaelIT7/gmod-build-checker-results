// Generated header
// Estimated minimum size: 0xC (12) bytes, no debug info available

class CHL2EventLog : public CEventLog
{
public:
	virtual ~CHL2EventLog() override; // vtable[0]
	virtual ~CHL2EventLog() override; // vtable[1]
	virtual void PrintEvent(IGameEvent *param_1) override; // vtable[5]
	virtual void Name(); // vtable[10]
	virtual void Name(); // vtable[0]
	virtual void Init(); // vtable[1]
	virtual void PostInit(); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void LevelInitPreEntity(); // vtable[4]
	virtual void LevelInitPostEntity(); // vtable[5]
	virtual void LevelShutdownPreClearSteamAPIContext(); // vtable[6]
	virtual void LevelShutdownPreEntity(); // vtable[7]
	virtual void LevelShutdownPostEntity(); // vtable[8]
	virtual void OnSave(); // vtable[9]
	virtual void OnRestore(); // vtable[10]
	virtual void SafeRemoveIfDesired(); // vtable[11]
	virtual void IsPerFrame(); // vtable[12]
	virtual ~CHL2EventLog(); // vtable[13]
	virtual ~CHL2EventLog(); // vtable[14]
	virtual void FrameUpdatePreEntityThink(); // vtable[15]
	virtual void FrameUpdatePostEntityThink(); // vtable[16]
	virtual void PreClientUpdate(); // vtable[17]
};
