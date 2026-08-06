// Generated header

class CCommandLine : public ICommandLine
{
public:
	virtual void CreateCmdLine(char *param_1); // vtable[0]
	virtual void CreateCmdLine(int param_1, char * *param_2); // vtable[1]
	virtual void GetCmdLine(); // vtable[2]
	virtual void CheckParm(char *param_1, char * *param_2); // vtable[3]
	virtual void RemoveParm(char *param_1); // vtable[4]
	virtual void AppendParm(char *param_1, char *param_2); // vtable[5]
	virtual void ParmValue(char *param_1, char *param_2); // vtable[6]
	virtual void ParmValue(char *param_1, int param_2); // vtable[7]
	virtual void ParmValue(char *param_1, float param_2); // vtable[8]
	virtual void ParmCount(); // vtable[9]
	virtual void FindParm(char *param_1); // vtable[10]
	virtual void GetParm(int param_1); // vtable[11]
	virtual void SetParm(int param_1, char *param_2) override; // vtable[12]
	virtual ~CCommandLine(); // vtable[13]
	virtual ~CCommandLine(); // vtable[14]

	CCommandLine(); // size[28]
	void LoadParametersFromFile(char * *param_1, char * *param_2, int param_3, bool param_4); // size[345]
	void AddArgument(char *param_1, char *param_2); // size[123]
	void CleanUpParms(); // size[70]
	void ParseCommandLine(); // size[249]
};
