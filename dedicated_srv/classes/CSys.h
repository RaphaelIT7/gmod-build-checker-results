// Generated header

class CSys : public ISys
{
public:
	virtual void ~CSys() override; // vtable[0]
	virtual void ~CSys() override; // vtable[1]
	virtual void LoadModules(); // vtable[2]
	virtual void Sleep(); // vtable[3]
	virtual void GetExecutableName(); // vtable[4]
	virtual void ErrorMessage(); // vtable[5]
	virtual void WriteStatusText(); // vtable[6]
	virtual void UpdateStatus(); // vtable[7]
	virtual void LoadLibrary(); // vtable[8]
	virtual void FreeLibrary(); // vtable[9]
	virtual void CreateConsoleWindow(); // vtable[10]
	virtual void DestroyConsoleWindow(); // vtable[11]
	virtual void ConsoleOutput(); // vtable[12]
	virtual void ConsoleInput(); // vtable[13]
	virtual void Printf() override; // vtable[14]

	void dlsym();
};
