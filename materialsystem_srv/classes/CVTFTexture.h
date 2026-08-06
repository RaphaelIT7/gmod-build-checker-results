// Generated header

class CVTFTexture : public IVTFTexture
{
public:
	virtual void ~CVTFTexture() override; // vtable[0]
	virtual void ~CVTFTexture() override; // vtable[1]
	virtual void Init(); // vtable[2]
	virtual void SetBumpScale(); // vtable[3]
	virtual void SetReflectivity(); // vtable[4]
	virtual void InitLowResImage(); // vtable[5]
	virtual void SetResourceData(); // vtable[6]
	virtual void GetResourceData(); // vtable[7]
	virtual void HasResourceEntry(); // vtable[8]
	virtual void GetResourceTypes(); // vtable[9]
	virtual void Unserialize(); // vtable[10]
	virtual void Serialize(); // vtable[11]
	virtual void LowResFileInfo(); // vtable[12]
	virtual void ImageFileInfo(); // vtable[13]
	virtual void FileSize(); // vtable[14]
	virtual void Width(); // vtable[15]
	virtual void Height(); // vtable[16]
	virtual void Depth(); // vtable[17]
	virtual void MipCount(); // vtable[18]
	virtual void RowSizeInBytes(); // vtable[19]
	virtual void FaceSizeInBytes(); // vtable[20]
	virtual void Format(); // vtable[21]
	virtual void FaceCount(); // vtable[22]
	virtual void FrameCount(); // vtable[23]
	virtual void Flags(); // vtable[24]
	virtual void BumpScale(); // vtable[25]
	virtual void LowResWidth(); // vtable[26]
	virtual void LowResHeight(); // vtable[27]
	virtual void LowResFormat(); // vtable[28]
	virtual void Reflectivity(); // vtable[29]
	virtual void IsCubeMap(); // vtable[30]
	virtual void IsNormalMap(); // vtable[31]
	virtual void IsVolumeTexture(); // vtable[32]
	virtual void ComputeMipLevelDimensions(); // vtable[33]
	virtual void ComputeMipSize(); // vtable[34]
	virtual void ComputeMipLevelSubRect(); // vtable[35]
	virtual void ComputeFaceSize(); // vtable[36]
	virtual void ComputeTotalSize(); // vtable[37]
	virtual void ImageData(); // vtable[38]
	virtual void ImageData(); // vtable[39]
	virtual void ImageData(); // vtable[40]
	virtual void LowResImageData(); // vtable[41]
	virtual void ConvertImageFormat(); // vtable[42]
	virtual void GenerateSpheremap(); // vtable[43]
	virtual void GenerateHemisphereMap(); // vtable[44]
	virtual void FixCubemapFaceOrientation(); // vtable[45]
	virtual void GenerateMipmaps(); // vtable[46]
	virtual void PutOneOverMipLevelInAlpha(); // vtable[47]
	virtual void ComputeReflectivity(); // vtable[48]
	virtual void ComputeAlphaFlags(); // vtable[49]
	virtual void ConstructLowResImage(); // vtable[50]
	virtual void PostProcess(); // vtable[51]
	virtual void MatchCubeMapBorders(); // vtable[52]
	virtual void SetAlphaTestThreshholds(); // vtable[53]
	virtual void SetPostProcessingSettings() override; // vtable[54]
	virtual void NormalizeTopMipLevel(); // vtable[55]

	void ComputeMipCount();
	void AllocateImageData();
	void AllocateData();
	void AllocateLowResImageData();
	void ReleaseResources();
	void Shutdown();
	void LoadLowResData();
	void LoadImageData();
	void LoadData();
	void WriteData();
	void SetupByteSwap();
	void ReadHeader();
	void LoadNewResources();
	void FindResourceEntryInfo();
	void FindResourceEntryInfo();
	void WriteImageData();
	void GetImageOffset();
	void ComputeSpheremapFrame();
	void ComputeHemispheremapFrame();
	void SetupFaceVert();
	void SetupEdgeIncrement();
	void SetupTextureEdgeIncrements();
	void BlendCubeMapFaceEdges();
	void BlendCubeMapFaceCorners();
	void BuildCubeMapMatchLists();
	void BlendCubeMapEdgePalettes();
	void BlendCubeMapCornerPalettes();
	void MatchCubeMapS3TCPalettes();
	void CVTFTexture();
	void RemoveResourceEntryInfo();
	void FindOrCreateResourceEntryInfo();
};
