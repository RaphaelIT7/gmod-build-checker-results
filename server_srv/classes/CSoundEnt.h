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

	void GetBaseMap(); // size[0]
	void InitSoundEnt(); // size[0]
	void ShutdownSoundEnt(); // size[0]
	CSoundEnt(); // size[0]
	void FreeSound(); // size[0]
	void IAllocSound(); // size[0]
	void FindOrAllocateSound(); // size[0]
	void InsertSound(); // size[0]
	void Initialize(); // size[0]
	void ISoundsInList(); // size[0]
	void ActiveList(); // size[0]
	void FreeList(); // size[0]
	void SoundPointerForIndex(); // size[0]
	void ClientSoundIndex(); // size[0]
	void GetLoudestSoundOfType(); // size[0]
};
