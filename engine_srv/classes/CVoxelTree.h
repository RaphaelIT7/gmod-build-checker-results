// Generated header

class CVoxelTree
{
public:
	virtual ~CVoxelTree(); // vtable[0]
	virtual ~CVoxelTree(); // vtable[1]
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

	void ComputeSweptRayBounds(); // size[0]
	void EnumerateElementsAlongRay_Ray(); // size[0]
	void EnumerateElementsAlongRay_ExtrudedRay(); // size[0]
	void InsertIntoTree(); // size[0]
	void Shutdown(); // size[0]
	CVoxelTree(); // size[0]
	void RemoveFromTree(); // size[0]
};
