// Generated header

class CLagCompensationManager : public CAutoGameSystemPerFrame, public ILagCompensationManager
{
public:
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CLagCompensationManager() override; // vtable[13]
	virtual ~CLagCompensationManager() override; // vtable[14]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]
	virtual void StartLagCompensation(CBasePlayer *param_1, LagCompensationTypeparam_2, Vector *param_3, QAngle *param_4, floatparam_5); // vtable[19]
	virtual void FinishLagCompensation(CBasePlayer *param_1); // vtable[20]
	virtual void IsCurrentlyDoingLagCompensation(); // vtable[21]
	virtual void AddAdditionalEntity(CBaseEntity *param_1); // vtable[22]
	virtual void RemoveAdditionalEntity(CBaseEntity *param_1); // vtable[23]
	virtual void IsInLagCompensation(CBasePlayer *param_1); // vtable[24]
	virtual void IsAdditionalEntity(CBaseEntity *param_1); // vtable[25]
	virtual void ClearInvalidEntities(); // vtable[26]

	void IsInLagCompensation(CBasePlayer *param_1); // size[7]
	void RestoreEntityFromRecords(CBaseEntity *param_1, LagRecord *param_2, LagRecord *param_3, boolparam_4); // size[1525]
	void IsAdditionalEntity(CBaseEntity *param_1); // size[7]
	void BacktrackEntity(CBaseEntity *param_1, floatparam_2, CUtlFixedLinkedList *param_3, LagRecord *param_4, LagRecord *param_5, boolparam_6); // size[4231]
	void RecordDataIntoTrack(CBaseEntity *param_1, CUtlFixedLinkedList *param_2, boolparam_3); // size[1531]
	void FinishLagCompensation(CBasePlayer *param_1); // size[10]
	void StartLagCompensation(CBasePlayer *param_1, LagCompensationTypeparam_2, Vector *param_3, QAngle *param_4, floatparam_5); // size[10]
	void AddAdditionalEntity(CBaseEntity *param_1); // size[7]
	void RemoveAdditionalEntity(CBaseEntity *param_1); // size[10]
	void IsCurrentlyDoingLagCompensation(); // size[7]
};
