// Generated header

class CLagCompensationManager : public CAutoGameSystemPerFrame, public ILagCompensationManager
{
public:
	virtual void ~CLagCompensationManager() override; // vtable[13]
	virtual void ~CLagCompensationManager() override; // vtable[14]
	virtual void StartLagCompensation(); // vtable[19]
	virtual void FinishLagCompensation(); // vtable[20]
	virtual void IsCurrentlyDoingLagCompensation(); // vtable[21]
	virtual void AddAdditionalEntity(); // vtable[22]
	virtual void RemoveAdditionalEntity(); // vtable[23]
	virtual void IsInLagCompensation(); // vtable[24]
	virtual void IsAdditionalEntity(); // vtable[25]
	virtual void ClearInvalidEntities(); // vtable[26]

	void IsInLagCompensation();
	void RestoreEntityFromRecords();
	void IsAdditionalEntity();
	void BacktrackEntity();
	void RecordDataIntoTrack();
	void FinishLagCompensation();
	void StartLagCompensation();
	void AddAdditionalEntity();
	void RemoveAdditionalEntity();
	void IsCurrentlyDoingLagCompensation();
};
