// Generated header

class CPhysCollideCompactSurface : public CPhysCollide
{
public:
	virtual ~CPhysCollideCompactSurface(); // vtable[0]
	virtual ~CPhysCollideCompactSurface(); // vtable[1]
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

	void InitCollideMap(); // size[19]
	void ComputeHullInfo_r(hullinfo_t *param_1, IVP_Compact_Ledgetree_Node *param_2); // size[71]
	void InitCollideMap(); // size[431]
	void Init(char *param_1, uint param_2, int param_3, bool param_4); // size[129]
	CPhysCollideCompactSurface(IVP_Compact_Surface *param_1); // size[61]
	CPhysCollideCompactSurface(char *param_1, uint param_2, int param_3, bool param_4); // size[135]
	CPhysCollideCompactSurface(compactsurfaceheader_t *param_1, int param_2, bool param_3); // size[167]
};
