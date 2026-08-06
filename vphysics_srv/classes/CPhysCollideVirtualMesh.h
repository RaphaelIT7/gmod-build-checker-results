// Generated header

class CPhysCollideVirtualMesh : public CPhysCollide
{
public:
	virtual void ~CPhysCollideVirtualMesh(); // vtable[0]
	virtual void ~CPhysCollideVirtualMesh(); // vtable[1]
	virtual void CreateSurfaceManager(); // vtable[2]
	virtual void GetAllLedges(); // vtable[3]
	virtual void GetSerializationSize(); // vtable[4]
	virtual void SerializeToBuffer(); // vtable[5]
	virtual void GetVCollideIndex(); // vtable[6]
	virtual void GetMassCenter(); // vtable[7]
	virtual void SetMassCenter(); // vtable[8]
	virtual void GetOrthographicAreas(); // vtable[9]
	virtual void SetOrthographicAreas(); // vtable[10]
	virtual void GetSphereRadius(); // vtable[11]
	virtual void OutputDebugInfo(); // vtable[12]
	virtual void GetCompactSurface(); // vtable[13]
	virtual void ComputeOrthographicAreas(); // vtable[14]
	virtual void GetCollideMap(); // vtable[15]

	void CreateBoundingSurfaceFromRange();
	void GetSphereRadiusIVP();
	void Release();
	void BuildLedges();
	void AddRef();
	void AddRef();
	void CreateBoundingSurfaceFromRange();
	void CreateMeshBoundingHull();
	void CreateMeshBoundingHull();
	void BuildBoundingLedge();
	void FrameRelease();
	void GetAllLedgesWithinRadius();
};
