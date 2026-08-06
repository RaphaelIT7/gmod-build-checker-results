// Generated header

class CSoundEnt : public CPointEntity
{
public:
	virtual void _ZN9CSoundEntD2Ev() override; // vtable[0]
	virtual void ~CSoundEnt() override; // vtable[1]

	void GetBaseMap();
	void InitSoundEnt();
	void ShutdownSoundEnt();
	void CSoundEnt();
	void FreeSound();
	void IAllocSound();
	void FindOrAllocateSound();
	void InsertSound();
	void Initialize();
	void ISoundsInList();
	void ActiveList();
	void FreeList();
	void SoundPointerForIndex();
	void ClientSoundIndex();
	void GetLoudestSoundOfType();
};
