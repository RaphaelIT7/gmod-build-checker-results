// Generated header

class CEngineSoundServer : public IEngineSound
{
public:
	virtual void PrecacheSound(); // vtable[0]
	virtual void IsSoundPrecached(); // vtable[1]
	virtual void PrefetchSound(); // vtable[2]
	virtual void GetSoundDuration(); // vtable[3]
	virtual void EmitSound(); // vtable[4]
	virtual void EmitSound(); // vtable[5]
	virtual void EmitSentenceByIndex(); // vtable[6]
	virtual void StopSound(); // vtable[7]
	virtual void StopAllSounds(); // vtable[8]
	virtual void SetRoomType(); // vtable[9]
	virtual void SetPlayerDSP(); // vtable[10]
	virtual void EmitAmbientSound(); // vtable[11]
	virtual void GetDistGainFromSoundLevel(); // vtable[12]
	virtual void GetGuidForLastSoundEmitted(); // vtable[13]
	virtual void IsSoundStillPlaying(); // vtable[14]
	virtual void StopSoundByGuid(); // vtable[15]
	virtual void SetVolumeByGuid(); // vtable[16]
	virtual void GetActiveSounds(); // vtable[17]
	virtual void PrecacheSentenceGroup(); // vtable[18]
	virtual void NotifyBeginMoviePlayback(); // vtable[19]
	virtual void NotifyEndMoviePlayback(); // vtable[20]
	virtual void RegisterSound(); // vtable[21]
	virtual void IsSoundRegistered() override; // vtable[22]
	virtual void ~CEngineSoundServer(); // vtable[23]
	virtual void ~CEngineSoundServer(); // vtable[24]

	void CEngineSoundServer();
	void EmitSoundInternal();
};
