// Generated header

class CModAppSystemGroup : public CAppSystemGroup
{
public:
	virtual void Create(); // vtable[0]
	virtual void PreInit(); // vtable[1]
	virtual void Main(); // vtable[2]
	virtual void PostShutdown(); // vtable[3]
	virtual void Destroy() override; // vtable[4]

	void AddLegacySystems(); // size[61]
	void ModuleAlreadyInList(CUtlVector *param_1, char *param_2, char *param_3); // size[143]
};
