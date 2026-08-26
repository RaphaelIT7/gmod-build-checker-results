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
	virtual void DestroyMorph(IMorphInternal *param_1); // vtable[8]
	virtual void MaxHWMorphBatchCount(); // vtable[9]
	virtual void BeginMorphAccumulation(IMorphMgrRenderContext *param_1); // vtable[10]
	virtual void EndMorphAccumulation(IMorphMgrRenderContext *param_1); // vtable[11]
	virtual void AccumulateMorph(IMorphMgrRenderContext *param_1, IMorph *param_2, int param_3, MorphWeight_t *param_4); // vtable[12]
	virtual void AdvanceFrame(); // vtable[13]
	virtual void GetMorphAccumulatorTexCoord(IMorphMgrRenderContext *param_1, Vector2D *param_2, IMorph *param_3, int param_4); // vtable[14]
	virtual void AllocateRenderContext(); // vtable[15]
	virtual void FreeRenderContext(IMorphMgrRenderContext *param_1) override; // vtable[16]

	CMorphMgr(); // size[67]
	void ComputeWeightSubrect(int *param_1, int *param_2, int *param_3, int *param_4, int param_5); // size[71]
	void ComputeAccumulatorSubrect(int *param_1, int *param_2, int *param_3, int *param_4, int param_5); // size[71]
	void GetAccumulatorSubrectDimensions(int *param_1, int *param_2); // size[24]
	void GetAccumulator4TupleCount(); // size[10]
	void RegisterMorphSizeInBytes(int param_1); // size[14]
	void GetTotalMemoryUsage(); // size[137]
	void Display32FTextureData(float *param_1, int param_2, int *param_3, ITexture *param_4, int param_5); // size[212]
	void DebugMorphAccumulator(IMatRenderContext *param_1); // size[5]
	void DebugMorphWeights(IMatRenderContext *param_1); // size[5]
	void DrawMorphTempTexture(IMatRenderContext *param_1, IMaterial *param_2, ITexture *param_3); // size[292]
};
