// Generated header

class CSceneCache : public IBaseCacheInfo
{
public:
	virtual void Save(CUtlBuffer *param_1); // vtable[0]
	virtual void Restore(CUtlBuffer *param_1); // vtable[1]
	virtual void Rebuild(char *param_1) override; // vtable[2]

	_GLOBAL__sub_I_CSceneCache(); // size[113]
	CSceneCache(); // size[56]
	void GetSoundCount(); // size[11]
	void GetSoundName(intparam_1); // size[37]
	void PrecacheSceneEvent(CChoreoEvent *param_1, CUtlVector *param_2); // size[280]
	CSceneCache(CSceneCache *param_1); // size[162]
};
