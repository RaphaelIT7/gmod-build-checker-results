// Generated header

class CLagCompensationManager : public CAutoGameSystemPerFrame, public ILagCompensationManager
{
public:
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CLagCompensationManager() override; // vtable[13]
	virtual ~CLagCompensationManager() override; // vtable[14]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]
	virtual void StartLagCompensation(); // vtable[19]
	virtual void FinishLagCompensation(); // vtable[20]
	virtual void IsCurrentlyDoingLagCompensation(); // vtable[21]
	virtual void AddAdditionalEntity(); // vtable[22]
	virtual void RemoveAdditionalEntity(); // vtable[23]
	virtual void IsInLagCompensation(); // vtable[24]
	virtual void IsAdditionalEntity(); // vtable[25]
	virtual void ClearInvalidEntities(); // vtable[26]

	void IsInLagCompensation(); // size[0]
	void RestoreEntityFromRecords(); // size[0]
	void IsAdditionalEntity(); // size[0]
	void BacktrackEntity(); // size[0]
	void RecordDataIntoTrack(); // size[0]
	void FinishLagCompensation(); // size[0]
	void StartLagCompensation(); // size[0]
	void AddAdditionalEntity(); // size[0]
	void RemoveAdditionalEntity(); // size[0]
	void IsCurrentlyDoingLagCompensation(); // size[0]
};
