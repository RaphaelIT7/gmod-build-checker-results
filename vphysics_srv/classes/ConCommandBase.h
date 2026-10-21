// Generated header
// Estimated minimum size: 0x8 (8) bytes

class ConCommandBase
{
public:
	virtual ~ConCommandBase(); // vtable[0]
	virtual ~ConCommandBase(); // vtable[1]
	virtual void IsCommand(); // vtable[2]
	virtual void IsFlagSet(int param_1); // vtable[3]
	virtual void AddFlags(int param_1); // vtable[4]
	virtual void GetName(); // vtable[5]
	virtual void GetHelpText(); // vtable[6]
	virtual void IsRegistered(); // vtable[7]
	virtual void GetDLLIdentifier(); // vtable[8]
	virtual void CreateBase(char *param_1, char *param_2, int param_3); // vtable[9]
	virtual void Init(); // vtable[10]

	ConCommandBase(); // size[38]
	ConCommandBase(char *param_1, char *param_2, int param_3); // size[80]
	void Shutdown(); // size[25]
	void GetNext(); // size[5]
	void GetNext(); // size[5]
	void CopyString(char *param_1); // size[104]
};
