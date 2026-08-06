// Generated header

class CPhysCollideVirtualMesh : public CPhysCollide
{
public:
	virtual ~CPhysCollideVirtualMesh(); // vtable[0]
	virtual ~CPhysCollideVirtualMesh(); // vtable[1]
	virtual void CreateSurfaceManager(short *param_1); // vtable[2]
	virtual void GetAllLedges(IVP_U_BigVector *param_1); // vtable[3]
	virtual void GetSerializationSize(); // vtable[4]
	virtual void SerializeToBuffer(char *param_1, boolparam_2); // vtable[5]
	virtual void GetVCollideIndex(); // vtable[6]
	virtual void GetMassCenter(); // vtable[7]
	virtual void SetMassCenter(Vector *param_1); // vtable[8]
	virtual void GetOrthographicAreas(); // vtable[9]
	virtual void SetOrthographicAreas(Vector *param_1); // vtable[10]
	virtual void GetSphereRadius(); // vtable[11]
	virtual void OutputDebugInfo(); // vtable[12]
	virtual void GetCompactSurface(); // vtable[13]
	virtual void ComputeOrthographicAreas(floatparam_1); // vtable[14]
	virtual void GetCollideMap(); // vtable[15]

	void CreateBoundingSurfaceFromRange(virtualmeshlist_t *param_1, intparam_2, intparam_3); // size[50]
	void GetSphereRadiusIVP(); // size[41]
	void Release(); // size[27]
	void BuildLedges(); // size[790]
	void AddRef(); // size[152]
	void AddRef(); // size[46]
	void CreateBoundingSurfaceFromRange(virtualmeshlist_t *param_1, intparam_2, intparam_3); // size[791]
	void CreateMeshBoundingHull(virtualmeshlist_t *param_1); // size[268]
	void CreateMeshBoundingHull(virtualmeshlist_t *param_1); // size[23]
	void BuildBoundingLedge(); // size[74]
	void FrameRelease(); // size[253]
	void GetAllLedgesWithinRadius(IVP_U_Point *param_1, doubleparam_2, IVP_U_BigVector *param_3, IVP_Compact_Ledge *param_4); // size[103]
};
