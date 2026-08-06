// Generated header

class NextBotManager
{
public:
	virtual void ~NextBotManager(); // vtable[0]
	virtual void ~NextBotManager(); // vtable[1]
	virtual void Update(); // vtable[2]
	virtual void OnMapLoaded(); // vtable[3]
	virtual void OnRoundRestart(); // vtable[4]
	virtual void OnBeginChangeLevel(); // vtable[5]
	virtual void OnKilled(); // vtable[6]
	virtual void OnSound(); // vtable[7]
	virtual void OnSpokeConcept(); // vtable[8]
	virtual void OnWeaponFired(); // vtable[9]

	void Reset();
	void ShouldUpdate();
	void NotifyEndUpdate();
	void DebugFilterClear();
	void IsDebugFilterMatch();
	void NotifyBeginUpdate();
	void UnRegister();
	void DebugFilterRemove();
	void DebugFilterRemove();
	void NextBotManager();
	void Register();
	void DebugFilterAdd();
	void DebugFilterAdd();
	void CollectAllBots();
	void GetBotUnderCrosshair();
};
