// Generated header

class CStudioRenderContext : public CTier3AppSystem
{
public:
	virtual void BeginFrame(); // vtable[5]
	virtual void EndFrame(); // vtable[6]
	virtual void Mat_Stub(); // vtable[7]
	virtual void UpdateConfig(); // vtable[8]
	virtual void GetCurrentConfig(); // vtable[9]
	virtual void LoadModel(); // vtable[10]
	virtual void UnloadModel(); // vtable[11]
	virtual void RefreshStudioHdr(); // vtable[12]
	virtual void SetEyeViewTarget(); // vtable[13]
	virtual void GetNumAmbientLightSamples(); // vtable[14]
	virtual void GetAmbientLightDirections(); // vtable[15]
	virtual void SetAmbientLightColors(); // vtable[16]
	virtual void SetAmbientLightColors(); // vtable[17]
	virtual void SetLocalLights(); // vtable[18]
	virtual void SetViewState(); // vtable[19]
	virtual void LockFlexWeights(); // vtable[20]
	virtual void UnlockFlexWeights(); // vtable[21]
	virtual void LockBoneMatrices(); // vtable[22]
	virtual void UnlockBoneMatrices(); // vtable[23]
	virtual void GetNumLODs(); // vtable[24]
	virtual void GetLODSwitchValue(); // vtable[25]
	virtual void SetLODSwitchValue(); // vtable[26]
	virtual void SetColorModulation(); // vtable[27]
	virtual void SetAlphaModulation(); // vtable[28]
	virtual void DrawModel(); // vtable[29]
	virtual void DrawModelStaticProp(); // vtable[30]
	virtual void DrawStaticPropDecals(); // vtable[31]
	virtual void DrawStaticPropShadows(); // vtable[32]
	virtual void ForcedMaterialOverride(); // vtable[33]
	virtual void CreateDecalList(); // vtable[34]
	virtual void DestroyDecalList(); // vtable[35]
	virtual void AddDecal(); // vtable[36]
	virtual void ComputeLighting(); // vtable[37]
	virtual void ComputeLightingConstDirectional(); // vtable[38]
	virtual void AddShadow(); // vtable[39]
	virtual void ClearAllShadows(); // vtable[40]
	virtual void ComputeModelLod(); // vtable[41]
	virtual void GetPerfStats(); // vtable[42]
	virtual void GetTriangles(); // vtable[43]
	virtual void GetMaterialList(); // vtable[44]
	virtual void GetMaterialListFromBodyAndSkin(); // vtable[45]
	virtual void DrawModelArray(); // vtable[46]
	virtual void GMOD_ModelMaterialOverride(); // vtable[47]
	virtual void GMOD_ForcedMaterialOverrideByIndex(); // vtable[48]
	virtual void GMOD_ResetMaterialOverridesByIndex(); // vtable[49]
	virtual void GMOD_MeshOverrideCount(); // vtable[50]
	virtual void GMOD_MeshOverride() override; // vtable[51]
	virtual void ~CStudioRenderContext(); // vtable[52]
	virtual void ~CStudioRenderContext(); // vtable[53]

	void _GLOBAL__sub_I_GetTriangles();
	void GetMaterialList();
	void CStudioRenderContext();
	void ComputeMaterialFlags();
	void LoadMaterials();
	void CountDeltaFlexedStripGroups();
	void CountFlexedVertices();
	void DetermineHWMorphing();
	void R_StudioBuildMorph();
	void R_StudioBuildMeshStrips();
	void GetNumBoneWeights();
	void CalculateVertexFormat();
	void MeshNeedsTangentSpace();
	void R_StudioDestroyStaticMeshes();
	void BuildDecalBoneMap();
	void ComputeHWMorphDecalBoneRemap();
	void GenerateRandomFlexWeights();
	void ComputeRenderLOD();
	void InvokeBindProxies();
	void R_StudioBuildMeshGroup();
	void R_StudioCreateSingleMesh();
	void R_StudioCreateStaticMeshes();
	void R_AddVertexToMesh<(VertexCompressionType_t)1>();
	void R_AddVertexToMesh<(VertexCompressionType_t)0>();
};
