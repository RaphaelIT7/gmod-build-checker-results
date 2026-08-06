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
	virtual ~CCommandLine(); // vtable[13]
	virtual ~CCommandLine(); // vtable[14]

	CCommandLine(); // size[0]
	void LoadParametersFromFile(); // size[0]
	void AddArgument(); // size[0]
	void CleanUpParms(); // size[0]
	void ParseCommandLine(); // size[0]
};
