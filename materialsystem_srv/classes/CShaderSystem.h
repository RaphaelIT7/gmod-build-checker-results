// Generated header

class CShaderSystem : public IShaderSystemInternal
{
public:
	virtual void LoadTexture(); // vtable[0]
	virtual void LoadBumpMap(); // vtable[1]
	virtual void LoadCubeMap() override; // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void ModInit(); // vtable[5]
	virtual void ModShutdown() override; // vtable[6]
	virtual void LoadShaderDLL(); // vtable[7]
	virtual void UnloadShaderDLL(); // vtable[8]
	virtual void FindShader(); // vtable[9]
	virtual void ShaderStateString(); // vtable[10]
	virtual void ShaderStateCount(); // vtable[11]
	virtual void CreateDebugMaterials(); // vtable[12]
	virtual void CleanUpDebugMaterials(); // vtable[13]
	virtual void InitShaderParameters(); // vtable[14]
	virtual void InitShaderInstance(); // vtable[15]
	virtual void InitRenderState(); // vtable[16]
	virtual void CleanupRenderState(); // vtable[17]
	virtual void DrawElements(); // vtable[18]
	virtual void ShaderCount(); // vtable[19]
	virtual void GetShaders() override; // vtable[20]
	virtual void GetShaderAPITextureBindHandle(); // vtable[21]
	virtual void BindTexture(); // vtable[22]
	virtual void BindTexture(); // vtable[23]
	virtual void TakeSnapshot(); // vtable[24]
	virtual void DrawSnapshot(); // vtable[25]
	virtual void IsUsingGraphics(); // vtable[26]
	virtual void CanUseEditorMaterials(); // vtable[27]
	virtual void LoadShaderDLL(); // vtable[28]

	void CanUseEditorMaterials();
	void DrawSnapshot();
	void GetShaderAPITextureBindHandle();
	void BindTexture();
	void TakeSnapshot();
	void IsUsingGraphics();
	void BindTexture();
	void LoadCubeMap();
	void UnloadShaderDLL();
	void LoadModShaderDLLs();
	void VerifyBaseShaderDLL();
	void FindShaderDLL();
	void UnloadShaderDLL();
	void CleanupShaderDictionary();
	void BufferSpew();
	void PrintBufferedSpew();
	void PrepForShaderDraw();
	void DoneWithShaderDraw();
	void InitRenderStateFlags();
	void ComputeRenderStateFlagsFromSnapshot();
	void GetModulationSnapshotCount();
	void InitStateSnapshots();
	void ComputeVertexFormatFromSnapshot();
	void DrawUsingMaterial();
	void CopyMaterialVarToDebugShader();
	void DrawMeasureFillRate();
	void DrawNormalMap();
	void DrawEnvmapMask();
	void CShaderSystem();
	void UnloadAllShaderDLLs();
	void SetupShaderDictionary();
	void LoadAllShaderDLLs();
	void ~CShaderSystem();
};
