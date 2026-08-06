// Generated header

class CTraceIVP : public ITraceObject
{
public:
	virtual void SupportMap(Vector *param_1, Vector *param_2); // vtable[0]
	virtual void GetVertByIndex(intparam_1); // vtable[1]
	virtual void Radius(); // vtable[2]

	void SupportMap(Vector *param_1, Vector *param_2); // size[42]
	CTraceIVP(CPhysCollide *param_1, Vector *param_2, QAngle *param_3); // size[599]
	void BuildLeafmapCacheRLE(leafmap_t *param_1); // size[769]
	void BuildLeafmapCache(leafmap_t *param_1); // size[389]
	void SetLedge(IVP_Compact_Ledge *param_1); // size[257]
	void SupportMapCached(Vector *param_1, Vector *param_2); // size[709]
};
