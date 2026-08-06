// Generated header

class CLog : public IGameEventListener2
{
public:
	virtual ~CLog() override; // vtable[0]
	virtual ~CLog() override; // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1) override; // vtable[2]

	void Reset(); // size[107]
	void Init(); // size[200]
	void SetLoggingState(bool param_1); // size[14]
	void DelLogAddress(netadr_s param_1); // size[163]
	void ListLogAddress(); // size[86]
	void UsingLogAddress(); // size[16]
	void DelAllLogAddress(); // size[46]
	void IsActive(); // size[12]
	void Flush(); // size[40]
	void CleanupStaleLogs(); // size[397]
	void RunFrame(); // size[154]
	void Print(char *param_1); // size[637]
	void Printf(char *param_1); // size[78]
	void PrintServerVars(); // size[275]
	void Close(); // size[154]
	void Shutdown(); // size[49]
	void Open(); // size[856]
	CLog(); // size[83]
	void AddLogAddress(netadr_s param_1); // size[138]
};
