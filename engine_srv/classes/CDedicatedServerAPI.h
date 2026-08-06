// Generated header

class CDedicatedServerAPI : public CTier3AppSystem
{
public:
	virtual void Connect(); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void ModInit(); // vtable[5]
	virtual void ModShutdown(); // vtable[6]
	virtual void RunFrame(); // vtable[7]
	virtual void AddConsoleText(); // vtable[8]
	virtual void UpdateStatus(); // vtable[9]
	virtual void UpdateHostname(); // vtable[10]

	void PreMinidumpCallbackImpl(); // size[0]
	void PreMinidumpCallback(); // size[0]
};
