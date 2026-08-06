// Generated header

class CAI_NetworkManager : public CPointEntity
{
public:
	virtual ~CAI_NetworkManager() override; // vtable[0]
	virtual ~CAI_NetworkManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]

	void GetBaseMap(); // size[0]
	void RebuildNetworkGraph(); // size[0]
	void MarkDontSaveGraph(); // size[0]
	void DeleteAllAINetworks(); // size[0]
	void IsAIFileCurrent(); // size[0]
	void FixupHints(); // size[0]
	CAI_NetworkManager(); // size[0]
	void LoadNetworkGraph(); // size[0]
	void StartRebuild(); // size[0]
	void RebuildThink(); // size[0]
	void BuildNetworkGraph(); // size[0]
	void DelayedInit(); // size[0]
	void InitializeAINetworks(); // size[0]
};
