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

	void ClipPolygonToNearPlane();
	void ResetClipTempVerts();
	void ClipPolygonToAxisAlignedPlane();
	void ComputeScreenSpacePlane();
	void COcclusionSystem();
	void ~COcclusionSystem();
	void StitchClippedVertices();
	void AddPolygonToEdgeList();
	void RecomputeOccluderEdgeList();
};
