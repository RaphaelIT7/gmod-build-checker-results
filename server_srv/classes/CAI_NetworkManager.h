// Generated header

class CAI_NetworkManager : public CPointEntity
{
public:
	virtual void ~CAI_NetworkManager() override; // vtable[0]
	virtual void ~CAI_NetworkManager() override; // vtable[1]

	void GetBaseMap();
	void RebuildNetworkGraph();
	void MarkDontSaveGraph();
	void DeleteAllAINetworks();
	void IsAIFileCurrent();
	void FixupHints();
	void CAI_NetworkManager();
	void LoadNetworkGraph();
	void StartRebuild();
	void RebuildThink();
	void BuildNetworkGraph();
	void DelayedInit();
	void InitializeAINetworks();
};
