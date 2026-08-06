// Generated header

class CPhysicsSurfaceProps : public IPhysicsSurfacePropsInternal
{
public:
	virtual void ~CPhysicsSurfaceProps(); // vtable[0]
	virtual void ~CPhysicsSurfaceProps(); // vtable[1]
	virtual void ParseSurfaceData(); // vtable[2]
	virtual void SurfacePropCount(); // vtable[3]
	virtual void GetSurfaceIndex(); // vtable[4]
	virtual void GetPhysicsProperties(); // vtable[5]
	virtual void GetSurfaceData(); // vtable[6]
	virtual void GetString(); // vtable[7]
	virtual void GetPropName(); // vtable[8]
	virtual void SetWorldMaterialIndexTable(); // vtable[9]
	virtual void GetPhysicsParameters(); // vtable[10]
	virtual void GetIVPMaterial(); // vtable[11]
	virtual void GetIVPMaterialIndex(); // vtable[12]
	virtual void GetIVPManager(); // vtable[13]
	virtual void RemapIVPMaterialIndex(); // vtable[14]
	virtual void GetReservedMaterialName(); // vtable[15]

	void CPhysicsSurfaceProps();
	void ParseSurfaceData();
	void GetInternalSurface();
	void IsReservedMaterialIndex();
	void GetReservedSurfaceIndex();
	void GetReservedFallBack();
	void CopyPhysicsProperties();
	void CPhysicsSurfaceProps();
	void AddFileToDatabase();
};
