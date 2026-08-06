// Generated header

class CVoxelTree
{
public:
	virtual void ~CVoxelTree(); // vtable[0]
	virtual void ~CVoxelTree(); // vtable[1]
	virtual void Init(); // vtable[2]
	virtual void ElementMoved(); // vtable[3]
	virtual void EnumerateElementsInBox(); // vtable[4]
	virtual void EnumerateElementsInSphere(); // vtable[5]
	virtual void EnumerateElementsAlongRay(); // vtable[6]
	virtual void EnumerateElementsAtPoint(); // vtable[7]
	virtual void RenderAllObjectsInTree(); // vtable[8]
	virtual void RenderObjectsInPlayerLeafs(); // vtable[9]
	virtual void ReportStats(); // vtable[10]
	virtual void DrawDebugOverlays(); // vtable[11]

	void ComputeSweptRayBounds();
	void EnumerateElementsAlongRay_Ray();
	void EnumerateElementsAlongRay_ExtrudedRay();
	void InsertIntoTree();
	void Shutdown();
	void CVoxelTree();
	void RemoveFromTree();
};
