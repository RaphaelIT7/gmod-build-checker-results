// Generated header

class CPhysicsCollision : public IPhysicsCollision
{
public:
	virtual void ~CPhysicsCollision(); // vtable[0]
	virtual void ~CPhysicsCollision(); // vtable[1]
	virtual void ConvexFromVerts(); // vtable[2]
	virtual void ConvexFromPlanes(); // vtable[3]
	virtual void ConvexVolume(); // vtable[4]
	virtual void ConvexSurfaceArea(); // vtable[5]
	virtual void SetConvexGameData(); // vtable[6]
	virtual void ConvexFree(); // vtable[7]
	virtual void BBoxToConvex(); // vtable[8]
	virtual void ConvexFromConvexPolyhedron(); // vtable[9]
	virtual void ConvexesFromConvexPolygon(); // vtable[10]
	virtual void PolysoupCreate(); // vtable[11]
	virtual void PolysoupDestroy(); // vtable[12]
	virtual void PolysoupAddTriangle(); // vtable[13]
	virtual void ConvertPolysoupToCollide(); // vtable[14]
	virtual void ConvertConvexToCollide(); // vtable[15]
	virtual void ConvertConvexToCollideParams(); // vtable[16]
	virtual void DestroyCollide(); // vtable[17]
	virtual void CollideSize(); // vtable[18]
	virtual void CollideWrite(); // vtable[19]
	virtual void UnserializeCollide(); // vtable[20]
	virtual void CollideVolume(); // vtable[21]
	virtual void CollideSurfaceArea(); // vtable[22]
	virtual void CollideGetExtent(); // vtable[23]
	virtual void CollideGetAABB(); // vtable[24]
	virtual void CollideGetMassCenter(); // vtable[25]
	virtual void CollideSetMassCenter(); // vtable[26]
	virtual void CollideGetOrthographicAreas(); // vtable[27]
	virtual void CollideSetOrthographicAreas(); // vtable[28]
	virtual void CollideIndex(); // vtable[29]
	virtual void BBoxToCollide(); // vtable[30]
	virtual void GetConvexesUsedInCollideable(); // vtable[31]
	virtual void TraceBox(); // vtable[32]
	virtual void TraceBox(); // vtable[33]
	virtual void TraceBox(); // vtable[34]
	virtual void TraceCollide(); // vtable[35]
	virtual void IsBoxIntersectingCone(); // vtable[36]
	virtual void VCollideLoad(); // vtable[37]
	virtual void VCollideUnload(); // vtable[38]
	virtual void VPhysicsKeyParserCreate(); // vtable[39]
	virtual void VPhysicsKeyParserDestroy(); // vtable[40]
	virtual void CreateDebugMesh(); // vtable[41]
	virtual void DestroyDebugMesh(); // vtable[42]
	virtual void CreateQueryModel(); // vtable[43]
	virtual void DestroyQueryModel(); // vtable[44]
	virtual void ThreadContextCreate(); // vtable[45]
	virtual void ThreadContextDestroy(); // vtable[46]
	virtual void CreateVirtualMesh(); // vtable[47]
	virtual void SupportsVirtualMesh(); // vtable[48]
	virtual void GetBBoxCacheSize(); // vtable[49]
	virtual void PolyhedronFromConvex(); // vtable[50]
	virtual void OutputDebugInfo(); // vtable[51]
	virtual void ReadStat(); // vtable[52]

	void ConvexFromPlanes();
	void ConvexFromConvexPolyhedron();
	void RebuildConvexFromPlanes();
	void ConvexFromVertsFast();
	void PolysoupCreate();
	void ConvertConvexToCollideParams();
	void VCollideLoad();
	void GetConvexesUsedInCollideable();
	void ConvertPolysoupToCollide();
	void CreateDebugMesh();
	void CollideVolume();
	void CollideSurfaceArea();
	void CreateQueryModel();
	void RebuildConvexFromPlanes();
	void FastBboxCollide();
	void IsBBoxCache();
	void GetBBoxCache();
	void ConvexFromVertsFast();
	void AddBBoxCache();
	void InitBBoxCache();
};
