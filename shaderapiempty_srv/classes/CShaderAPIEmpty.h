// Generated header

class CShaderAPIEmpty : public IShaderAPI, public IHardwareConfigInternal, public IDebugTextureInfo
{
public:
	virtual void SetViewports(); // vtable[0]
	virtual void GetViewports(); // vtable[1]
	virtual void CurrentTime(); // vtable[2]
	virtual void GetLightmapDimensions(); // vtable[3]
	virtual void GetSceneFogMode(); // vtable[4]
	virtual void GetSceneFogColor() override; // vtable[5]
	virtual void MatrixMode(); // vtable[6]
	virtual void PushMatrix(); // vtable[7]
	virtual void PopMatrix(); // vtable[8]
	virtual void LoadMatrix(); // vtable[9]
	virtual void MultMatrix(); // vtable[10]
	virtual void MultMatrixLocal(); // vtable[11]
	virtual void GetMatrix(); // vtable[12]
	virtual void LoadIdentity(); // vtable[13]
	virtual void LoadCameraToWorld(); // vtable[14]
	virtual void Ortho(); // vtable[15]
	virtual void PerspectiveX(); // vtable[16]
	virtual void PickMatrix(); // vtable[17]
	virtual void Rotate(); // vtable[18]
	virtual void Translate(); // vtable[19]
	virtual void Scale(); // vtable[20]
	virtual void ScaleXY(); // vtable[21]
	virtual void Color3f(); // vtable[22]
	virtual void Color3fv(); // vtable[23]
	virtual void Color4f(); // vtable[24]
	virtual void Color4fv(); // vtable[25]
	virtual void Color3ub(); // vtable[26]
	virtual void Color3ubv(); // vtable[27]
	virtual void Color4ub(); // vtable[28]
	virtual void Color4ubv(); // vtable[29]
	virtual void SetVertexShaderConstant(); // vtable[30]
	virtual void SetPixelShaderConstant(); // vtable[31]
	virtual void SetDefaultState(); // vtable[32]
	virtual void GetWorldSpaceCameraPosition(); // vtable[33]
	virtual void GetCurrentNumBones(); // vtable[34]
	virtual void GetCurrentLightCombo(); // vtable[35]
	virtual void GetCurrentFogType(); // vtable[36]
	virtual void SetTextureTransformDimension(); // vtable[37]
	virtual void DisableTextureTransform(); // vtable[38]
	virtual void SetBumpEnvMatrix(); // vtable[39]
	virtual void SetVertexShaderIndex(); // vtable[40]
	virtual void SetPixelShaderIndex(); // vtable[41]
	virtual void GetBackBufferDimensions(); // vtable[42]
	virtual void GetMaxLights(); // vtable[43]
	virtual void GetLight(); // vtable[44]
	virtual void SetPixelShaderFogParams(); // vtable[45]
	virtual void SetVertexShaderStateAmbientLightCube(); // vtable[46]
	virtual void SetPixelShaderStateAmbientLightCube(); // vtable[47]
	virtual void CommitPixelShaderLighting(); // vtable[48]
	virtual void GetVertexModifyBuilder(); // vtable[49]
	virtual void InFlashlightMode(); // vtable[50]
	virtual void GetFlashlightState(); // vtable[51]
	virtual void InEditorMode(); // vtable[52]
	virtual void GetBoundMorphFormat(); // vtable[53]
	virtual void BindStandardTexture(); // vtable[54]
	virtual void GetRenderTargetEx(); // vtable[55]
	virtual void SetToneMappingScaleLinear(); // vtable[56]
	virtual void GetToneMappingScaleLinear(); // vtable[57]
	virtual void GetLightMapScaleFactor(); // vtable[58]
	virtual void LoadBoneMatrix(); // vtable[59]
	virtual void PerspectiveOffCenterX(); // vtable[60]
	virtual void SetFloatRenderingParameter(); // vtable[61]
	virtual void SetIntRenderingParameter(); // vtable[62]
	virtual void SetVectorRenderingParameter(); // vtable[63]
	virtual void GetFloatRenderingParameter(); // vtable[64]
	virtual void GetIntRenderingParameter(); // vtable[65]
	virtual void GetVectorRenderingParameter(); // vtable[66]
	virtual void SetStencilEnable(); // vtable[67]
	virtual void SetStencilFailOperation(); // vtable[68]
	virtual void SetStencilZFailOperation(); // vtable[69]
	virtual void SetStencilPassOperation(); // vtable[70]
	virtual void SetStencilCompareFunction(); // vtable[71]
	virtual void SetStencilReferenceValue() override; // vtable[72]
	virtual void SetStencilTestMask() override; // vtable[73]
	virtual void SetStencilWriteMask(); // vtable[74]
	virtual void ClearStencilBufferRectangle(); // vtable[75]
	virtual void GetDXLevelDefaults(); // vtable[76]
	virtual void GetFlashlightStateEx(); // vtable[77]
	virtual void GetAmbientLightCubeLuminance(); // vtable[78]
	virtual void GetDX9LightState(); // vtable[79]
	virtual void GetPixelFogCombo(); // vtable[80]
	virtual void BindStandardVertexTexture(); // vtable[81]
	virtual void IsHWMorphingEnabled(); // vtable[82]
	virtual void GetStandardTextureDimensions(); // vtable[83]
	virtual void SetBooleanVertexShaderConstant(); // vtable[84]
	virtual void SetIntegerVertexShaderConstant(); // vtable[85]
	virtual void SetBooleanPixelShaderConstant(); // vtable[86]
	virtual void SetIntegerPixelShaderConstant(); // vtable[87]
	virtual void ShouldWriteDepthToDestAlpha(); // vtable[88]
	virtual void PushDeformation(); // vtable[89]
	virtual void PopDeformation(); // vtable[90]
	virtual void GetNumActiveDeformations(); // vtable[91]
	virtual void GetPackedDeformationInformation(); // vtable[92]
	virtual void MarkUnusedVertexFields(); // vtable[93]
	virtual void ExecuteCommandBuffer(); // vtable[94]
	virtual void SetStandardTextureHandle(); // vtable[95]
	virtual void GetCurrentColorCorrection(); // vtable[96]
	virtual void SetPSNearAndFarZ(); // vtable[97]
	virtual void SetDepthFeatheringPixelShaderConstant(); // vtable[98]
	virtual void GMOD_SamplerBorderClamp() override; // vtable[99]
	virtual void ClearBuffers(); // vtable[100]
	virtual void ClearColor3ub(); // vtable[101]
	virtual void ClearColor4ub(); // vtable[102]
	virtual void BindVertexShader(); // vtable[103]
	virtual void BindGeometryShader(); // vtable[104]
	virtual void BindPixelShader(); // vtable[105]
	virtual void SetRasterState(); // vtable[106]
	virtual void SetMode(); // vtable[107]
	virtual void ChangeVideoMode(); // vtable[108]
	virtual void TakeSnapshot(); // vtable[109]
	virtual void TexMinFilter(); // vtable[110]
	virtual void TexMagFilter(); // vtable[111]
	virtual void TexWrap(); // vtable[112]
	virtual void CopyRenderTargetToTexture(); // vtable[113]
	virtual void Bind(); // vtable[114]
	virtual void FlushBufferedPrimitives(); // vtable[115]
	virtual void GetDynamicMesh(); // vtable[116]
	virtual void GetDynamicMeshEx(); // vtable[117]
	virtual void IsTranslucent(); // vtable[118]
	virtual void IsAlphaTested(); // vtable[119]
	virtual void UsesVertexAndPixelShaders(); // vtable[120]
	virtual void IsDepthWriteEnabled(); // vtable[121]
	virtual void ComputeVertexFormat(); // vtable[122]
	virtual void ComputeVertexUsage(); // vtable[123]
	virtual void BeginPass(); // vtable[124]
	virtual void RenderPass(); // vtable[125]
	virtual void SetNumBoneWeights(); // vtable[126]
	virtual void SetLight(); // vtable[127]
	virtual void SetLightingOrigin(); // vtable[128]
	virtual void SetAmbientLight(); // vtable[129]
	virtual void SetAmbientLightCube(); // vtable[130]
	virtual void ShadeMode(); // vtable[131]
	virtual void CullMode(); // vtable[132]
	virtual void ForceDepthFuncEquals(); // vtable[133]
	virtual void OverrideDepthEnable(); // vtable[134]
	virtual void SetHeightClipZ(); // vtable[135]
	virtual void SetHeightClipMode(); // vtable[136]
	virtual void SetClipPlane(); // vtable[137]
	virtual void EnableClipPlane(); // vtable[138]
	virtual void SetSkinningMatrices(); // vtable[139]
	virtual void GetNearestSupportedFormat(); // vtable[140]
	virtual void GetNearestRenderTargetFormat(); // vtable[141]
	virtual void DoRenderTargetsNeedSeparateDepthBuffer(); // vtable[142]
	virtual void CreateTexture(); // vtable[143]
	virtual void DeleteTexture(); // vtable[144]
	virtual void CreateDepthTexture(); // vtable[145]
	virtual void IsTexture(); // vtable[146]
	virtual void IsTextureResident(); // vtable[147]
	virtual void ModifyTexture(); // vtable[148]
	virtual void TexImage2D(); // vtable[149]
	virtual void TexSubImage2D(); // vtable[150]
	virtual void TexImageFromVTF(); // vtable[151]
	virtual void TexLock(); // vtable[152]
	virtual void TexUnlock(); // vtable[153]
	virtual void TexSetPriority(); // vtable[154]
	virtual void BindTexture(); // vtable[155]
	virtual void SetRenderTarget(); // vtable[156]
	virtual void ClearBuffersObeyStencil(); // vtable[157]
	virtual void ReadPixels(); // vtable[158]
	virtual void ReadPixels(); // vtable[159]
	virtual void FlushHardware(); // vtable[160]
	virtual void BeginFrame(); // vtable[161]
	virtual void EndFrame(); // vtable[162]
	virtual void SelectionMode(); // vtable[163]
	virtual void SelectionBuffer(); // vtable[164]
	virtual void ClearSelectionNames(); // vtable[165]
	virtual void LoadSelectionName(); // vtable[166]
	virtual void PushSelectionName(); // vtable[167]
	virtual void PopSelectionName(); // vtable[168]
	virtual void ForceHardwareSync(); // vtable[169]
	virtual void ClearSnapshots(); // vtable[170]
	virtual void FogStart(); // vtable[171]
	virtual void FogEnd(); // vtable[172]
	virtual void SetFogZ(); // vtable[173]
	virtual void SceneFogColor3ub(); // vtable[174]
	virtual void SceneFogMode(); // vtable[175]
	virtual void CanDownloadTextures(); // vtable[176]
	virtual void ResetRenderState(); // vtable[177]
	virtual void GetCurrentDynamicVBSize(); // vtable[178]
	virtual void DestroyVertexBuffers(); // vtable[179]
	virtual void EvictManagedResources(); // vtable[180]
	virtual void SetAnisotropicLevel(); // vtable[181]
	virtual void SyncToken(); // vtable[182]
	virtual void SetStandardVertexShaderConstants(); // vtable[183]
	virtual void CreateOcclusionQueryObject(); // vtable[184]
	virtual void DestroyOcclusionQueryObject(); // vtable[185]
	virtual void BeginOcclusionQueryDrawing(); // vtable[186]
	virtual void EndOcclusionQueryDrawing(); // vtable[187]
	virtual void OcclusionQuery_GetNumPixelsRendered(); // vtable[188]
	virtual void SetFlashlightState(); // vtable[189]
	virtual void ClearVertexAndPixelShaderRefCounts(); // vtable[190]
	virtual void PurgeUnusedVertexAndPixelShaders(); // vtable[191]
	virtual void DXSupportLevelChanged(); // vtable[192]
	virtual void EnableUserClipTransformOverride(); // vtable[193]
	virtual void UserClipTransform(); // vtable[194]
	virtual void ComputeMorphFormat(); // vtable[195]
	virtual void SetRenderTargetEx(); // vtable[196]
	virtual void CopyRenderTargetToTextureEx(); // vtable[197]
	virtual void CopyTextureToRenderTargetEx(); // vtable[198]
	virtual void HandleDeviceLost(); // vtable[199]
	virtual void EnableLinearColorSpaceFrameBuffer(); // vtable[200]
	virtual void SetFullScreenTextureHandle(); // vtable[201]
	virtual void SetFastClipPlane(); // vtable[202]
	virtual void EnableFastClip(); // vtable[203]
	virtual void GetMaxToRender(); // vtable[204]
	virtual void GetMaxVerticesToRender(); // vtable[205]
	virtual void GetMaxIndicesToRender(); // vtable[206]
	virtual void DisableAllLocalLights(); // vtable[207]
	virtual void CompareSnapshots(); // vtable[208]
	virtual void GetFlexMesh(); // vtable[209]
	virtual void SetFlashlightStateEx(); // vtable[210]
	virtual void SupportsMSAAMode(); // vtable[211]
	virtual void OwnGPUResources(); // vtable[212]
	virtual void GetFogDistances(); // vtable[213]
	virtual void BeginPIXEvent(); // vtable[214]
	virtual void EndPIXEvent(); // vtable[215]
	virtual void SetPIXMarker(); // vtable[216]
	virtual void EnableAlphaToCoverage(); // vtable[217]
	virtual void DisableAlphaToCoverage(); // vtable[218]
	virtual void ComputeVertexDescription(); // vtable[219]
	virtual void SupportsShadowDepthTextures(); // vtable[220]
	virtual void SetDisallowAccess(); // vtable[221]
	virtual void EnableShaderShaderMutex(); // vtable[222]
	virtual void ShaderLock(); // vtable[223]
	virtual void ShaderUnlock(); // vtable[224]
	virtual void GetShadowDepthTextureFormat(); // vtable[225]
	virtual void SupportsFetch4(); // vtable[226]
	virtual void SetShadowDepthBiasFactors(); // vtable[227]
	virtual void BindVertexBuffer(); // vtable[228]
	virtual void BindIndexBuffer(); // vtable[229]
	virtual void Draw(); // vtable[230]
	virtual void PerformFullScreenStencilOperation(); // vtable[231]
	virtual void SetScissorRect(); // vtable[232]
	virtual void SupportsCSAAMode(); // vtable[233]
	virtual void InvalidateDelayedShaderConstants(); // vtable[234]
	virtual void GammaToLinear_HardwareSpecific(); // vtable[235]
	virtual void LinearToGamma_HardwareSpecific(); // vtable[236]
	virtual void SetLinearToGammaConversionTextures(); // vtable[237]
	virtual void GetNullTextureFormat(); // vtable[238]
	virtual void BindVertexTexture(); // vtable[239]
	virtual void EnableHWMorphing(); // vtable[240]
	virtual void SetFlexWeights(); // vtable[241]
	virtual void FogMaxDensity(); // vtable[242]
	virtual void CreateTextures(); // vtable[243]
	virtual void AcquireThreadOwnership(); // vtable[244]
	virtual void ReleaseThreadOwnership(); // vtable[245]
	virtual void SupportsNormalMapCompression(); // vtable[246]
	virtual void EnableBuffer2FramesAhead(); // vtable[247]
	virtual void PrintfVA(); // vtable[248]
	virtual void Printf(); // vtable[249]
	virtual void Knob(); // vtable[250]
	virtual void OverrideAlphaWriteEnable(); // vtable[251]
	virtual void OverrideColorWriteEnable(); // vtable[252]
	virtual void ClearBuffersObeyStencilEx() override; // vtable[253]
	virtual void ~CShaderAPIEmpty(); // vtable[258]
	virtual void ~CShaderAPIEmpty(); // vtable[259]
	virtual void IsDebugTextureListFresh(); // vtable[260]
	virtual void SetDebugTextureRendering(); // vtable[261]
	virtual void EnableDebugTextureList(); // vtable[262]
	virtual void EnableGetAllTextures(); // vtable[263]
	virtual void GetDebugTextureList(); // vtable[264]
	virtual void GetTextureMemoryUsed(); // vtable[265]
	virtual void HasDestAlphaBuffer(); // vtable[266]
	virtual void HasStencilBuffer(); // vtable[267]
	virtual void MaxViewports(); // vtable[268]
	virtual void OverrideStreamOffsetSupport(); // vtable[269]
	virtual void GetShadowFilterMode(); // vtable[270]
	virtual void StencilBufferBits(); // vtable[271]
	virtual void GetFrameBufferColorDepth(); // vtable[272]
	virtual void GetSamplerCount(); // vtable[273]
	virtual void HasSetDeviceGammaRamp(); // vtable[274]
	virtual void SupportsCompressedTextures(); // vtable[275]
	virtual void SupportsCompressedVertices(); // vtable[276]
	virtual void SupportsVertexAndPixelShaders(); // vtable[277]
	virtual void SupportsPixelShaders_1_4(); // vtable[278]
	virtual void SupportsPixelShaders_2_0(); // vtable[279]
	virtual void SupportsPixelShaders_2_b(); // vtable[280]
	virtual void ActuallySupportsPixelShaders_2_b(); // vtable[281]
	virtual void SupportsStaticControlFlow(); // vtable[282]
	virtual void SupportsVertexShaders_2_0(); // vtable[283]
	virtual void SupportsShaderModel_3_0(); // vtable[284]
	virtual void MaximumAnisotropicLevel(); // vtable[285]
	virtual void MaxTextureWidth(); // vtable[286]
	virtual void MaxTextureHeight(); // vtable[287]
	virtual void MaxTextureAspectRatio(); // vtable[288]
	virtual void GetDXSupportLevel(); // vtable[289]
	virtual void GetShaderDLLName(); // vtable[290]
	virtual void TextureMemorySize(); // vtable[291]
	virtual void SupportsOverbright(); // vtable[292]
	virtual void SupportsCubeMaps(); // vtable[293]
	virtual void SupportsMipmappedCubemaps(); // vtable[294]
	virtual void SupportsNonPow2Textures(); // vtable[295]
	virtual void GetTextureStageCount(); // vtable[296]
	virtual void NumVertexShaderConstants(); // vtable[297]
	virtual void NumPixelShaderConstants(); // vtable[298]
	virtual void MaxNumLights(); // vtable[299]
	virtual void SupportsHardwareLighting(); // vtable[300]
	virtual void MaxBlendMatrices(); // vtable[301]
	virtual void MaxBlendMatrixIndices(); // vtable[302]
	virtual void MaxVertexShaderBlendMatrices(); // vtable[303]
	virtual void MaxUserClipPlanes(); // vtable[304]
	virtual void UseFastClipping(); // vtable[305]
	virtual void SpecifiesFogColorInLinearSpace(); // vtable[306]
	virtual void SupportsSRGB(); // vtable[307]
	virtual void FakeSRGBWrite(); // vtable[308]
	virtual void CanDoSRGBReadFromRTs(); // vtable[309]
	virtual void SupportsGLMixedSizeTargets(); // vtable[310]
	virtual void GetHWSpecificShaderDLLName(); // vtable[311]
	virtual void NeedsAAClamp(); // vtable[312]
	virtual void SupportsSpheremapping(); // vtable[313]
	virtual void MaxHWMorphBatchCount(); // vtable[314]
	virtual void GetMaxDXSupportLevel(); // vtable[315]
	virtual void ReadPixelsFromFrontBuffer(); // vtable[316]
	virtual void PreferDynamicTextures(); // vtable[317]
	virtual void PreferReducedFillrate(); // vtable[318]
	virtual void HasProjectedBumpEnv(); // vtable[319]
	virtual void SupportsHDR(); // vtable[320]
	virtual void GetHDRType(); // vtable[321]
	virtual void GetHardwareHDRType(); // vtable[322]
	virtual void NeedsATICentroidHack(); // vtable[323]
	virtual void SupportsColorOnSecondStream(); // vtable[324]
	virtual void SupportsStaticPlusDynamicLighting(); // vtable[325]
	virtual void SupportsStreamOffset(); // vtable[326]
	virtual void SupportsBorderColor(); // vtable[327]
	virtual void SupportsFetch4(); // vtable[328]
	virtual void IsAAEnabled(); // vtable[329]
	virtual void GetVertexTextureCount(); // vtable[330]
	virtual void GetMaxVertexTextureDimension(); // vtable[331]
	virtual void MaxTextureDepth(); // vtable[332]
	virtual void NeedsShaderSRGBConversion(); // vtable[333]
	virtual void UsesSRGBCorrectBlending(); // vtable[334]
	virtual void HasFastVertexTextures(); // vtable[335]
	virtual void GetVertexBufferCompression(); // vtable[336]
	virtual void SupportsHDRMode(); // vtable[337]
	virtual void IsDX10Card(); // vtable[338]
	virtual void GetHDREnabled(); // vtable[339]
	virtual void SetHDREnabled(); // vtable[340]
	virtual void SetTextureFilterMode(); // vtable[341]

	void HasDestAlphaBuffer();
	void HasStencilBuffer();
	void MaxViewports();
	void GetShadowFilterMode();
	void StencilBufferBits();
	void GetFrameBufferColorDepth();
	void HasSetDeviceGammaRamp();
	void SupportsCompressedTextures();
	void SupportsCompressedVertices();
	void SupportsVertexAndPixelShaders();
	void SupportsPixelShaders_1_4();
	void SupportsPixelShaders_2_0();
	void SupportsPixelShaders_2_b();
	void ActuallySupportsPixelShaders_2_b();
	void SupportsShaderModel_3_0();
	void SupportsStaticControlFlow();
	void SupportsVertexShaders_2_0();
	void MaximumAnisotropicLevel();
	void MaxTextureWidth();
	void MaxTextureHeight();
	void MaxTextureAspectRatio();
	void TextureMemorySize();
	void GetDXSupportLevel();
	void SupportsOverbright();
	void SupportsCubeMaps();
	void SupportsNonPow2Textures();
	void SupportsMipmappedCubemaps();
	void GetTextureStageCount();
	void NumVertexShaderConstants();
	void NumPixelShaderConstants();
	void MaxNumLights();
	void SupportsSpheremapping();
	void GetMaxDXSupportLevel();
	void SupportsHardwareLighting();
	void MaxBlendMatrices();
	void MaxBlendMatrixIndices();
	void MaxVertexShaderBlendMatrices();
	void MaxUserClipPlanes();
	void SpecifiesFogColorInLinearSpace();
	void SupportsSRGB();
	void FakeSRGBWrite();
	void CanDoSRGBReadFromRTs();
	void SupportsGLMixedSizeTargets();
	void GetHWSpecificShaderDLLName();
	void ReadPixelsFromFrontBuffer();
	void PreferDynamicTextures();
	void PreferReducedFillrate();
	void HasProjectedBumpEnv();
	void GetSamplerCount();
	void CShaderAPIEmpty();
	void NumBooleanVertexShaderConstants();
	void NumIntegerVertexShaderConstants();
	void UseSnapshot();
	void BindLightmap();
	void BindBumpLightmap();
	void BindFullbrightLightmap();
	void BindWhite();
	void BindBlack();
	void BindGrey();
	void BindFlatNormalMap();
	void BindNormalizationCubeMap();
	void BindSignedNormalizationCubeMap();
	void BindFBTexture();
	void FogMode();
	void FogColor3f();
	void FogColor3fv();
	void FogColor3ub();
	void FogColor3ubv();
	void RecordString();
	void IsDebugTextureListFresh();
	void SetDebugTextureRendering();
	void EnableDebugTextureList();
	void EnableGetAllTextures();
	void GetDebugTextureList();
	void GetTextureMemoryUsed();
	void OverrideStreamOffsetSupport();
	void GetShaderDLLName();
	void UseFastClipping();
	void NeedsAAClamp();
	void MaxHWMorphBatchCount();
	void SupportsHDR();
	void GetHDRType();
	void GetHardwareHDRType();
	void NeedsATICentroidHack();
	void SupportsColorOnSecondStream();
	void SupportsStaticPlusDynamicLighting();
	void SupportsStreamOffset();
	void SupportsNormalMapCompression();
	void SupportsBorderColor();
	void SupportsFetch4();
	void IsAAEnabled();
	void GetVertexTextureCount();
	void GetMaxVertexTextureDimension();
	void MaxTextureDepth();
	void NeedsShaderSRGBConversion();
	void UsesSRGBCorrectBlending();
	void HasFastVertexTextures();
	void SupportsHDRMode();
	void GetHDREnabled();
	void SetHDREnabled();
};
