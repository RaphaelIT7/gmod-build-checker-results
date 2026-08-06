// Generated header

class CDedicatedServerAPI : public CTier3AppSystem
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(char *param_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void ModInit(ModInfo_t *param_1); // vtable[5]
	virtual void ModShutdown(); // vtable[6]
	virtual void RunFrame(); // vtable[7]
	virtual void AddConsoleText(char *param_1); // vtable[8]
	virtual void UpdateStatus(float *param_1, int *param_2, int *param_3, char *param_4, int param_5); // vtable[9]
	virtual void UpdateHostname(char *param_1, int param_2); // vtable[10]

	void PreMinidumpCallbackImpl(); // size[510]
	void PreMinidumpCallback(void *param_1); // size[18]
};
