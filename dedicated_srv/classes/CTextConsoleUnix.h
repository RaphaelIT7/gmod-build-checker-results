// Generated header
// Estimated minimum size: 0xC (12) bytes, no debug info available

class CTextConsoleUnix : public CTextConsole
{
public:
	virtual ~CTextConsoleUnix() override; // vtable[0]
	virtual ~CTextConsoleUnix() override; // vtable[1]
	virtual void Init() override; // vtable[2]
	virtual void ShutDown(); // vtable[3]
	virtual void Print(char *param_1); // vtable[4]
	virtual void SetTitle(char *param_1); // vtable[5]
	virtual void SetStatusLine(char *param_1); // vtable[6]
	virtual void UpdateStatus(); // vtable[7]
	virtual void GetLine(int param_1, char *param_2, int param_3); // vtable[8]
	virtual void GetWidth(); // vtable[9]
	virtual void SetVisible(bool param_1); // vtable[10]
	virtual void IsVisible(); // vtable[11]
};
