// Generated header
// Estimated minimum size: 0x1580 (5504) bytes

class CLagCompensationManager : public CAutoGameSystemPerFrame, public ILagCompensationManager
{
public:
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CLagCompensationManager() override; // vtable[13]
	virtual ~CLagCompensationManager() override; // vtable[14]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]
	virtual void StartLagCompensation(CBasePlayer *param_1, LagCompensationType param_2, Vector *param_3, QAngle *param_4, float param_5); // vtable[19]
	virtual void FinishLagCompensation(CBasePlayer *param_1); // vtable[20]
	virtual void IsCurrentlyDoingLagCompensation(); // vtable[21]
	virtual void AddAdditionalEntity(CBaseEntity *param_1); // vtable[22]
	virtual void RemoveAdditionalEntity(CBaseEntity *param_1); // vtable[23]
	virtual void IsInLagCompensation(CBasePlayer *param_1); // vtable[24]
	virtual void IsAdditionalEntity(CBaseEntity *param_1); // vtable[25]
	virtual void ClearInvalidEntities(); // vtable[26]
	virtual void StartLagCompensation(CBasePlayer *param_1, LagCompensationType param_2, Vector *param_3, QAngle *param_4, float param_5); // vtable[0]
	virtual void FinishLagCompensation(CBasePlayer *param_1); // vtable[1]
	virtual void IsCurrentlyDoingLagCompensation(); // vtable[2]
	virtual void AddAdditionalEntity(CBaseEntity *param_1); // vtable[3]
	virtual void RemoveAdditionalEntity(CBaseEntity *param_1); // vtable[4]
	virtual void IsInLagCompensation(CBasePlayer *param_1); // vtable[5]
	virtual void IsAdditionalEntity(CBaseEntity *param_1); // vtable[6]

	void RestoreEntityFromRecords(CBaseEntity *param_1, LagRecord *param_2, LagRecord *param_3, bool param_4); // size[1421]
	void BacktrackEntity(CBaseEntity *param_1, float param_2, CUtlFixedLinkedList *param_3, LagRecord *param_4, LagRecord *param_5, bool param_6); // size[4576]
	void RecordDataIntoTrack(CBaseEntity *param_1, CUtlFixedLinkedList *param_2, bool param_3); // size[1597]
};
