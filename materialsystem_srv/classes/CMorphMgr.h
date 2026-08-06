// Generated header

class CMorphMgr : public IMorphMgr
{
public:
	virtual void ShouldAllocateScratchTextures(); // vtable[0]
	virtual void AllocateScratchTextures(); // vtable[1]
	virtual void FreeScratchTextures(); // vtable[2]
	virtual void _ZN9CMorphMgr17AllocateMaterialsEv(); // vtable[3]
	virtual void FreeMaterials(); // vtable[4]
	virtual void MorphAccumulator(); // vtable[5]
	virtual void MorphWeights(); // vtable[6]
	virtual void CreateMorph(); // vtable[7]
	virtual void DestroyMorph(); // vtable[8]
	virtual void MaxHWMorphBatchCount(); // vtable[9]
	virtual void BeginMorphAccumulation(); // vtable[10]
	virtual void EndMorphAccumulation(); // vtable[11]
	virtual void AccumulateMorph(); // vtable[12]
	virtual void AdvanceFrame(); // vtable[13]
	virtual void GetMorphAccumulatorTexCoord(); // vtable[14]
	virtual void AllocateRenderContext(); // vtable[15]
	virtual void FreeRenderContext() override; // vtable[16]

	CMorphMgr(); // size[0]
	void ComputeWeightSubrect(); // size[0]
	void ComputeAccumulatorSubrect(); // size[0]
	void GetAccumulatorSubrectDimensions(); // size[0]
	void GetAccumulator4TupleCount(); // size[0]
	void RegisterMorphSizeInBytes(); // size[0]
	void GetTotalMemoryUsage(); // size[0]
	void Display32FTextureData(); // size[0]
	void DebugMorphAccumulator(); // size[0]
	void DebugMorphWeights(); // size[0]
	void DrawMorphTempTexture(); // size[0]
};
