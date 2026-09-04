// Generated header

class CSceneFileCache : public CBaseAppSystem
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(char *param_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void GetSceneBufferSize(char *param_1); // vtable[5]
	virtual void GetSceneData(char *param_1, uchar *param_2, uint param_3); // vtable[6]
	virtual void GetSceneCachedData(char *param_1, SceneCachedData_t *param_2); // vtable[7]
	virtual void GetSceneCachedSound(int param_1, int param_2); // vtable[8]
	virtual void GetSceneString(short param_1); // vtable[9]
	virtual void Reload(); // vtable[10]

	void FindSceneInImage(char *param_1); // size[349]
	void GetSceneDataFromImage(char *param_1, int param_2, uchar *param_3, uint *param_4); // size[334]
	~CSceneFileCache(); // size[24]
};
