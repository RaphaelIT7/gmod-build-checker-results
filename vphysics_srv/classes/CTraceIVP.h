// Generated header
// Estimated minimum size: 0x8 (8) bytes

class CTraceIVP : public ITraceObject
{
public:
	virtual void SupportMap(Vector *param_1, Vector *param_2); // vtable[0]
	virtual void GetVertByIndex(int param_1); // vtable[1]
	virtual void Radius(); // vtable[2]

	void SupportMap(Vector *param_1, Vector *param_2); // size[31]
	CTraceIVP(CPhysCollide *param_1, Vector *param_2, QAngle *param_3); // size[629]
	void BuildLeafmapCacheRLE(leafmap_t *param_1); // size[732]
	void BuildLeafmapCache(leafmap_t *param_1); // size[381]
	void SetLedge(IVP_Compact_Ledge *param_1); // size[404]
	void SupportMapCached(Vector *param_1, Vector *param_2); // size[766]
};
