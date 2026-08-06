// Generated header

class CSoundControllerImp : public CSoundEnvelopeController, public CAutoGameSystemPerFrame
{
public:
	virtual void SystemReset() override; // vtable[0]
	virtual void SystemUpdate() override; // vtable[1]
	virtual void Play() override; // vtable[2]
	virtual void CommandAdd() override; // vtable[3]
	virtual void CommandClear() override; // vtable[4]
	virtual void Shutdown() override; // vtable[5]
	virtual void SoundCreate() override; // vtable[6]
	virtual void SoundCreate() override; // vtable[7]
	virtual void SoundCreate() override; // vtable[8]
	virtual void SoundCreate() override; // vtable[9]
	virtual void SoundDestroy() override; // vtable[10]
	virtual void SoundChangePitch() override; // vtable[11]
	virtual void SoundChangeVolume() override; // vtable[12]
	virtual void SoundFadeOut() override; // vtable[13]
	virtual void SoundGetPitch() override; // vtable[14]
	virtual void SoundGetVolume() override; // vtable[15]
	virtual void SoundPlayEnvelope() override; // vtable[16]
	virtual void SoundPlayEnvelope() override; // vtable[17]
	virtual void CheckLoopingSoundsForPlayer() override; // vtable[18]
	virtual void SoundGetName(); // vtable[19]
	virtual void SoundSetCloseCaptionDuration(); // vtable[20]
	virtual void IsPlaying(); // vtable[21]
	virtual void GetDSP(); // vtable[22]
	virtual void SetDSP(); // vtable[23]
	virtual void SetSoundLevel(); // vtable[24]
	virtual void GetSoundLevel(); // vtable[25]
	virtual void GMOD_StopAll(); // vtable[26]
	virtual void GMOD_OnLuaObjectDeleted(); // vtable[27]
	virtual void GMOD_OnEntityDeleted() override; // vtable[28]
	virtual void OnRestore(); // vtable[29]
	virtual void PreClientUpdate(); // vtable[30]
	virtual void LevelShutdownPreEntity(); // vtable[31]
	virtual void ~CSoundControllerImp(); // vtable[32]
	virtual void ~CSoundControllerImp(); // vtable[33]

	void RemoveFromList();
	void SaveSoundPatch();
	void ProcessCommand();
	void OnRestore();
	void CommandInsert();
	void RestoreSoundPatch();
	void PreClientUpdate();
	void LevelShutdownPreEntity();
	void ~CSoundControllerImp();
	void ~CSoundControllerImp();
};
