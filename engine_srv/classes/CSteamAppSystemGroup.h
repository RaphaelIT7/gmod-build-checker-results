// Generated header

class CSteamAppSystemGroup : public CAppSystemGroup
{
public:
	virtual void LoadModuleDLL(char *param_1) override; // vtable[7]

	void Setup(IFileSystem *param_1, CAppSystemGroup *param_2); // size[3]
	void GetGameInfoPath(); // size[11]
	void SetupSearchPaths(char *param_1, boolparam_2, boolparam_3); // size[6]
	CSteamAppSystemGroup(IFileSystem *param_1, CAppSystemGroup *param_2); // size[48]
};
