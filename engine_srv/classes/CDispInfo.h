// Generated header

class CDispInfo : public IDispInfo, public CDispUtilsHelper
{
public:
	virtual void ~CDispInfo() override; // vtable[0]
	virtual void ~CDispInfo() override; // vtable[1]
	virtual void GetIntersectingSurfaces(); // vtable[2]
	virtual void RenderWireframeInLightmapPage() override; // vtable[3]
	virtual void GetBoundingBox(); // vtable[4]
	virtual void SetParent(); // vtable[5]
	virtual void GetParent(); // vtable[6]
	virtual void AddDynamicLights(); // vtable[7]
	virtual void ComputeDynamicLightMask(); // vtable[8]
	virtual void NotifyAddDecal(); // vtable[9]
	virtual void NotifyRemoveDecal(); // vtable[10]
	virtual void AddShadowDecal(); // vtable[11]
	virtual void RemoveShadowDecal(); // vtable[12]
	virtual void ComputeShadowFragments(); // vtable[13]
	virtual void GetTag(); // vtable[14]
	virtual void SetTag(); // vtable[15]
	virtual void TestRay(); // vtable[16]
	virtual void ComputeLightmapAndTextureCoordinate() override; // vtable[17]
	virtual void GetPowerInfo(); // vtable[18]
	virtual void GetEdgeNeighbor(); // vtable[19]
	virtual void GetCornerNeighbors(); // vtable[20]
	virtual void GetDispUtilsByIndex(); // vtable[21]

	void _GLOBAL__sub_I_GetIntersectingSurfaces();
	void UpdateBoundingBox();
	void TestAddDecalTri();
	void TestAddDecalTri();
	void CullDecals();
	void SpecifyDynamicMesh();
	void SpecifyWalkableDynamicMesh();
	void SpecifyBuildableDynamicMesh();
	void InitializeActiveVerts();
	void ClearLOD();
	void Render();
	void AddSingleDynamicLight();
	void AddSingleDynamicLightBumped();
	void AddSingleDynamicAlphaLight();
	void SetupDecalNodeIntersect_R();
	void SetupDecalNodeIntersect();
	void GetFlatVert();
	void GetPowerInfo();
	void GetEdgeNeighbor();
	void GetCornerNeighbors();
	void GetDispUtilsByIndex();
	void TesselateDisplacement();
	void GenerateDecalFragments_R();
	void GenerateDecalFragments();
	void ClearDecalFragments();
	void ClearAllDecalFragments();
	void ClearShadowDecalFragments();
	void ClearAllShadowDecalFragments();
	void AllocateDispDecalFragment();
	void AllocateShadowDecalFragment();
	void CopyCoreDispVertData();
	void CopyCoreDispData();
	void NumLightMaps();
	void CDispInfo();
	void CopyMapDispData();
};
