// Generated header

class CAI_NetworkManager : public CPointEntity
{
public:
	virtual ~CAI_NetworkManager() override; // vtable[0]
	virtual ~CAI_NetworkManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]

	void GetBaseMap(); // size[10]
	void RebuildNetworkGraph(); // size[140]
	void MarkDontSaveGraph(); // size[15]
	void DeleteAllAINetworks(); // size[29]
	void IsAIFileCurrent(char *param_1); // size[126]
	void FixupHints(); // size[58]
	CAI_NetworkManager(); // size[28]
	void LoadNetworkGraph(); // size[1603]
	void SaveNetworkGraph(); // size[195]
	void StartRebuild(); // size[82]
	void RebuildThink(); // size[59]
	void BuildNetworkGraph(); // size[84]
	void DelayedInit(); // size[537]
	void InitializeAINetworks(); // size[301]
};
