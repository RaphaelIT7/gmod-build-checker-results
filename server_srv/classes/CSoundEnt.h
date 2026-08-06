// Generated header

class CSoundEnt : public CPointEntity
{
public:
	virtual _ZN9CSoundEntD2Ev() override; // vtable[0]
	virtual ~CSoundEnt() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void OnRestore() override; // vtable[45]
	virtual void Think() override; // vtable[48]

	void GetBaseMap(); // size[10]
	void InitSoundEnt(); // size[143]
	void ShutdownSoundEnt(); // size[61]
	CSoundEnt(); // size[34]
	void FreeSound(intparam_1, intparam_2); // size[176]
	void IAllocSound(); // size[214]
	void FindOrAllocateSound(CBaseEntity *param_1, intparam_2); // size[157]
	void InsertSound(intparam_1, Vector *param_2, intparam_3, floatparam_4, CBaseEntity *param_5, intparam_6, CBaseEntity *param_7); // size[610]
	void Initialize(); // size[305]
	void ISoundsInList(intparam_1); // size[83]
	void ActiveList(); // size[66]
	void FreeList(); // size[66]
	void SoundPointerForIndex(intparam_1); // size[139]
	void ClientSoundIndex(edict_t *param_1); // size[26]
	void GetLoudestSoundOfType(intparam_1, Vector *param_2); // size[252]
};
