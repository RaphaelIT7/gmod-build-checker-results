// Generated header

class CRegistry : public IRegistry
{
public:
	virtual ~CRegistry() override; // vtable[0]
	virtual ~CRegistry() override; // vtable[1]
	virtual void Init(char *param_1); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void ReadInt(char *param_1, intparam_2); // vtable[4]
	virtual void WriteInt(char *param_1, intparam_2); // vtable[5]
	virtual void ReadString(char *param_1, char *param_2); // vtable[6]
	virtual void WriteString(char *param_1, char *param_2); // vtable[7]
	virtual void ReadInt(char *param_1, char *param_2, intparam_3); // vtable[8]
	virtual void WriteInt(char *param_1, char *param_2, intparam_3); // vtable[9]
	virtual void ReadString(char *param_1, char *param_2, char *param_3); // vtable[10]
	virtual void WriteString(char *param_1, char *param_2, char *param_3) override; // vtable[11]
	virtual void DirectInit(char *param_1); // vtable[12]

	CRegistry(); // size[18]
};
