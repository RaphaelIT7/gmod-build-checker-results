// Generated header

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
	virtual void _ZN14ConCommandBase10CreateBaseEPKcS1_i(); // vtable[9]
	virtual void Init(); // vtable[10]

	void _GLOBAL__sub_I_s_pConCommandBases(); // size[135]
	ConCommandBase(); // size[46]
	ConCommandBase(char *param_1, char *param_2, int param_3); // size[18]
	void Shutdown(); // size[33]
	void GetNext(); // size[11]
	void GetNext(); // size[11]
	void CopyString(char *param_1); // size[85]
};
