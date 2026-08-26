// Generated header

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
	virtual void FreeLibrary(long param_1); // vtable[9]
	virtual void CreateConsoleWindow(); // vtable[10]
	virtual void DestroyConsoleWindow(); // vtable[11]
	virtual void ConsoleOutput(char *param_1); // vtable[12]
	virtual void ConsoleInput(int param_1, char *param_2, int param_3); // vtable[13]
	virtual void Printf(char *param_1) override; // vtable[14]

	void dlsym(long param_1, char *param_2); // size[5]
};
