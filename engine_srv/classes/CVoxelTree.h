// Generated header

class CVoxelTree
{
public:
	virtual ~CVoxelTree(); // vtable[0]
	virtual ~CVoxelTree(); // vtable[1]
	virtual void Init(CSpatialPartition *param_1, intparam_2, Vector *param_3, Vector *param_4); // vtable[2]
	virtual void ElementMoved(ushortparam_1, Vector *param_2, Vector *param_3); // vtable[3]
	virtual void EnumerateElementsInBox(intparam_1, Vector *param_2, Vector *param_3, boolparam_4, IPartitionEnumerator *param_5); // vtable[4]
	virtual void EnumerateElementsInSphere(intparam_1, Vector *param_2, floatparam_3, boolparam_4, IPartitionEnumerator *param_5); // vtable[5]
	virtual void EnumerateElementsAlongRay(intparam_1, Ray_t *param_2, boolparam_3, IPartitionEnumerator *param_4); // vtable[6]
	virtual void EnumerateElementsAtPoint(intparam_1, Vector *param_2, boolparam_3, IPartitionEnumerator *param_4); // vtable[7]
	virtual void RenderAllObjectsInTree(floatparam_1); // vtable[8]
	virtual void RenderObjectsInPlayerLeafs(Vector *param_1, Vector *param_2, floatparam_3); // vtable[9]
	virtual void ReportStats(char *param_1); // vtable[10]
	virtual void DrawDebugOverlays(); // vtable[11]

	void ComputeSweptRayBounds(Ray_t *param_1, Vector *param_2, Vector *param_3, Vector *param_4, Vector *param_5); // size[208]
	void EnumerateElementsAlongRay_Ray(intparam_1, Ray_t *param_2, Vector *param_3, Vector *param_4, IPartitionEnumerator *param_5); // size[106]
	void EnumerateElementsAlongRay_ExtrudedRay(intparam_1, Ray_t *param_2, Vector *param_3, Vector *param_4, IPartitionEnumerator *param_5); // size[1963]
	void InsertIntoTree(ushortparam_1, Vector *param_2, Vector *param_3); // size[65]
	void Shutdown(); // size[75]
	CVoxelTree(); // size[200]
	void RemoveFromTree(ushortparam_1); // size[106]
};
