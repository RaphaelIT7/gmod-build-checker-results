// Generated header

class CDispCollTree
{
public:
	virtual void Create(CCoreDispInfo *param_1); // vtable[0]

	void BCollisionFacesAreAllValid(); // size[405]
	void AABBTree_GenerateBoxes_r(int param_1, Vector *param_2, Vector *param_3); // size[541]
	void AABBTree_CalcBounds(); // size[111]
	void AABBTree_TreeTrisRayBarycentricTest(Ray_t *param_1, Vector *param_2, int param_3, RayDispOutput_t *param_4, CDispCollTri * *param_5); // size[1178]
	void AABBTree_Ray(Ray_t *param_1, Vector *param_2, RayDispOutput_t *param_3); // size[357]
	void AABBTree_Ray(Ray_t *param_1, RayDispOutput_t *param_2); // size[236]
	void AABBTree_TreeTrisRayTest(Ray_t *param_1, Vector *param_2, int param_3, CBaseTrace *param_4, bool param_5, CDispCollTri * *param_6); // size[1031]
	void AABBTree_Ray(Ray_t *param_1, Vector *param_2, CBaseTrace *param_3, bool param_4); // size[391]
	void AABBTree_BuildTreeTrisInSphere_r(Vector *param_1, float param_2, int param_3, ushort *param_4, ushort param_5); // size[767]
	void AABBTree_GetTrisInSphere(Vector *param_1, float param_2, ushort *param_3, int param_4); // size[60]
	void AABBTree_IntersectAABB(Vector *param_1, Vector *param_2); // size[1343]
	void ResolveRayPlaneIntersect(float param_1, float param_2, Vector *param_3, float param_4, CDispCollHelper *param_5); // size[202]
	void PointInBounds(Vector *param_1, Vector *param_2, Vector *param_3, bool param_4); // size[199]
	void GetVirtualMeshList(virtualmeshlist_t *param_1); // size[153]
	void AABBTree_CreateLeafs(); // size[291]
	void SweepAABBTriIntersect(Ray_t *param_1, Vector *param_2, int param_3, CDispCollTri *param_4, CBaseTrace *param_5); // size[1208]
	~CDispCollTree(); // size[340]
	CDispCollTree(); // size[500]
	void AABBTree_CopyDispData(CCoreDispInfo *param_1); // size[1279]
	void AABBTree_Create(CCoreDispInfo *param_1); // size[62]
	void AddPlane(Vector *param_1); // size[695]
	void Cache_EdgeCrossAxisX(Vector *param_1, Vector *param_2, Vector *param_3, CDispCollTri *param_4, ushort *param_5); // size[346]
	void Cache_EdgeCrossAxisY(Vector *param_1, Vector *param_2, Vector *param_3, CDispCollTri *param_4, ushort *param_5); // size[343]
	void Cache_EdgeCrossAxisZ(Vector *param_1, Vector *param_2, Vector *param_3, CDispCollTri *param_4, ushort *param_5); // size[340]
	void Cache_Create(CDispCollTri *param_1, int param_2); // size[616]
	void Cache(); // size[416]
	void AABBTree_SweepAABB(Ray_t *param_1, Vector *param_2, CBaseTrace *param_3); // size[1655]
	bool EdgeCrossAxis<0>(Ray_t *param_1, ushort param_2, CDispCollHelper *param_3); // size[348]
	bool EdgeCrossAxis<1>(Ray_t *param_1, ushort param_2, CDispCollHelper *param_3); // size[347]
	bool EdgeCrossAxis<2>(Ray_t *param_1, ushort param_2, CDispCollHelper *param_3); // size[347]
};
