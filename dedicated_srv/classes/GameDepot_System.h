// Generated header

class GameDepot_System : public IGameDepotSystem
{
public:
	virtual void Refresh(); // vtable[0]
	virtual void Clear(); // vtable[1]
	virtual void Save(); // vtable[2]
	virtual void SetMount(); // vtable[3]
	virtual void MarkGameAsMounted(); // vtable[4]
	virtual void GetList(); // vtable[5]
	virtual void GetRefreshCount() override; // vtable[6]

	void System();
	void FindGame();
	void MountAsSteampipe();
	void Mount();
	void MountAsFallback();
	void Load();
	void Setup();
};
