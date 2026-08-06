// Generated header

class CAI_Network : public IPartitionEnumerator
{
public:
	virtual void EnumElement(IHandleEntity *param_1) override; // vtable[0]

	CAI_Network(); // size[108]
	void FindBSSmallest(CVarBitVec *param_1, float *param_2, int param_3); // size[152]
	void GetCachedNode(Vector *param_1, Hull_t param_2, int *param_3); // size[71]
	void GetCachedNearestNode(Vector *param_1, CAI_BaseNPC *param_2, int *param_3); // size[293]
	void SetCachedNearestNode(Vector *param_1, int param_2, Hull_t param_3); // size[174]
	void GetNodePosition(Hull_t param_1, int param_2); // size[103]
	void GetNodePosition(CBaseCombatCharacter *param_1, int param_2); // size[93]
	void GetNodeYaw(int param_1); // size[49]
	void AddNode(Vector *param_1, float param_2); // size[83]
	void CreateLink(int param_1, int param_2, CAI_DynamicLink *param_3); // size[231]
	void IsConnected(int param_1, int param_2); // size[118]
	~CAI_Network(); // size[270]
	void ListNodesInBox(CNodeList *param_1, int param_2, Vector *param_3, Vector *param_4, INodeListFilter *param_5); // size[420]
	void NearestNodeToPoint(CAI_BaseNPC *param_1, Vector *param_2, bool param_3, INearestNodeFilter *param_4); // size[2424]
	void NearestNodeToPoint(Vector *param_1, bool param_2); // size[50]
};
