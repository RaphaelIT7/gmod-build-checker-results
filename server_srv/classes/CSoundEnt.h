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
	void FreeSound(int param_1, int param_2); // size[176]
	void IAllocSound(); // size[214]
	void FindOrAllocateSound(CBaseEntity *param_1, int param_2); // size[157]
	void InsertSound(int param_1, Vector *param_2, int param_3, float param_4, CBaseEntity *param_5, int param_6, CBaseEntity *param_7); // size[610]
	void Initialize(); // size[305]
	void ISoundsInList(int param_1); // size[83]
	void ActiveList(); // size[66]
	void FreeList(); // size[66]
	void SoundPointerForIndex(int param_1); // size[139]
	void ClientSoundIndex(edict_t *param_1); // size[26]
	void GetLoudestSoundOfType(int param_1, Vector *param_2); // size[252]
};
