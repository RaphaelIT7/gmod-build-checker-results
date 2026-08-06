// Generated header

class CEventLog : public CGameEventListener, public CBaseGameSystem
{
public:
	virtual ~CEventLog() override; // vtable[0]
	virtual ~CEventLog() override; // vtable[1]
	virtual void FireGameEvent() override; // vtable[2]
	virtual void Init() override; // vtable[3]
	virtual void Shutdown() override; // vtable[4]
	virtual void PrintEvent() override; // vtable[5]
	virtual void PrintGameEvent() override; // vtable[6]
	virtual void PrintPlayerEvent() override; // vtable[7]
	virtual void PrintTeamEvent() override; // vtable[8]
	virtual void PrintOtherEvent() override; // vtable[9]

	_GLOBAL__sub_I_CEventLog(); // size[0]
	void Init(); // size[0]
	void Shutdown(); // size[0]
	~CEventLog(); // size[0]
	~CEventLog(); // size[0]
	CEventLog(); // size[0]
};
