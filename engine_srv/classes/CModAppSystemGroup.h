// Generated header
// Estimated minimum size: 0x54 (84) bytes

class CModAppSystemGroup : public CAppSystemGroup
{
public:
	virtual void Create(); // vtable[0]
	virtual void PreInit(); // vtable[1]
	virtual void Main(); // vtable[2]
	virtual void PostShutdown(); // vtable[3]
	virtual void _ZN18CModAppSystemGroup7DestroyEv(); // vtable[4]
	virtual void Startup(); // vtable[5]
	virtual void Shutdown(); // vtable[6]
	virtual void LoadModuleDLL(char *param_1); // vtable[7]

	void AddLegacySystems(); // size[61]
	void ModuleAlreadyInList(CUtlVector *param_1, char *param_2, char *param_3); // size[143]
};
