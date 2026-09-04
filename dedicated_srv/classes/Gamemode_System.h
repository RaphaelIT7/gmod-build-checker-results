// Generated header

class Gamemode_System : public IGamemodeSystem
{
public:
	virtual void OnJoinServer(string *param_1); // vtable[0]
	virtual void OnLeaveServer(); // vtable[1]
	virtual void Refresh(); // vtable[2]
	virtual void Clear(); // vtable[3]
	virtual void Active(); // vtable[4]
	virtual void FindByName(string *param_1); // vtable[5]
	virtual void SetActive(string *param_1); // vtable[6]
	virtual void GetList(); // vtable[7]
	virtual void IsServerBlacklisted(char *param_1, char *param_2, char *param_3, char *param_4, char *param_5); // vtable[8]
	virtual void OnServerDownloadsMounted() override; // vtable[9]

	~System(); // size[15]
	void ChangeGamemode(string *param_1, bool param_2); // size[178]
	void Mount(string *param_1); // size[1382]
	void AddGamemode(string param_1); // size[1467]
	System(); // size[137]
};
