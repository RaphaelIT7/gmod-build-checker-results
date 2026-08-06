// Generated header

class CCoreDispInfo : public CDispUtilsHelper
{
public:
	virtual void GetPowerInfo(); // vtable[0]
	virtual void GetEdgeNeighbor(); // vtable[1]
	virtual void GetCornerNeighbors(); // vtable[2]
	virtual void GetDispUtilsByIndex() override; // vtable[3]

	void CCoreDispInfo();
	void ~CCoreDispInfo();
	void InitDispInfo();
	void InitDispInfo();
	void SetDispUtilsHelperInfo();
	void BuildTriTLtoBR();
	void BuildTriBLtoTR();
	void GenerateCollisionSurface();
	void GenerateCollisionData();
	void CalcTriSurfPlanes();
	void CalcRayBoundingBoxes();
	void CalcTriSurfBoundingBoxes();
	void CalcTriSurfIndices();
	void CalcTriSurfInfoAtNode();
	void CalcMinMaxBoundingBoxAtNode();
	void CalcBoundingBoxAtNode();
	void GetMaxErrorFromChildren();
	void CalcErrorTermAtNode();
	void CalcNeighborVertIndicesAtNode();
	void CalcNodeInfo();
	void GetNodeVertIndexFromParentIndex();
	void CalcVertIndicesAtNodes();
	void GenerateLODTree();
	void CalcDispSurfCoords();
	void GenerateDispSurfTangentSpaces();
	void CalcNormalFromEdges();
	void DoesEdgeExist();
	void GenerateDispSurfNormals();
	void GenerateDispSurf();
	void BaseFacePlaneToDispUV();
	void DispUVToSurf_TriTLToBR_2();
	void DispUVToSurf_TriTLToBR_1();
	void DispUVToSurf_TriTLToBR();
	void DispUVToSurf_TriBLToTR_2();
	void DispUVToSurf_TriBLToTR_1();
	void DispUVToSurf_TriBLToTR();
	void DispUVToSurf();
	void GetPositionOnSurface();
	void CreateBoundingBoxes();
	void GetTriangleIndicesForDispBBox();
	void SurfToBaseFacePlane();
	void GetTriCount();
	void GetTriIndices();
	void SetTriIndices();
	void GetTriPos();
	void InitTris();
	void CreateTris();
	void Create();
	void CreateWithoutLOD();
	void IsTriWalkable();
	void IsTriBuildable();
	void IsTriRemove();
	void Position_Update();
};
