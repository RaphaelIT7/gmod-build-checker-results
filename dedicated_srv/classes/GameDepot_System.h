// Generated header

class GameDepot_System : public IGameDepotSystem
{
public:
	virtual void Refresh(); // vtable[0]
	virtual void Clear(); // vtable[1]
	virtual void Save(); // vtable[2]
	virtual void SetMount(uint param_1, bool param_2); // vtable[3]
	virtual void MarkGameAsMounted(string *param_1); // vtable[4]
	virtual void GetList(); // vtable[5]
	virtual void GetRefreshCount() override; // vtable[6]

	System(); // size[23]
	void FindGame(string *param_1); // size[93]
	void MountAsSteampipe(Information *param_1, bool param_2); // size[10]
	void Mount(Information *param_1, bool param_2); // size[48]
	void MountAsFallback(Information *param_1); // size[79]
	void Load(); // size[317]
	void Setup(); // size[87]
};
