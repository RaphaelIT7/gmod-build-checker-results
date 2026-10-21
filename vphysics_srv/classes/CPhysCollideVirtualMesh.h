// Generated header
// Estimated minimum size: 0x8 (8) bytes

class CPhysCollideVirtualMesh : public CPhysCollide
{
public:
	virtual ~CPhysCollideVirtualMesh(); // vtable[0]
	virtual ~CPhysCollideVirtualMesh(); // vtable[1]
	virtual void CreateSurfaceManager(short *param_1); // vtable[2]
	virtual void GetAllLedges(IVP_U_BigVector *param_1); // vtable[3]
	virtual void GetSerializationSize(); // vtable[4]
	virtual void SerializeToBuffer(char *param_1, bool param_2); // vtable[5]
	virtual void GetVCollideIndex(); // vtable[6]
	virtual void GetMassCenter(); // vtable[7]
	virtual void SetMassCenter(Vector *param_1); // vtable[8]
	virtual void GetOrthographicAreas(); // vtable[9]
	virtual void SetOrthographicAreas(Vector *param_1); // vtable[10]
	virtual void GetSphereRadius(); // vtable[11]
	virtual void OutputDebugInfo(); // vtable[12]
	virtual void GetCompactSurface(); // vtable[13]
	virtual void ComputeOrthographicAreas(float param_1); // vtable[14]
	virtual void GetCollideMap(); // vtable[15]

	void CreateBoundingSurfaceFromRange(virtualmeshlist_t *param_1, int param_2, int param_3); // size[38]
	void GetSphereRadiusIVP(); // size[23]
	void Release(); // size[16]
	void BuildLedges(); // size[739]
	void AddRef(); // size[151]
	void AddRef(); // size[53]
	void CreateBoundingSurfaceFromRange(virtualmeshlist_t *param_1, int param_2, int param_3); // size[856]
	void CreateMeshBoundingHull(virtualmeshlist_t *param_1); // size[275]
	void CreateMeshBoundingHull(virtualmeshlist_t *param_1); // size[15]
	void BuildBoundingLedge(); // size[92]
	void FrameRelease(); // size[306]
	void GetAllLedgesWithinRadius(IVP_U_Point *param_1, double param_2, IVP_U_BigVector *param_3, IVP_Compact_Ledge *param_4); // size[543]
};
