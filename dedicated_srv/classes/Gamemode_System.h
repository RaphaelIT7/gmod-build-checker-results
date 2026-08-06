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

	~System(); // size[0]
	void ChangeGamemode(); // size[0]
	void Mount(); // size[0]
	void AddGamemode(); // size[0]
	System(); // size[0]
};
