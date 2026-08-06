// Generated header

class CResourcePreloadModel : public CResourcePreload
{
public:
	virtual void CreateResource(char *param_1); // vtable[0]
	virtual void PurgeUnreferencedResources(); // vtable[1]
	virtual void OnEndMapLoading(bool param_1); // vtable[2]
	virtual void PurgeAll(); // vtable[3]

	void QueuedLoaderMapCallback(void *param_1, void *param_2, void *param_3, int param_4, LoaderError_t param_5); // size[30]
};
