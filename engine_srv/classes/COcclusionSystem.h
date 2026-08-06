// Generated header

class COcclusionSystem : public IOcclusionSystem
{
public:
	virtual void ActivateOccluder(int param_1, bool param_2); // vtable[0]
	virtual void SetView(Vector *param_1, float param_2, VMatrix *param_3, VMatrix *param_4, VPlane *param_5); // vtable[1]
	virtual void IsOccluded(Vector *param_1, Vector *param_2); // vtable[2]
	virtual void SetOcclusionParameters(float param_1, float param_2); // vtable[3]
	virtual void MinOccluderArea(); // vtable[4]
	virtual void DrawDebugOverlays() override; // vtable[5]

	void ClipPolygonToNearPlane(Vector * *param_1, int param_2, Vector * *param_3, bool *param_4); // size[669]
	void ResetClipTempVerts(); // size[15]
	void ClipPolygonToAxisAlignedPlane(Vector * *param_1, int param_2, AxisAlignedPlane_t *param_3, Vector * *param_4); // size[570]
	void ComputeScreenSpacePlane(cplane_t *param_1, cplane_t *param_2); // size[118]
	COcclusionSystem(); // size[230]
	~COcclusionSystem(); // size[375]
	void StitchClippedVertices(Vector *param_1, int param_2); // size[60]
	void AddPolygonToEdgeList(CEdgeList *param_1, Vector * *param_2, int param_3, int param_4, bool param_5); // size[763]
	void RecomputeOccluderEdgeList(); // size[453]
};
