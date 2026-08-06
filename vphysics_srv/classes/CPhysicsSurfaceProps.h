// Generated header

class CPhysicsSurfaceProps : public IPhysicsSurfacePropsInternal
{
public:
	virtual ~CPhysicsSurfaceProps(); // vtable[0]
	virtual ~CPhysicsSurfaceProps(); // vtable[1]
	virtual void ParseSurfaceData(char *param_1, char *param_2); // vtable[2]
	virtual void SurfacePropCount(); // vtable[3]
	virtual void GetSurfaceIndex(char *param_1); // vtable[4]
	virtual void GetPhysicsProperties(intparam_1, float *param_2, float *param_3, float *param_4, float *param_5); // vtable[5]
	virtual void GetSurfaceData(intparam_1); // vtable[6]
	virtual void GetString(ushortparam_1); // vtable[7]
	virtual void GetPropName(intparam_1); // vtable[8]
	virtual void SetWorldMaterialIndexTable(int *param_1, intparam_2); // vtable[9]
	virtual void GetPhysicsParameters(intparam_1, surfacephysicsparams_t *param_2); // vtable[10]
	virtual void GetIVPMaterial(intparam_1); // vtable[11]
	virtual void GetIVPMaterialIndex(IVP_Material *param_1); // vtable[12]
	virtual void GetIVPManager(); // vtable[13]
	virtual void RemapIVPMaterialIndex(intparam_1); // vtable[14]
	virtual void GetReservedMaterialName(intparam_1); // vtable[15]

	CPhysicsSurfaceProps(); // size[38]
	void ParseSurfaceData(char *param_1, char *param_2); // size[32]
	void GetInternalSurface(intparam_1); // size[64]
	void IsReservedMaterialIndex(intparam_1); // size[12]
	void GetReservedSurfaceIndex(char *param_1); // size[37]
	void GetReservedFallBack(intparam_1); // size[27]
	void CopyPhysicsProperties(CSurface *param_1, intparam_2); // size[76]
	CPhysicsSurfaceProps(); // size[444]
	void AddFileToDatabase(char *param_1); // size[239]
};
