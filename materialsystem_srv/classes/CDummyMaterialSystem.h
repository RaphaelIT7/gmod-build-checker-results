// Generated header

class CDummyMaterialSystem : public IMaterialSystemStub, public CRefCounted1
{
public:
	virtual void Connect() override; // vtable[0]
	virtual void Disconnect() override; // vtable[1]
	virtual void QueryInterface() override; // vtable[2]
	virtual void Init() override; // vtable[3]
	virtual void Shutdown() override; // vtable[4]
	virtual void Init(); // vtable[5]
	virtual void SetShaderAPI(); // vtable[6]
	virtual void SetAdapter(); // vtable[7]
	virtual void ModInit(); // vtable[8]
	virtual void ModShutdown(); // vtable[9]
	virtual void SetThreadMode(); // vtable[10]
	virtual void GetThreadMode(); // vtable[11]
	virtual void IsRenderThreadSafe(); // vtable[12]
	virtual void ExecuteQueued(); // vtable[13]
	virtual void GetHardwareConfig(); // vtable[14]
	virtual void UpdateConfig(); // vtable[15]
	virtual void OverrideConfig(); // vtable[16]
	virtual void GetCurrentConfigForVideoCard(); // vtable[17]
	virtual void GetRecommendedConfigurationInfo(); // vtable[18]
	virtual void GetDisplayAdapterCount(); // vtable[19]
	virtual void GetCurrentAdapter(); // vtable[20]
	virtual void GetDisplayAdapterInfo(); // vtable[21]
	virtual void GetModeCount(); // vtable[22]
	virtual void GetModeInfo(); // vtable[23]
	virtual void AddModeChangeCallBack(); // vtable[24]
	virtual void GetDisplayMode(); // vtable[25]
	virtual void SetMode(); // vtable[26]
	virtual void SupportsMSAAMode(); // vtable[27]
	virtual void GetVideoCardIdentifier(); // vtable[28]
	virtual void SpewDriverInfo(); // vtable[29]
	virtual void GetDXLevelDefaults(); // vtable[30]
	virtual void GetBackBufferDimensions(); // vtable[31]
	virtual void GetBackBufferFormat(); // vtable[32]
	virtual void SupportsHDRMode(); // vtable[33]
	virtual void AddView(); // vtable[34]
	virtual void RemoveView(); // vtable[35]
	virtual void SetView(); // vtable[36]
	virtual void BeginFrame(); // vtable[37]
	virtual void EndFrame(); // vtable[38]
	virtual void Flush(); // vtable[39]
	virtual void SwapBuffers(); // vtable[40]
	virtual void EvictManagedResources(); // vtable[41]
	virtual void ReleaseResources(); // vtable[42]
	virtual void ReacquireResources(); // vtable[43]
	virtual void AddReleaseFunc(); // vtable[44]
	virtual void RemoveReleaseFunc(); // vtable[45]
	virtual void AddRestoreFunc(); // vtable[46]
	virtual void RemoveRestoreFunc(); // vtable[47]
	virtual void ResetTempHWMemory(); // vtable[48]
	virtual void HandleDeviceLost(); // vtable[49]
	virtual void ShaderCount(); // vtable[50]
	virtual void GetShaders(); // vtable[51]
	virtual void ShaderFlagCount(); // vtable[52]
	virtual void ShaderFlagName(); // vtable[53]
	virtual void GetShaderFallback(); // vtable[54]
	virtual void GetMaterialProxyFactory(); // vtable[55]
	virtual void SetMaterialProxyFactory(); // vtable[56]
	virtual void EnableEditorMaterials(); // vtable[57]
	virtual void SetInStubMode(); // vtable[58]
	virtual void DebugPrintUsedMaterials(); // vtable[59]
	virtual void DebugPrintUsedTextures(); // vtable[60]
	virtual void ToggleSuppressMaterial(); // vtable[61]
	virtual void ToggleDebugMaterial(); // vtable[62]
	virtual void UsingFastClipping(); // vtable[63]
	virtual void StencilBufferBits(); // vtable[64]
	virtual void UncacheAllMaterials(); // vtable[65]
	virtual void UncacheUnusedMaterials(); // vtable[66]
	virtual void CacheUsedMaterials(); // vtable[67]
	virtual void ReloadTextures(); // vtable[68]
	virtual void ReloadMaterials(); // vtable[69]
	virtual void CreateMaterial(); // vtable[70]
	virtual void FindMaterial(); // vtable[71]
	virtual void IsMaterialLoaded(); // vtable[72]
	virtual void FirstMaterial(); // vtable[73]
	virtual void NextMaterial(); // vtable[74]
	virtual void InvalidMaterial(); // vtable[75]
	virtual void GetMaterial(); // vtable[76]
	virtual void GetNumMaterials(); // vtable[77]
	virtual void SetAsyncTextureLoadCache(); // vtable[78]
	virtual void FindTexture(); // vtable[79]
	virtual void IsTextureLoaded(); // vtable[80]
	virtual void CreateProceduralTexture(); // vtable[81]
	virtual void BeginRenderTargetAllocation(); // vtable[82]
	virtual void EndRenderTargetAllocation(); // vtable[83]
	virtual void CreateRenderTargetTexture(); // vtable[84]
	virtual void CreateNamedRenderTargetTextureEx(); // vtable[85]
	virtual void CreateNamedRenderTargetTexture(); // vtable[86]
	virtual void CreateNamedRenderTargetTextureEx2(); // vtable[87]
	virtual void BeginLightmapAllocation(); // vtable[88]
	virtual void EndLightmapAllocation(); // vtable[89]
	virtual void AllocateLightmap(); // vtable[90]
	virtual void AllocateWhiteLightmap(); // vtable[91]
	virtual void UpdateLightmap(); // vtable[92]
	virtual void GetNumSortIDs(); // vtable[93]
	virtual void GetSortInfo(); // vtable[94]
	virtual void GetLightmapPageSize(); // vtable[95]
	virtual void ResetMaterialLightmapPageInfo(); // vtable[96]
	virtual void ClearBuffers(); // vtable[97]
	virtual void GetRenderContext(); // vtable[98]
	virtual void SupportsShadowDepthTextures(); // vtable[99]
	virtual void BeginUpdateLightmaps(); // vtable[100]
	virtual void EndUpdateLightmaps(); // vtable[101]
	virtual void Lock(); // vtable[102]
	virtual void Unlock(); // vtable[103]
	virtual void GetShadowDepthTextureFormat(); // vtable[104]
	virtual void SupportsFetch4(); // vtable[105]
	virtual void SupportsCSAAMode(); // vtable[106]
	virtual void RemoveModeChangeCallBack(); // vtable[107]
	virtual void FindProceduralMaterial(); // vtable[108]
	virtual void GetNullTextureFormat(); // vtable[109]
	virtual void AddTextureAlias(); // vtable[110]
	virtual void RemoveTextureAlias(); // vtable[111]
	virtual void AllocateDynamicLightmap(); // vtable[112]
	virtual void SetExcludedTextures(); // vtable[113]
	virtual void UpdateExcludedTextures(); // vtable[114]
	virtual void IsInFrame(); // vtable[115]
	virtual void CompactMemory(); // vtable[116]
	virtual void ReloadFilesInList(); // vtable[117]
	virtual void AllowThreading(); // vtable[118]
	virtual void FindMaterialEx(); // vtable[119]
	virtual void DoStartupShaderPreloading(); // vtable[120]
	virtual void GMOD_FlushQueue(); // vtable[121]
	virtual void GMOD_TextureExists(); // vtable[122]
	virtual void GMOD_IsMaterialMissing(); // vtable[123]
	virtual void GMOD_GetErrorMaterial(); // vtable[124]
	virtual void GMOD_MarkMissing(); // vtable[125]
	virtual void GMOD_ClearMissing(); // vtable[126]
	virtual void CreateTextureFromBits(); // vtable[127]
	virtual void CreateNamedTextureFromBitsEx(); // vtable[128]
	virtual void GMOD_SetLightmapScale() override; // vtable[129]
	virtual void SetRealMaterialSystem(); // vtable[130]
	virtual void BindLocalCubemap(); // vtable[131]
	virtual void GetLocalCubemap(); // vtable[132]
	virtual void SetRenderTarget(); // vtable[133]
	virtual void GetRenderTarget(); // vtable[134]
	virtual void SetRenderTargetEx(); // vtable[135]
	virtual void GetRenderTargetEx(); // vtable[136]
	virtual void GetRenderTargetDimensions(); // vtable[137]
	virtual void OverrideDepthEnable(); // vtable[138]
	virtual void OverrideAlphaWriteEnable(); // vtable[139]
	virtual void OverrideColorWriteEnable(); // vtable[140]
	virtual void FlushLightmaps(); // vtable[141]
	virtual void Bind(); // vtable[142]
	virtual void BindLightmapPage(); // vtable[143]
	virtual void DepthRange(); // vtable[144]
	virtual void ClearBuffersObeyStencil(); // vtable[145]
	virtual void ClearBuffersObeyStencilEx(); // vtable[146]
	virtual void PerformFullScreenStencilOperation(); // vtable[147]
	virtual void ReadPixels(); // vtable[148]
	virtual void ReadPixelsAndStretch(); // vtable[149]
	virtual void SetAmbientLight(); // vtable[150]
	virtual void SetLight(); // vtable[151]
	virtual void SetLightingOrigin(); // vtable[152]
	virtual void SetAmbientLightCube(); // vtable[153]
	virtual void CopyRenderTargetToTexture(); // vtable[154]
	virtual void SetFrameBufferCopyTexture(); // vtable[155]
	virtual void GetFrameBufferCopyTexture(); // vtable[156]
	virtual void MatrixMode(); // vtable[157]
	virtual void PushMatrix(); // vtable[158]
	virtual void PopMatrix(); // vtable[159]
	virtual void LoadMatrix(); // vtable[160]
	virtual void LoadMatrix(); // vtable[161]
	virtual void LoadBoneMatrix(); // vtable[162]
	virtual void MultMatrix(); // vtable[163]
	virtual void MultMatrix(); // vtable[164]
	virtual void MultMatrixLocal(); // vtable[165]
	virtual void MultMatrixLocal(); // vtable[166]
	virtual void GetMatrix(); // vtable[167]
	virtual void GetMatrix(); // vtable[168]
	virtual void LoadIdentity(); // vtable[169]
	virtual void Ortho(); // vtable[170]
	virtual void PerspectiveX(); // vtable[171]
	virtual void PickMatrix(); // vtable[172]
	virtual void Rotate(); // vtable[173]
	virtual void Translate(); // vtable[174]
	virtual void Scale(); // vtable[175]
	virtual void Viewport(); // vtable[176]
	virtual void GetViewport(); // vtable[177]
	virtual void CullMode(); // vtable[178]
	virtual void SetHeightClipMode(); // vtable[179]
	virtual void GetHeightClipMode(); // vtable[180]
	virtual void SetHeightClipZ(); // vtable[181]
	virtual void FogMode(); // vtable[182]
	virtual void GetFogMode(); // vtable[183]
	virtual void FogStart(); // vtable[184]
	virtual void FogEnd(); // vtable[185]
	virtual void FogMaxDensity(); // vtable[186]
	virtual void SetFogZ(); // vtable[187]
	virtual void GetFogDistances(); // vtable[188]
	virtual void FogColor3f(); // vtable[189]
	virtual void FogColor3fv(); // vtable[190]
	virtual void FogColor3ub(); // vtable[191]
	virtual void FogColor3ubv(); // vtable[192]
	virtual void GetFogColor(); // vtable[193]
	virtual void SetNumBoneWeights(); // vtable[194]
	virtual void CreateStaticMesh(); // vtable[195]
	virtual void DestroyStaticMesh(); // vtable[196]
	virtual void GetDynamicMesh(); // vtable[197]
	virtual void GetDynamicMeshEx(); // vtable[198]
	virtual void GetFlexMesh(); // vtable[199]
	virtual void SelectionMode(); // vtable[200]
	virtual void SelectionBuffer(); // vtable[201]
	virtual void ClearSelectionNames(); // vtable[202]
	virtual void LoadSelectionName(); // vtable[203]
	virtual void PushSelectionName(); // vtable[204]
	virtual void PopSelectionName(); // vtable[205]
	virtual void GetNumShaders(); // vtable[206]
	virtual void GetShaderName(); // vtable[207]
	virtual void GetNumShaderParams(); // vtable[208]
	virtual void GetShaderParamName(); // vtable[209]
	virtual void GetShaderParamHelp(); // vtable[210]
	virtual void GetShaderParamType(); // vtable[211]
	virtual void GetShaderParamDefault(); // vtable[212]
	virtual void ClearColor3ub(); // vtable[213]
	virtual void ClearColor4ub(); // vtable[214]
	virtual void DrawScreenSpaceQuad(); // vtable[215]
	virtual void SyncToken(); // vtable[216]
	virtual void ComputePixelWidthOfSphere(); // vtable[217]
	virtual void ComputePixelDiameterOfSphere(); // vtable[218]
	virtual void CreateOcclusionQueryObject(); // vtable[219]
	virtual void DestroyOcclusionQueryObject(); // vtable[220]
	virtual void ResetOcclusionQueryObject(); // vtable[221]
	virtual void BeginOcclusionQueryDrawing(); // vtable[222]
	virtual void EndOcclusionQueryDrawing(); // vtable[223]
	virtual void OcclusionQuery_GetNumPixelsRendered(); // vtable[224]
	virtual void SetFlashlightMode(); // vtable[225]
	virtual void GetFlashlightMode(); // vtable[226]
	virtual void InFlashlightMode(); // vtable[227]
	virtual void SetFlashlightState(); // vtable[228]
	virtual void SetFlashlightStateEx(); // vtable[229]
	virtual void SetScissorRect(); // vtable[230]
	virtual void PushDeformation(); // vtable[231]
	virtual void PopDeformation(); // vtable[232]
	virtual void GetNumActiveDeformations(); // vtable[233]
	virtual void EnableUserClipTransformOverride(); // vtable[234]
	virtual void UserClipTransform(); // vtable[235]
	virtual void CreateMorph(); // vtable[236]
	virtual void DestroyMorph(); // vtable[237]
	virtual void BindMorph(); // vtable[238]
	virtual void SetMorphTargetFactors(); // vtable[239]
	virtual void SetToneMappingScaleLinear(); // vtable[240]
	virtual void GetWindowSize(); // vtable[241]
	virtual void AppUsesRenderTargets(); // vtable[242]
	virtual void DrawScreenSpaceRectangle(); // vtable[243]
	virtual void PushRenderTargetAndViewport(); // vtable[244]
	virtual void PushRenderTargetAndViewport(); // vtable[245]
	virtual void PushRenderTargetAndViewport(); // vtable[246]
	virtual void PushRenderTargetAndViewport(); // vtable[247]
	virtual void PopRenderTargetAndViewport(); // vtable[248]
	virtual void BindLightmapTexture(); // vtable[249]
	virtual void CopyRenderTargetToTextureEx(); // vtable[250]
	virtual void CopyTextureToRenderTargetEx(); // vtable[251]
	virtual void PerspectiveOffCenterX(); // vtable[252]
	virtual void SetFloatRenderingParameter(); // vtable[253]
	virtual void SetIntRenderingParameter(); // vtable[254]
	virtual void SetVectorRenderingParameter(); // vtable[255]
	virtual void GetToneMappingScaleLinear(); // vtable[256]
	virtual void GetMaxToRender(); // vtable[257]
	virtual void GetMaxVerticesToRender(); // vtable[258]
	virtual void GetMaxIndicesToRender(); // vtable[259]
	virtual void SetStencilEnable(); // vtable[260]
	virtual void SetStencilFailOperation(); // vtable[261]
	virtual void SetStencilZFailOperation(); // vtable[262]
	virtual void SetStencilPassOperation(); // vtable[263]
	virtual void SetStencilCompareFunction(); // vtable[264]
	virtual void SetStencilReferenceValue(); // vtable[265]
	virtual void SetStencilTestMask(); // vtable[266]
	virtual void SetStencilWriteMask(); // vtable[267]
	virtual void ClearStencilBufferRectangle(); // vtable[268]
	virtual void EnableColorCorrection(); // vtable[269]
	virtual void AddLookup(); // vtable[270]
	virtual void RemoveLookup(); // vtable[271]
	virtual void LockLookup(); // vtable[272]
	virtual void LoadLookup(); // vtable[273]
	virtual void UnlockLookup(); // vtable[274]
	virtual void SetLookupWeight(); // vtable[275]
	virtual void ResetLookupWeights(); // vtable[276]
	virtual void SetResetable(); // vtable[277]
	virtual void PushCustomClipPlane(); // vtable[278]
	virtual void PopCustomClipPlane(); // vtable[279]
	virtual void EnableClipping(); // vtable[280]
	virtual void PushHeightClipPlane(); // vtable[281]
	virtual void ResetToneMappingScale(); // vtable[282]
	virtual void TurnOnToneMapping(); // vtable[283]
	virtual void DisableAllLocalLights(); // vtable[284]
	virtual void CompareMaterialCombos(); // vtable[285]
	virtual void IsDX10Card(); // vtable[286]
	virtual void BeginPIXEvent(); // vtable[287]
	virtual void EndPIXEvent(); // vtable[288]
	virtual void SetPIXMarker(); // vtable[289]
	virtual void BeginRender(); // vtable[290]
	virtual void EndRender(); // vtable[291]
	virtual void BeginBatch(); // vtable[292]
	virtual void BindBatch(); // vtable[293]
	virtual void DrawBatch(); // vtable[294]
	virtual void EndBatch(); // vtable[295]
	virtual void SetGoalToneMappingScale(); // vtable[296]
	virtual void SetShadowDepthBiasFactors(); // vtable[297]
	virtual void GetCallQueue(); // vtable[298]
	virtual void GetWorldSpaceCameraPosition(); // vtable[299]
	virtual void GetWorldSpaceCameraVectors(); // vtable[300]
	virtual void GetDynamicVertexBuffer(); // vtable[301]
	virtual void GetDynamicIndexBuffer(); // vtable[302]
	virtual void CreateStaticVertexBuffer(); // vtable[303]
	virtual void CreateStaticIndexBuffer(); // vtable[304]
	virtual void DestroyVertexBuffer(); // vtable[305]
	virtual void DestroyIndexBuffer(); // vtable[306]
	virtual void GetDynamicVertexBuffer(); // vtable[307]
	virtual void GetDynamicIndexBuffer(); // vtable[308]
	virtual void BindVertexBuffer(); // vtable[309]
	virtual void BindIndexBuffer(); // vtable[310]
	virtual void Draw(); // vtable[311]
	virtual void BeginMorphAccumulation(); // vtable[312]
	virtual void EndMorphAccumulation(); // vtable[313]
	virtual void AccumulateMorph(); // vtable[314]
	virtual void GetMorphAccumulatorTexCoord(); // vtable[315]
	virtual void SetFlexWeights(); // vtable[316]
	virtual void SupportsNormalMapCompression(); // vtable[317]
	virtual void SupportsBorderColor(); // vtable[318]
	virtual void GetCurrentMaterial(); // vtable[319]
	virtual void GetCurrentNumBones(); // vtable[320]
	virtual void GetCurrentProxy(); // vtable[321]
	virtual void SetFullScreenDepthTextureValidityFlag(); // vtable[322]
	virtual void SetNonInteractivePacifierTexture(); // vtable[323]
	virtual void SetNonInteractiveTempFullscreenBuffer(); // vtable[324]
	virtual void EnableNonInteractiveMode(); // vtable[325]
	virtual void RefreshFrontBufferNonInteractive(); // vtable[326]
	virtual void LockRenderData(); // vtable[327]
	virtual void UnlockRenderData(); // vtable[328]
	virtual void IsRenderData(); // vtable[329]
	virtual void AddRefRenderData(); // vtable[330]
	virtual void ReleaseRenderData(); // vtable[331]
	virtual void PrintfVA(); // vtable[332]
	virtual void Printf(); // vtable[333]
	virtual void Knob(); // vtable[334]
	virtual void GMOD_ForceFilterMode(); // vtable[335]
	virtual void OverrideBlend(); // vtable[336]
	virtual void OverrideBlendSeparateAlpha(); // vtable[337]
	virtual void GetFogMaxDensity(); // vtable[338]
	virtual void ~CDummyMaterialSystem(); // vtable[339]
	virtual void ~CDummyMaterialSystem(); // vtable[340]

	void BindLocalCubemap();
	void GetLocalCubemap();
	void SetRenderTarget();
	void GetRenderTarget();
	void SetRenderTargetEx();
	void GetRenderTargetDimensions();
	void OverrideDepthEnable();
	void OverrideAlphaWriteEnable();
	void OverrideColorWriteEnable();
	void Bind();
	void BindLightmapPage();
	void DepthRange();
	void ClearBuffers();
	void ClearBuffersObeyStencil();
	void ClearBuffersObeyStencilEx();
	void PerformFullScreenStencilOperation();
	void ReadPixels();
	void ReadPixelsAndStretch();
	void SetAmbientLight();
	void SetLight();
	void SetLightingOrigin();
	void SetAmbientLightCube();
	void CopyRenderTargetToTexture();
	void SetFrameBufferCopyTexture();
	void GetFrameBufferCopyTexture();
	void Flush();
	void MatrixMode();
	void PushMatrix();
	void PopMatrix();
	void LoadMatrix();
	void LoadMatrix();
	void LoadBoneMatrix();
	void MultMatrix();
	void MultMatrix();
	void MultMatrixLocal();
	void MultMatrixLocal();
	void LoadIdentity();
	void Ortho();
	void PerspectiveX();
	void PickMatrix();
	void Rotate();
	void Translate();
	void Scale();
	void Viewport();
	void GetViewport();
	void CullMode();
	void SetHeightClipMode();
	void GetHeightClipMode();
	void SetHeightClipZ();
	void FogMode();
	void GetFogMode();
	void FogStart();
	void FogEnd();
	void FogMaxDensity();
	void SetFogZ();
	void GetFogDistances();
	void FogColor3f();
	void FogColor3fv();
	void FogColor3ub();
	void FogColor3ubv();
	void GetFogColor();
	void SetNumBoneWeights();
	void DestroyStaticMesh();
	void SelectionMode();
	void SelectionBuffer();
	void ClearSelectionNames();
	void LoadSelectionName();
	void PushSelectionName();
	void PopSelectionName();
	void ClearColor3ub();
	void ClearColor4ub();
	void DrawScreenSpaceQuad();
	void SyncToken();
	void ComputePixelWidthOfSphere();
	void ComputePixelDiameterOfSphere();
	void CreateOcclusionQueryObject();
	void DestroyOcclusionQueryObject();
	void ResetOcclusionQueryObject();
	void BeginOcclusionQueryDrawing();
	void EndOcclusionQueryDrawing();
	void OcclusionQuery_GetNumPixelsRendered();
	void SetFlashlightMode();
	void GetFlashlightMode();
	void SetFlashlightState();
	void SetFlashlightStateEx();
	void SetScissorRect();
	void PushDeformation();
	void PopDeformation();
	void GetNumActiveDeformations();
	void EnableUserClipTransformOverride();
	void UserClipTransform();
	void CreateMorph();
	void DestroyMorph();
	void BindMorph();
	void SetToneMappingScaleLinear();
	void DrawScreenSpaceRectangle();
	void PushRenderTargetAndViewport();
	void PushRenderTargetAndViewport();
	void PushRenderTargetAndViewport();
	void PushRenderTargetAndViewport();
	void PopRenderTargetAndViewport();
	void BindLightmapTexture();
	void CopyRenderTargetToTextureEx();
	void CopyTextureToRenderTargetEx();
	void PerspectiveOffCenterX();
	void SetFloatRenderingParameter();
	void SetIntRenderingParameter();
	void SetVectorRenderingParameter();
	void GetToneMappingScaleLinear();
	void GetMaxToRender();
	void GetMaxIndicesToRender();
	void SetStencilEnable();
	void SetStencilFailOperation();
	void SetStencilZFailOperation();
	void SetStencilCompareFunction();
	void SetStencilReferenceValue();
	void SetStencilTestMask();
	void SetStencilWriteMask();
	void ClearStencilBufferRectangle();
	void EnableColorCorrection();
	void AddLookup();
	void RemoveLookup();
	void LockLookup();
	void LoadLookup();
	void UnlockLookup();
	void SetLookupWeight();
	void ResetLookupWeights();
	void SetResetable();
	void PushCustomClipPlane();
	void PopCustomClipPlane();
	void EnableClipping();
	void ResetToneMappingScale();
	void TurnOnToneMapping();
	void DisableAllLocalLights();
	void CompareMaterialCombos();
	void BeginPIXEvent();
	void EndPIXEvent();
	void SetPIXMarker();
	void BeginRender();
	void EndRender();
	void BeginBatch();
	void BindBatch();
	void DrawBatch();
	void EndBatch();
	void SetGoalToneMappingScale();
	void SetShadowDepthBiasFactors();
	void GetCallQueue();
	void GetWorldSpaceCameraPosition();
	void GetWorldSpaceCameraVectors();
	void CreateStaticVertexBuffer();
	void CreateStaticIndexBuffer();
	void DestroyVertexBuffer();
	void DestroyIndexBuffer();
	void GetDynamicVertexBuffer();
	void GetDynamicIndexBuffer();
	void BindVertexBuffer();
	void BindIndexBuffer();
	void Draw();
	void BeginMorphAccumulation();
	void EndMorphAccumulation();
	void AccumulateMorph();
	void GetMorphAccumulatorTexCoord();
	void SetFlexWeights();
	void GetCurrentMaterial();
	void GetCurrentNumBones();
	void GetCurrentProxy();
	void SetFullScreenDepthTextureValidityFlag();
	void SetNonInteractivePacifierTexture();
	void SetNonInteractiveTempFullscreenBuffer();
	void EnableNonInteractiveMode();
	void RefreshFrontBufferNonInteractive();
	void LockRenderData();
	void UnlockRenderData();
	void IsRenderData();
	void AddRefRenderData();
	void ReleaseRenderData();
	void PrintfVA();
	void Printf();
	void Knob();
	void GMOD_ForceFilterMode();
	void GMOD_FlushQueue();
	void OverrideBlend();
	void OverrideBlendSeparateAlpha();
	void GetFogMaxDensity();
	void ~CDummyMaterialSystem();
	void ~CDummyMaterialSystem();
	void GetMatrix();
	void GetMatrix();
	void GetWindowSize();
	void CreateStaticMesh();
	void GetDynamicMesh();
	void GetDynamicMeshEx();
	void GetFlexMesh();
};
