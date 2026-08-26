// Generated header

class CVoxelTree
{
public:
	virtual ~CVoxelTree(); // vtable[0]
	virtual ~CVoxelTree(); // vtable[1]
	virtual void Init(CSpatialPartition *param_1, int param_2, Vector *param_3, Vector *param_4); // vtable[2]
	virtual void ElementMoved(ushort param_1, Vector *param_2, Vector *param_3); // vtable[3]
	virtual void EnumerateElementsInBox(int param_1, Vector *param_2, Vector *param_3, bool param_4, IPartitionEnumerator *param_5); // vtable[4]
	virtual void EnumerateElementsInSphere(int param_1, Vector *param_2, float param_3, bool param_4, IPartitionEnumerator *param_5); // vtable[5]
	virtual void EnumerateElementsAlongRay(int param_1, Ray_t *param_2, bool param_3, IPartitionEnumerator *param_4); // vtable[6]
	virtual void EnumerateElementsAtPoint(int param_1, Vector *param_2, bool param_3, IPartitionEnumerator *param_4); // vtable[7]
	virtual void RenderAllObjectsInTree(float param_1); // vtable[8]
	virtual void RenderObjectsInPlayerLeafs(Vector *param_1, Vector *param_2, float param_3); // vtable[9]
	virtual void ReportStats(char *param_1); // vtable[10]
	virtual void DrawDebugOverlays(); // vtable[11]

	void ComputeSweptRayBounds(Ray_t *param_1, Vector *param_2, Vector *param_3, Vector *param_4, Vector *param_5); // size[208]
	void EnumerateElementsAlongRay_Ray(int param_1, Ray_t *param_2, Vector *param_3, Vector *param_4, IPartitionEnumerator *param_5); // size[106]
	void EnumerateElementsAlongRay_ExtrudedRay(int param_1, Ray_t *param_2, Vector *param_3, Vector *param_4, IPartitionEnumerator *param_5); // size[1963]
	void InsertIntoTree(ushort param_1, Vector *param_2, Vector *param_3); // size[65]
	void Shutdown(); // size[75]
	CVoxelTree(); // size[200]
	void RemoveFromTree(ushort param_1); // size[106]
};
