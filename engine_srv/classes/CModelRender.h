// Generated header

class CModelRender : public IVModelRender, public CManagedDataCacheClient
{
public:
	virtual void DrawModel() override; // vtable[0]
	virtual void ForcedMaterialOverride() override; // vtable[1]
	virtual void SetViewTarget(); // vtable[2]
	virtual void CreateInstance(); // vtable[3]
	virtual void DestroyInstance(); // vtable[4]
	virtual void SetStaticLighting(); // vtable[5]
	virtual void GetStaticLighting(); // vtable[6]
	virtual void ChangeInstance(); // vtable[7]
	virtual void AddDecal(); // vtable[8]
	virtual void GMODAddDecal(); // vtable[9]
	virtual void RemoveAllDecals(); // vtable[10]
	virtual void RemoveAllDecalsFromAllModels(); // vtable[11]
	virtual void DrawModelShadowSetup(); // vtable[12]
	virtual void DrawModelShadow(); // vtable[13]
	virtual void RecomputeStaticLighting(); // vtable[14]
	virtual void ReleaseAllStaticPropColorData(); // vtable[15]
	virtual void RestoreAllStaticPropColorData(); // vtable[16]
	virtual void DrawModelEx(); // vtable[17]
	virtual void DrawModelExStaticProp(); // vtable[18]
	virtual void DrawModelSetup(); // vtable[19]
	virtual void DrawModelExecute(); // vtable[20]
	virtual void SetupLighting(); // vtable[21]
	virtual void DrawStaticPropArrayFast(); // vtable[22]
	virtual void SuppressEngineLighting(); // vtable[23]
	virtual void SetupColorMeshes(); // vtable[24]
	virtual void GetBrightestShadowingLightSource(); // vtable[25]
	virtual void GetItemName(); // vtable[26]

	void GetItemName();
	void Init();
	void Shutdown();
	void SnapCurrentLightingState();
	void TimeAverageAmbientLight();
	void TimeAverageLightingState();
	void StudioSetupLighting();
	void SetupModelState();
	void DebugDrawLightingOrigin();
	void ComputeLOD();
	void InitColormeshParams();
	void ValidateColorMesh();
	void ProtectColorDataIfQueued();
	void FindOrCreateStaticPropColorData();
	void ComputeModelVertexLightingOld();
	void ComputeModelVertexLighting();
	void StaticPropColorMeshCallback();
	void StaticPropColorTexelCallback();
	void LoadStaticPropColorData();
	void UpdateStaticPropColorData();
	void DestroyStaticPropColorData();
	void PurgeCachedStaticPropColorData();
	void IsStaticPropColorDataCached();
	void GetCachedStaticPropColorData();
	void IsModelInstanceValid();
	void ValidateStaticPropColorData();
	void ~CModelRender();
};
