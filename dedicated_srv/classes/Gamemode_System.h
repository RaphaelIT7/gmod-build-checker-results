// Generated header

class Gamemode_System : public IGamemodeSystem
{
public:
	virtual void OnJoinServer(); // vtable[0]
	virtual void OnLeaveServer(); // vtable[1]
	virtual void Refresh(); // vtable[2]
	virtual void Clear(); // vtable[3]
	virtual void Active(); // vtable[4]
	virtual void FindByName(); // vtable[5]
	virtual void SetActive(); // vtable[6]
	virtual void GetList(); // vtable[7]
	virtual void IsServerBlacklisted(); // vtable[8]
	virtual void OnServerDownloadsMounted() override; // vtable[9]

	void ~System();
	void ChangeGamemode();
	void Mount();
	void AddGamemode();
	void System();
};
