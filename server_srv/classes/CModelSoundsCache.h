// Generated header

class CModelSoundsCache : public IBaseCacheInfo
{
public:
	virtual void Save(CUtlBuffer *param_1); // vtable[0]
	virtual void Restore(CUtlBuffer *param_1); // vtable[1]
	virtual void Rebuild(char *param_1) override; // vtable[2]

	_GLOBAL__sub_I_CModelSoundsCache(); // size[113]
	CModelSoundsCache(); // size[49]
	void GetSoundName(intparam_1); // size[37]
	void PrecacheSoundList(); // size[71]
	void FindOrAddScriptSound(CUtlVector *param_1, char *param_2); // size[114]
	void BuildAnimationEventSoundList(CStudioHdr *param_1, CUtlVector *param_2); // size[454]
	CModelSoundsCache(CModelSoundsCache *param_1); // size[156]
};
