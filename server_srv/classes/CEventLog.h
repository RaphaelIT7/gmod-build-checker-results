// Generated header
// Estimated minimum size: 0xC (12) bytes

class CEventLog : public CGameEventListener, public CBaseGameSystem
{
public:
	virtual ~CEventLog() override; // vtable[0]
	virtual ~CEventLog() override; // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void PrintEvent(IGameEvent *param_1); // vtable[5]
	virtual void PrintGameEvent(IGameEvent *param_1); // vtable[6]
	virtual void PrintPlayerEvent(IGameEvent *param_1); // vtable[7]
	virtual void PrintTeamEvent(IGameEvent *param_1); // vtable[8]
	virtual void PrintOtherEvent(IGameEvent *param_1); // vtable[9]
	virtual void Init() override; // vtable[1]
	virtual void Shutdown() override; // vtable[3]
	virtual ~CEventLog() override; // vtable[13]
	virtual ~CEventLog() override; // vtable[14]

	_GLOBAL__sub_I_CEventLog(); // size[113]
	CEventLog(); // size[25]
};
