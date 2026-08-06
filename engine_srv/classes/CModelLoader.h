// Generated header

class CModelLoader : public IModelLoader
{
public:
	virtual void Init(); // vtable[0]
	virtual void Shutdown(); // vtable[1]
	virtual void GetCount(); // vtable[2]
	virtual void GetModelForIndex(); // vtable[3]
	virtual void GetName(); // vtable[4]
	virtual void GetExtraData(); // vtable[5]
	virtual void GetModelFileSize(); // vtable[6]
	virtual void GetModelForName(); // vtable[7]
	virtual void ReferenceModel(); // vtable[8]
	virtual void UnreferenceModel(); // vtable[9]
	virtual void UnreferenceAllModels(); // vtable[10]
	virtual void UnloadUnreferencedModels(); // vtable[11]
	virtual void PurgeUnusedModels(); // vtable[12]
	virtual void UnloadModel(); // vtable[13]
	virtual void Map_GetRenderInfoAllocated(); // vtable[14]
	virtual void Map_SetRenderInfoAllocated(); // vtable[15]
	virtual void Map_LoadDisplacements(); // vtable[16]
	virtual void Print(); // vtable[17]
	virtual void Map_IsValid(); // vtable[18]
	virtual void RecomputeSurfaceFlags(); // vtable[19]
	virtual void Studio_ReloadModels(); // vtable[20]
	virtual void IsLoaded(); // vtable[21]
	virtual void LastLoadedMapHasHDRLighting(); // vtable[22]
	virtual void ReloadFilesInList(); // vtable[23]
	virtual void GetActiveMapName(); // vtable[24]
	virtual void UpdateDynamicModels(); // vtable[25]
	virtual void FlushDynamicModels(); // vtable[26]
	virtual void ForceUnloadNonClientDynamicModels(); // vtable[27]
	virtual void GetDynamicModel(); // vtable[28]
	virtual void IsDynamicModelLoading(); // vtable[29]
	virtual void AddRefDynamicModel(); // vtable[30]
	virtual void ReleaseDynamicModel(); // vtable[31]
	virtual void RegisterModelLoadCallback(); // vtable[32]
	virtual void UnregisterModelLoadCallback(); // vtable[33]
	virtual void Client_OnServerModelStateChanged(); // vtable[34]
	virtual void GMOD_LoadModel(); // vtable[35]
	virtual void GMOD_ReloadModels(); // vtable[36]

	void Map_IsValid();
	void UnloadAllModels();
	void Map_UnloadCubemapSamples();
	void Sprite_LoadModel();
	void Sprite_UnloadModel();
	void SetWorldModel();
	void IsWorldModelSet();
	void GetNumWorldSubmodels();
	void UpdateOrCreate();
	void GetTypeFromName();
	void FinishDynamicModelLoadIfReady();
	void DebugPrintDynamicModels();
	void FindModelNoCreate();
	void FindNext();
	void CancelDynamicModelLoad();
	void DumpVCollideStats();
	void ClearWorldModel();
	void Map_UnloadModel();
	void Studio_UnloadModel();
	void Studio_UnloadModel();
	void QueueDynamicModelLoad();
	void Studio_LoadModel();
	void SetupSubModels();
	void Map_LoadModel();
	void LoadModel();
	void UpdateDynamicModelLoadQueue();
	void InternalUpdateDynamicModels();
	void FindModel();
	void ~CModelLoader();
};
