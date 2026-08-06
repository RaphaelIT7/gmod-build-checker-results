// Generated header

class CTextureManager : public ITextureManager
{
public:
	virtual void Init(); // vtable[0]
	virtual void Shutdown(); // vtable[1]
	virtual void AllocateStandardRenderTargets(); // vtable[2]
	virtual void FreeStandardRenderTargets(); // vtable[3]
	virtual void CacheExternalStandardRenderTargets(); // vtable[4]
	virtual void CreateProceduralTexture(); // vtable[5]
	virtual void CreateRenderTargetTexture(); // vtable[6]
	virtual void FindOrLoadTexture(); // vtable[7]
	virtual void ResetTextureFilteringState(); // vtable[8]
	virtual void ReloadTextures(); // vtable[9]
	virtual void ReleaseTextures(); // vtable[10]
	virtual void RestoreRenderTargets(); // vtable[11]
	virtual void RestoreNonRenderTargetTextures(); // vtable[12]
	virtual void GMOD_TextureExists(); // vtable[13]
	virtual void GMOD_RestoreTextures(); // vtable[14]
	virtual void RemoveUnusedTextures(); // vtable[15]
	virtual void DebugPrintUsedTextures(); // vtable[16]
	virtual void RequestNextTextureID(); // vtable[17]
	virtual void ErrorTexture(); // vtable[18]
	virtual void NormalizationCubemap(); // vtable[19]
	virtual void SignedNormalizationCubemap(); // vtable[20]
	virtual void ColorCorrectionTexture(); // vtable[21]
	virtual void ShadowNoise2D(); // vtable[22]
	virtual void IdentityLightWarp(); // vtable[23]
	virtual void FullFrameDepthTexture(); // vtable[24]
	virtual void GenerateErrorTexture(); // vtable[25]
	virtual void SetColorCorrectionTexture(); // vtable[26]
	virtual void ForceAllTexturesIntoHardware(); // vtable[27]
	virtual void IsTextureLoaded(); // vtable[28]
	virtual void RemoveTexture(); // vtable[29]
	virtual void FindNext(); // vtable[30]
	virtual void AddTextureAlias(); // vtable[31]
	virtual void RemoveTextureAlias(); // vtable[32]
	virtual void SetExcludedTextures(); // vtable[33]
	virtual void UpdateExcludedTextures(); // vtable[34]
	virtual void ReleaseTempRenderTargetBits(); // vtable[35]
	virtual void ReloadFilesInList(); // vtable[36]
	virtual void GMOD_UpdatePostAsync() override; // vtable[37]

	void RestoreTexture();
	void LoadTexture();
	void CTextureManager();
	void AddTextureAlias();
	void FindTexture();
	void GMOD_RemoveTexture();
	void CleanupPossiblyUnreferencedTextures();
	void ~CTextureManager();
};
