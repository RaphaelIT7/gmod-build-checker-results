// Generated header
// Estimated minimum size: 0x150 (336) bytes, no debug info available

class CEngineTraceServer : public CEngineTrace
{
public:
	virtual void GetCollideable(IHandleEntity *param_1); // vtable[11]
	virtual void GetStatByIndex(int param_1, bool param_2); // vtable[12]
	virtual void GetBrushesInAABB(Vector *param_1, Vector *param_2, CUtlVector *param_3, int param_4); // vtable[13]
	virtual void GetCollidableFromDisplacementsInAABB(Vector *param_1, Vector *param_2); // vtable[14]
	virtual GetBrushInfo(int param_1, CUtlVector *param_2, int *param_3); // vtable[15]
	virtual void PointOutsideWorld(Vector *param_1); // vtable[16]
	virtual void GetLeafContainingPoint(Vector *param_1); // vtable[17]
	virtual void HandleEntityToCollideable(IHandleEntity *param_1, ICollideable * *param_2, char * *param_3); // vtable[18]
	virtual void GetWorldCollideable(); // vtable[19]
	virtual void SetTraceEntity(ICollideable *param_1, CGameTrace *param_2); // vtable[20]
	virtual void SpatialPartitionMask(); // vtable[21]
	virtual void SpatialPartitionTriggerMask(); // vtable[22]
};
