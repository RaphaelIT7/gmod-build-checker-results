// Generated header
// Estimated minimum size: 0x2020 (8224) bytes

class CTextConsole
{
public:
	virtual ~CTextConsole(); // vtable[0]
	virtual ~CTextConsole(); // vtable[1]
	virtual void Init(); // vtable[2]
	virtual void ShutDown(); // vtable[3]
	virtual void Print(char *param_1); // vtable[4]
	virtual void SetTitle(char *param_1); // vtable[5]
	virtual void SetStatusLine(char *param_1); // vtable[6]
	virtual void UpdateStatus(); // vtable[7]

	void _GLOBAL__sub_I_Init(); // size[48]
	void ReceiveNewline(); // size[91]
	void ReceiveBackspace(); // size[245]
	void ReceiveStandardChar(char param_1); // size[12]
	void ReceiveUpArrow(); // size[22]
	void ReceiveDownArrow(); // size[335]
	void ReceiveLeftArrow(); // size[4]
	void ReceiveRightArrow(); // size[61]
	void ReceiveHome(); // size[59]
	void ReceiveEnd(); // size[77]
	void ReceiveTab(); // size[48]
	void SetVisible(bool param_1); // size[17]
	void IsVisible(); // size[15]
};
