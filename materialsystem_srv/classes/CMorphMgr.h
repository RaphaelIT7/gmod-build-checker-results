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

	void CMorphMgr();
	void ComputeWeightSubrect();
	void ComputeAccumulatorSubrect();
	void GetAccumulatorSubrectDimensions();
	void GetAccumulator4TupleCount();
	void RegisterMorphSizeInBytes();
	void GetTotalMemoryUsage();
	void Display32FTextureData();
	void DebugMorphAccumulator();
	void DebugMorphWeights();
	void DrawMorphTempTexture();
};
