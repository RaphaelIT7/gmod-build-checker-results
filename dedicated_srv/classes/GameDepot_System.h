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

	System(); // size[0]
	void FindGame(); // size[0]
	void MountAsSteampipe(); // size[0]
	void Mount(); // size[0]
	void MountAsFallback(); // size[0]
	void Load(); // size[0]
	void Setup(); // size[0]
};
