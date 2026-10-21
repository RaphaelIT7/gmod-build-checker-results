// Generated header
// Estimated minimum size: 0x2024 (8228) bytes

class CTextConsoleUnix : public CTextConsole
{
public:
	virtual ~CTextConsoleUnix() override; // vtable[0]
	virtual ~CTextConsoleUnix() override; // vtable[1]
	virtual void Init() override; // vtable[2]
	virtual void ShutDown() override; // vtable[3]
	virtual void PrintRaw(char *param_1, int param_2); // vtable[8]
	virtual void GetLine(); // vtable[9]
	virtual void GetWidth(); // vtable[10]
	virtual void SetVisible(bool param_1); // vtable[11]
	virtual void IsVisible(); // vtable[12]

	void _GLOBAL__sub_I_Init(); // size[48]
	void kbhit(); // size[6]
};
