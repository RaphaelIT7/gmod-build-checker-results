// Generated header

class CLog : public IGameEventListener2
{
public:
	virtual ~CLog() override; // vtable[0]
	virtual ~CLog() override; // vtable[1]
	virtual void FireGameEvent() override; // vtable[2]

	void Reset(); // size[0]
	void Init(); // size[0]
	void SetLoggingState(); // size[0]
	void RunFrame(); // size[0]
	void DelLogAddress(); // size[0]
	void ListLogAddress(); // size[0]
	void UsingLogAddress(); // size[0]
	void DelAllLogAddress(); // size[0]
	void IsActive(); // size[0]
	void Flush(); // size[0]
	void Print(); // size[0]
	void Printf(); // size[0]
	void PrintServerVars(); // size[0]
	void Close(); // size[0]
	void Shutdown(); // size[0]
	void Open(); // size[0]
	CLog(); // size[0]
	void AddLogAddress(); // size[0]
};
