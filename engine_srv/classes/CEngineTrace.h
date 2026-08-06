// Generated header

class CEngineTrace : public IEngineTrace
{
public:
	virtual void GetPointContents(Vector *param_1, IHandleEntity * *param_2); // vtable[0]
	virtual void GetPointContents_Collideable(ICollideable *param_1, Vector *param_2); // vtable[1]
	virtual void ClipRayToEntity(Ray_t *param_1, uint param_2, IHandleEntity *param_3, CGameTrace *param_4); // vtable[2]
	virtual void ClipRayToCollideable(Ray_t *param_1, uint param_2, ICollideable *param_3, CGameTrace *param_4); // vtable[3]
	virtual void TraceRay(Ray_t *param_1, uint param_2, ITraceFilter *param_3, CGameTrace *param_4); // vtable[4]
	virtual void SetupLeafAndEntityListRay(Ray_t *param_1, CTraceListData *param_2); // vtable[5]
	virtual void SetupLeafAndEntityListBox(Vector *param_1, Vector *param_2, CTraceListData *param_3); // vtable[6]
	virtual void TraceRayAgainstLeafAndEntityList(Ray_t *param_1, CTraceListData *param_2, uint param_3, ITraceFilter *param_4, CGameTrace *param_5); // vtable[7]
	virtual void SweepCollideable(ICollideable *param_1, Vector *param_2, Vector *param_3, QAngle *param_4, uint param_5, ITraceFilter *param_6, CGameTrace *param_7); // vtable[8]
	virtual void EnumerateEntities(Ray_t *param_1, bool param_2, IEntityEnumerator *param_3); // vtable[9]
	virtual void EnumerateEntities(Vector *param_1, Vector *param_2, IEntityEnumerator *param_3); // vtable[10]
	virtual void GetStatByIndex(int param_1, bool param_2); // vtable[12]
	virtual void GetBrushesInAABB(Vector *param_1, Vector *param_2, CUtlVector *param_3, int param_4); // vtable[13]
	virtual void GetCollidableFromDisplacementsInAABB(Vector *param_1, Vector *param_2); // vtable[14]
	virtual GetBrushInfo(int param_1, CUtlVector *param_2, int *param_3); // vtable[15]
	virtual void PointOutsideWorld(Vector *param_1); // vtable[16]
	virtual void GetLeafContainingPoint(Vector *param_1); // vtable[17]
	virtual void __cxa_pure_virtual(); // vtable[22]

	void ClipRayToCustom(Ray_t *param_1, uint param_2, ICollideable *param_3, CGameTrace *param_4); // size[23]
	void ClipRayToHitboxes(Ray_t *param_1, uint param_2, ICollideable *param_3, CGameTrace *param_4); // size[661]
	void ClipRayToVPhysics(Ray_t *param_1, uint param_2, ICollideable *param_3, studiohdr_t *param_4, CGameTrace *param_5); // size[451]
	void ClipRayToBSP(Ray_t *param_1, uint param_2, ICollideable *param_3, CGameTrace *param_4); // size[134]
	void ClipRayToBBox(Ray_t *param_1, uint param_2, ICollideable *param_3, CGameTrace *param_4); // size[1569]
	void ClipRayToOBB(Ray_t *param_1, uint param_2, ICollideable *param_3, CGameTrace *param_4); // size[136]
	void ClipTraceToTrace(CGameTrace *param_1, CGameTrace *param_2); // size[549]
};
