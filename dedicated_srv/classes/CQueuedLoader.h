// Generated header

class CQueuedLoader : public CTier2AppSystem
{
public:
	virtual void InstallLoader(); // vtable[5]
	virtual void InstallProgress(); // vtable[6]
	virtual void BeginMapLoading(); // vtable[7]
	virtual void EndMapLoading(); // vtable[8]
	virtual void AddJob(); // vtable[9]
	virtual void AddMapResource(); // vtable[10]
	virtual void DynamicLoadMapResource(); // vtable[11]
	virtual void QueueDynamicLoadFunctor(); // vtable[12]
	virtual void CompleteDynamicLoad(); // vtable[13]
	virtual void ClaimAnonymousJob(); // vtable[14]
	virtual void ClaimAnonymousJob(); // vtable[15]
	virtual void IsMapLoading(); // vtable[16]
	virtual void IsSameMapLoading(); // vtable[17]
	virtual void IsFinished(); // vtable[18]
	virtual void IsBatching(); // vtable[19]
	virtual void IsDynamic(); // vtable[20]
	virtual void GetSpewDetail(); // vtable[21]
	virtual void PurgeAll() override; // vtable[22]
	virtual void ~CQueuedLoader(); // vtable[23]
	virtual void ~CQueuedLoader(); // vtable[24]

	void Less();
	void GetFilename();
	void FindFilename();
	void Less();
	void GetLayoutOrderForFilename();
	void Less();
	void PurgeQueue();
	void SpewInfo();
	void PurgeUnreferencedResources();
	void BuildResources();
	void BuildMaterialResources();
	void GetJobRequests();
	void CleanQueue();
	void AddResourceToTable();
	void ParseResourceList();
	void CQueuedLoader();
	void SubmitPendingJobs();
	void SubmitBatchedJobs();
	void SubmitBatchedJobsAndWait();
};
