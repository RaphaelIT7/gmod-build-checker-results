// Generated header

class CCommandLine : public ICommandLine
{
public:
	virtual void CreateCmdLine(); // vtable[0]
	virtual void CreateCmdLine(); // vtable[1]
	virtual void GetCmdLine(); // vtable[2]
	virtual void CheckParm(); // vtable[3]
	virtual void RemoveParm(); // vtable[4]
	virtual void AppendParm(); // vtable[5]
	virtual void ParmValue(); // vtable[6]
	virtual void ParmValue(); // vtable[7]
	virtual void ParmValue(); // vtable[8]
	virtual void ParmCount(); // vtable[9]
	virtual void FindParm(); // vtable[10]
	virtual void GetParm(); // vtable[11]
	virtual void SetParm() override; // vtable[12]
	virtual void ~CCommandLine(); // vtable[13]
	virtual void ~CCommandLine(); // vtable[14]

	void CCommandLine();
	void LoadParametersFromFile();
	void AddArgument();
	void CleanUpParms();
	void ParseCommandLine();
};
