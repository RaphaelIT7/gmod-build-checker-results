// Generated header

class CMDLCacheNotify : public IMDLCacheNotify
{
public:
	virtual void OnDataLoaded(MDLCacheDataType_t param_1, ushort param_2); // vtable[0]
	virtual void OnDataUnloaded(MDLCacheDataType_t param_1, ushort param_2); // vtable[1]

	void SetBoundsFromStudioHdr(model_t *param_1, ushort param_2); // size[188]
	void ComputeModelFlags(model_t *param_1, ushort param_2); // size[135]
};
