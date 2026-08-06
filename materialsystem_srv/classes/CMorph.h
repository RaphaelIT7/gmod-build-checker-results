// Generated header

class CMorph : public IMorphInternal, public ITextureRegenerator
{
public:
	virtual void Lock(); // vtable[0]
	virtual void AddMorph() override; // vtable[1]
	virtual void Unlock() override; // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Bind(); // vtable[4]
	virtual void GetMorphFormat() override; // vtable[5]
	virtual void RegenerateTextureBits(); // vtable[6]
	virtual void Release(); // vtable[7]

	void WriteDeltaPositionNormalToTexture();
	void WriteSideSpeedToTexture();
	void RegenerateTextureBits();
	void BindMorphWeight();
	void ComputeMorphTextureSizeInBytes();
	void CleanUp();
	void IsLocked();
	void CreateAccumulatorMaterial();
	void Get4TupleCount();
	void DetermineTotalDeltaCount();
	void ComputeTextureDimensions();
	void CountStaticMeshVertices();
	void ComputeVertexFormat();
	void CreateStaticMesh();
	void ReportMorphStats();
	void RenderMorphQuads();
	void BuildNonZeroMorphList();
	void RenderMorphWeights();
	void AccumulateMorph();
	void ClearMorphStats();
	void DisplayMorphStats();
	void AccumulateMorphStats();
	void HandleMorphStats();
	void BuildSegmentList();
	void CMorph();
	void BuildQuadList();
	void ~CMorph();
	void PackMorphData();
	void Release();
};
