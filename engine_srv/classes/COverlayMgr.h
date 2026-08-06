// Generated header

class COverlayMgr : public IOverlayMgr
{
public:
	virtual void LoadOverlays(); // vtable[0]
	virtual void UnloadOverlays(); // vtable[1]
	virtual void CreateFragments(); // vtable[2]
	virtual void ReSortMaterials(); // vtable[3]
	virtual void ClearRenderLists(); // vtable[4]
	virtual void ClearRenderLists(); // vtable[5]
	virtual void AddFragmentListToRenderList(); // vtable[6]
	virtual void RenderOverlays(); // vtable[7]
	virtual void SetOverlayBindProxy() override; // vtable[8]

	void FadeOverlayFragmentGlobal();
	void FadeOverlayFragment();
	void DrawBatches();
	void DrawFadedFragments();
	void RenderOverlaysBatch();
	void Surf_PostClipFragment();
	void Disp_PostClipFragment();
	void InitTexCoords();
	void DestroyStaticBuffers();
	void CleanupMaterial();
	void DestroyTempFragment();
	void GetMaterialSortID();
	void FindOrAddMesh();
	void BuildStaticBuffers();
	void AddFragmentToFragmentList();
	void CreateTempFragment();
	void Surf_PreClipFragment();
	void AddFragmentToFragmentList();
	void CopyTempFragment();
	void DoClipFragment();
	void Disp_DoClip();
	void Disp_ClipFragment();
	void BuildClipPlanes();
	void Surf_ClipFragment();
	void Surf_CreateFragments();
	void Disp_PreClipFragment();
	void Disp_CreateFragments();
	void ~COverlayMgr();
};
