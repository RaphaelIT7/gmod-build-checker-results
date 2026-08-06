// Generated header

class CEngineTraceServer : public CEngineTrace
{
public:
	virtual void GetCollideable(IHandleEntity *param_1); // vtable[11]
	virtual void HandleEntityToCollideable(IHandleEntity *param_1, ICollideable * *param_2, char * *param_3); // vtable[18]
	virtual void GetWorldCollideable(); // vtable[19]
	virtual void SetTraceEntity(ICollideable *param_1, CGameTrace *param_2); // vtable[20]
	virtual void SpatialPartitionMask(); // vtable[21]
	virtual void SpatialPartitionTriggerMask() override; // vtable[22]
};
