// Generated header

class CSceneFileCache : public CBaseAppSystem
{
public:
	virtual void Connect(); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void GetSceneBufferSize(); // vtable[5]
	virtual void GetSceneData(); // vtable[6]
	virtual void GetSceneCachedData(); // vtable[7]
	virtual void GetSceneCachedSound(); // vtable[8]
	virtual void GetSceneString(); // vtable[9]
	virtual void Reload(); // vtable[10]

	void FindSceneInImage();
	void GetSceneDataFromImage();
	void ~CSceneFileCache();
};
