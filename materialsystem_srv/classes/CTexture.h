// Generated header

class CTexture : public ITextureInternal
{
public:
	virtual void GetName(); // vtable[0]
	virtual void GetMappingWidth(); // vtable[1]
	virtual void GetMappingHeight(); // vtable[2]
	virtual void GetActualWidth(); // vtable[3]
	virtual void GetActualHeight(); // vtable[4]
	virtual void GetNumAnimationFrames(); // vtable[5]
	virtual void IsTranslucent(); // vtable[6]
	virtual void IsMipmapped(); // vtable[7]
	virtual void GetLowResColorSample(); // vtable[8]
	virtual void GetResourceData(); // vtable[9]
	virtual void IncrementReferenceCount(); // vtable[10]
	virtual void DecrementReferenceCount(); // vtable[11]
	virtual void SetTextureRegenerator(); // vtable[12]
	virtual void Download(); // vtable[13]
	virtual void GetApproximateVidMemBytes(); // vtable[14]
	virtual void IsError(); // vtable[15]
	virtual void IsVolumeTexture(); // vtable[16]
	virtual void GetMappingDepth(); // vtable[17]
	virtual void GetActualDepth(); // vtable[18]
	virtual void GetImageFormat(); // vtable[19]
	virtual void GetNormalDecodeMode(); // vtable[20]
	virtual void IsRenderTarget(); // vtable[21]
	virtual void IsCubeMap(); // vtable[22]
	virtual void IsNormalMap(); // vtable[23]
	virtual void IsProcedural(); // vtable[24]
	virtual void DeleteIfUnreferenced(); // vtable[25]
	virtual void SwapContents(); // vtable[26]
	virtual void GetFlags(); // vtable[27]
	virtual void ForceLODOverride(); // vtable[28]
	virtual void SaveToFile() override; // vtable[29]
	virtual void Bind(); // vtable[30]
	virtual void Bind(); // vtable[31]
	virtual void GetReferenceCount(); // vtable[32]
	virtual void GetReflectivity(); // vtable[33]
	virtual void SetRenderTarget(); // vtable[34]
	virtual void Release(); // vtable[35]
	virtual void OnRestore(); // vtable[36]
	virtual void SetFilteringAndClampingMode(); // vtable[37]
	virtual void Precache(); // vtable[38]
	virtual void CopyFrameBufferToMe(); // vtable[39]
	virtual void CopyMeToFrameBuffer(); // vtable[40]
	virtual void GetEmbeddedTexture(); // vtable[41]
	virtual void GetTextureHandle(); // vtable[42]
	virtual void ~CTexture() override; // vtable[43]
	virtual void ~CTexture() override; // vtable[44]
	virtual void SetRenderTarget(); // vtable[45]
	virtual void BindVertexTexture(); // vtable[46]
	virtual void MarkAsPreloaded(); // vtable[47]
	virtual void IsPreloaded(); // vtable[48]
	virtual void MarkAsExcluded(); // vtable[49]
	virtual void UpdateExcludedState(); // vtable[50]
	virtual void IsTempRenderTarget(); // vtable[51]
	virtual void ReloadFilesInList() override; // vtable[52]

	void AllocateTextureHandles();
	void ReleaseTextureHandles();
	void GetScratchVTFTexture();
	void FreeOptimalReadBuffer();
	void GetOptimalReadBuffer();
	void ApplyRenderTargetSizeMode();
	void AllocateTextureHandles();
	void ReleaseTextureHandles();
	void AllocateShaderAPITextures();
	void FreeShaderAPITextures();
	void Init();
	void ComputeActualFormat();
	void ComputeActualMipCount();
	void ComputeActualSize();
	void Modify();
	void SetWrapState();
	void SetFilterState();
	void GetTextureGroupName();
	void SetName();
	void InitFileTexture();
	void InitProceduralTexture();
	void InitRenderTarget();
	void HasBeenAllocated();
	void LoadLowResTexture();
	void GenerateShowMipLevelsTextures();
	void CopyLowResImageToTexture();
	void SetupDebuggingTextures();
	void ConvertToActualFormat();
	void GetFilename();
	void ReloadFilesInList();
	void HandleFileLoadFailedTexture();
	void ComputeMipLevelSubRect();
	void GetDownloadFaceCount();
	void FixupTexture();
	void ReconstructPartialProceduralBits();
	void ReconstructPartialTexture();
	void ReconstructProceduralBits();
	void WriteDataToShaderAPITexture();
	void IsDepthTextureFormat();
	void NotifyUnloadedFile();
	void Shutdown();
	void CTexture();
	void LoadTextureBitsFromFile();
	void ReconstructTexture();
	void DownloadTexture();
};
