// Generated header

class CLog : public IGameEventListener2
{
public:
	virtual void ~CLog() override; // vtable[0]
	virtual void ~CLog() override; // vtable[1]
	virtual void FireGameEvent() override; // vtable[2]

	void Reset();
	void Init();
	void SetLoggingState();
	void RunFrame();
	void DelLogAddress();
	void ListLogAddress();
	void UsingLogAddress();
	void DelAllLogAddress();
	void IsActive();
	void Flush();
	void Print();
	void Printf();
	void PrintServerVars();
	void Close();
	void Shutdown();
	void Open();
	void CLog();
	void AddLogAddress();
};
