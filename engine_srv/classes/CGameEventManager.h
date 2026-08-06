// Generated header

class CGameEventManager : public IGameEventManager2
{
public:
	virtual void ~CGameEventManager() override; // vtable[0]
	virtual void ~CGameEventManager() override; // vtable[1]
	virtual void LoadEventsFromFile(); // vtable[2]
	virtual void Reset(); // vtable[3]
	virtual void AddListener(); // vtable[4]
	virtual void FindListener(); // vtable[5]
	virtual void RemoveListener(); // vtable[6]
	virtual void CreateEvent(); // vtable[7]
	virtual void FireEvent(); // vtable[8]
	virtual void FireEventClientSide(); // vtable[9]
	virtual void DuplicateEvent(); // vtable[10]
	virtual void FreeEvent(); // vtable[11]
	virtual void SerializeEvent(); // vtable[12]
	virtual void UnserializeEvent() override; // vtable[13]

	void Init();
	void Shutdown();
	void HasClientListenersChanged();
	void WriteEventList();
	void WriteListenEventList();
	void CreateEvent();
	void FindEventListener();
	void ReloadEventDefinitions();
	void GetEventDescriptor();
	void ConPrintEvent();
	void FireEventIntern();
	void GetEventDescriptor();
	void GetEventDescriptor();
	void ParseEventList();
	void RemoveListenerOld();
	void CGameEventManager();
	void AddListener();
	void AddListener();
	void AddListenerAll();
	void RegisterEvent();
};
