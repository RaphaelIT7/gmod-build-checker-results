// Generated header

class COcclusionSystem : public IOcclusionSystem
{
public:
	virtual void ActivateOccluder(); // vtable[0]
	virtual void SetView(); // vtable[1]
	virtual void IsOccluded(); // vtable[2]
	virtual void SetOcclusionParameters(); // vtable[3]
	virtual void MinOccluderArea(); // vtable[4]
	virtual void DrawDebugOverlays() override; // vtable[5]

	void ClipPolygonToNearPlane(); // size[0]
	void ResetClipTempVerts(); // size[0]
	void ClipPolygonToAxisAlignedPlane(); // size[0]
	void ComputeScreenSpacePlane(); // size[0]
	COcclusionSystem(); // size[0]
	~COcclusionSystem(); // size[0]
	void StitchClippedVertices(); // size[0]
	void AddPolygonToEdgeList(); // size[0]
	void RecomputeOccluderEdgeList(); // size[0]
};
