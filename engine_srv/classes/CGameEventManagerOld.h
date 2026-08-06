// Generated header

class CGameEventManagerOld : public IGameEventManager
{
public:
	virtual ~CGameEventManagerOld() override; // vtable[0]
	virtual ~CGameEventManagerOld() override; // vtable[1]
	virtual void LoadEventsFromFile(char *param_1); // vtable[2]
	virtual void Reset(); // vtable[3]
	virtual void GetEvent(char *param_1); // vtable[4]
	virtual void AddListener(IGameEventListener *param_1, char *param_2, boolparam_3); // vtable[5]
	virtual void AddListener(IGameEventListener *param_1, boolparam_2); // vtable[6]
	virtual void RemoveListener(IGameEventListener *param_1); // vtable[7]
	virtual void FireEvent(KeyValues *param_1); // vtable[8]
	virtual void FireEventServerOnly(KeyValues *param_1); // vtable[9]
	virtual void FireEventClientOnly(KeyValues *param_1); // vtable[10]
	virtual void SerializeKeyValues(KeyValues *param_1, bf_write *param_2, CGameEvent *param_3); // vtable[11]
	virtual void UnserializeKeyValue(bf_read *param_1) override; // vtable[12]

	void _GLOBAL__sub_I_AddListener(); // size[107]
	void FireEventIntern(KeyValues *param_1, boolparam_2, boolparam_3); // size[149]
};
