// Generated header

class CGameEventManagerOld : public IGameEventManager
{
public:
	virtual ~CGameEventManagerOld() override; // vtable[0]
	virtual ~CGameEventManagerOld() override; // vtable[1]
	virtual void LoadEventsFromFile(); // vtable[2]
	virtual void Reset(); // vtable[3]
	virtual void GetEvent(); // vtable[4]
	virtual void AddListener(); // vtable[5]
	virtual void AddListener(); // vtable[6]
	virtual void RemoveListener(); // vtable[7]
	virtual void FireEvent(); // vtable[8]
	virtual void FireEventServerOnly(); // vtable[9]
	virtual void FireEventClientOnly(); // vtable[10]
	virtual void SerializeKeyValues(); // vtable[11]
	virtual void UnserializeKeyValue() override; // vtable[12]

	void _GLOBAL__sub_I_AddListener(); // size[0]
	void FireEventIntern(); // size[0]
};
