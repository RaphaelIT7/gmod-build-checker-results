// Generated header

class CMDLCache : public CTier3AppSystem, public IStudioDataCache, public CDefaultDataCacheClient
{
public:
	virtual void Connect() override; // vtable[0]
	virtual void Disconnect() override; // vtable[1]
	virtual void Shutdown() override; // vtable[4]
	virtual void SetCacheNotify(); // vtable[5]
	virtual void _ZN9CMDLCache7FindMDLEPKc() override; // vtable[6]
	virtual void AddRef(); // vtable[7]
	virtual void Release(); // vtable[8]
	virtual void GetRef(); // vtable[9]
	virtual void GetStudioHdr(); // vtable[10]
	virtual void GetHardwareData(); // vtable[11]
	virtual void GetVCollide(); // vtable[12]
	virtual void GetVCollide(); // vtable[13]
	virtual void GetAnimBlock() override; // vtable[14]
	virtual void GetVirtualModel(); // vtable[15]
	virtual void GetAutoplayList(); // vtable[16]
	virtual void GetVertexData(); // vtable[17]
	virtual void TouchAllData(); // vtable[18]
	virtual void SetUserData(); // vtable[19]
	virtual void GetUserData(); // vtable[20]
	virtual void IsErrorModel(); // vtable[21]
	virtual void Flush(); // vtable[22]
	virtual void Flush(); // vtable[23]
	virtual void GetModelName(); // vtable[24]
	virtual void GetVirtualModelFast(); // vtable[25]
	virtual void BeginLock(); // vtable[26]
	virtual void EndLock(); // vtable[27]
	virtual void GetFrameUnlockCounterPtrOLD(); // vtable[28]
	virtual void FinishPendingLoads(); // vtable[29]
	virtual void GetVCollideEx(); // vtable[30]
	virtual void GetVCollideSize(); // vtable[31]
	virtual void GetAsyncLoad(); // vtable[32]
	virtual void SetAsyncLoad(); // vtable[33]
	virtual void BeginMapLoad(); // vtable[34]
	virtual void EndMapLoad(); // vtable[35]
	virtual void MarkAsLoaded(); // vtable[36]
	virtual void InitPreloadData(); // vtable[37]
	virtual void ShutdownPreloadData(); // vtable[38]
	virtual void IsDataLoaded(); // vtable[39]
	virtual void GetFrameUnlockCounterPtr(); // vtable[40]
	virtual void LockStudioHdr(); // vtable[41]
	virtual void UnlockStudioHdr(); // vtable[42]
	virtual void PreloadModel(); // vtable[43]
	virtual void ResetErrorModelStatus(); // vtable[44]
	virtual void MarkFrame() override; // vtable[45]
	virtual void VerifyHeaders(); // vtable[46]
	virtual void CacheVertexData(); // vtable[47]
	virtual void HandleCacheNotification(); // vtable[48]
	virtual void GetItemName(); // vtable[49]

	void GetItemName();
	void QueryInterface();
	void BreakFrameLock();
	void LoadData();
	void Disconnect();
	void Init();
	void Connect();
	void InitStudioData();
	void GetActualModelName();
	void MakeFilename();
	void DestroyVCollide();
	void AllocateAnimBlocks();
	void AllocateAutoplaySequences();
	void FreeAutoplaySequences();
	void ConvertFlexData();
	void BuildHardwareData();
	void UpdateOrCreate();
	void ReadFileNative();
	void BreakFrameLock();
	void RestoreFrameLock();
	void GetVTXExtension();
	void LoadData();
	void CreateThinVertexes();
	void AllocData();
	void CacheData();
	void UnserializeMDL();
	void BuildAndCacheVertexData();
	void CheckData();
	void CheckDataNoTouch();
	void FreeData();
	void UncacheData();
	void ReadMDLFile();
	void VerifyHeaders();
	void ShutdownStudioData();
	void AllocateVirtualModel();
	void FreeVirtualModel();
	void CMDLCache();
	void Shutdown();
	void NotifyFileUnloaded();
	void UnloadHardwareData();
	void HandleCacheNotification();
	void ReleaseMaterialSystemObjects();
	void ClearAsync();
	void FreeAnimBlocks();
	void RestoreMaterialSystemObjects();
	void ProcessPendingAsync();
	void UnserializeVCollide();
	void UnserializeAnimBlock();
	void ProcessPendingAsyncs();
	void UnserializeAllVirtualModelsAndAnimBlocks();
	void ProcessDataIntoCache();
	void ProcessQueuedData();
	void QueuedLoaderCallback_MDL();
	void ProcessDynamicLoad();
	void LoadVertexData();
	void CacheVertexData();
	void LoadHardwareData();
	void ~CMDLCache();
};
