// Generated header
// Estimated minimum size: 0x4 (4) bytes

class CSys : public ISys
{
public:
	virtual ~CSys() override; // vtable[0]
	virtual ~CSys() override; // vtable[1]
	virtual void LoadModules(CDedicatedAppSystemGroup *param_1); // vtable[2]
	virtual void Sleep(int param_1); // vtable[3]
	virtual void GetExecutableName(char *param_1); // vtable[4]
	virtual void ErrorMessage(int param_1, char *param_2); // vtable[5]
	virtual void WriteStatusText(char *param_1); // vtable[6]
	virtual void UpdateStatus(int param_1); // vtable[7]
	virtual void LoadLibrary(char *param_1); // vtable[8]
	virtual void FreeLibrary(void *param_1); // vtable[9]
	virtual void CreateConsoleWindow(); // vtable[10]
	virtual void DestroyConsoleWindow(); // vtable[11]
	virtual void ConsoleOutput(char *param_1); // vtable[12]
	virtual void ConsoleInput(int param_1, char *param_2, int param_3); // vtable[13]
	virtual void Printf(char const *null, ... null); // vtable[14]
	virtual void caseD_1(); // vtable[16]
	virtual void caseD_3(); // vtable[18]
	virtual void caseD_4(); // vtable[19]
	virtual void caseD_5(); // vtable[20]
	virtual void caseD_7(); // vtable[22]
	virtual void caseD_6(); // vtable[23]
	virtual void caseD_a(); // vtable[25]
	virtual void caseD_1c(); // vtable[43]
	virtual void caseD_1d(); // vtable[44]
	virtual void caseD_0(); // vtable[45]
	virtual void caseD_1f(); // vtable[46]

	void dlsym(void *param_1, char *param_2); // size[5]
};
