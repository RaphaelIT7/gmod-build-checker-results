// Generated header

class CEventLog : public CGameEventListener, public CBaseGameSystem
{
public:
	virtual ~CEventLog() override; // vtable[0]
	virtual ~CEventLog() override; // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1) override; // vtable[2]
	virtual void Init() override; // vtable[3]
	virtual void Shutdown() override; // vtable[4]
	virtual void PrintEvent(IGameEvent *param_1) override; // vtable[5]
	virtual void PrintGameEvent(IGameEvent *param_1) override; // vtable[6]
	virtual void PrintPlayerEvent(IGameEvent *param_1) override; // vtable[7]
	virtual void PrintTeamEvent(IGameEvent *param_1) override; // vtable[8]
	virtual void PrintOtherEvent(IGameEvent *param_1) override; // vtable[9]

	_GLOBAL__sub_I_CEventLog(); // size[113]
	void Init(); // size[10]
	void Shutdown(); // size[7]
	~CEventLog(); // size[7]
	~CEventLog(); // size[7]
	CEventLog(); // size[25]
};
