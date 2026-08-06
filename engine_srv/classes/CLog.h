// Generated header

class CLog : public IGameEventListener2
{
public:
	virtual ~CLog() override; // vtable[0]
	virtual ~CLog() override; // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1) override; // vtable[2]

	void Reset(); // size[107]
	void Init(); // size[200]
	void SetLoggingState(boolparam_1); // size[14]
	void RunFrame(); // size[77]
	void DelLogAddress(netadr_sparam_1); // size[163]
	void ListLogAddress(); // size[153]
	void UsingLogAddress(); // size[16]
	void DelAllLogAddress(); // size[59]
	void IsActive(); // size[12]
	void Flush(); // size[40]
	void Print(char *param_1); // size[642]
	void Printf(char *param_1); // size[78]
	void PrintServerVars(); // size[275]
	void Close(); // size[154]
	void Shutdown(); // size[49]
	void Open(); // size[860]
	CLog(); // size[74]
	void AddLogAddress(netadr_sparam_1); // size[138]
};
