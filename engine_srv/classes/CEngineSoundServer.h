// Generated header

class CEngineSoundServer : public IEngineSound
{
public:
	virtual void PrecacheSound(char *param_1, boolparam_2, boolparam_3); // vtable[0]
	virtual void IsSoundPrecached(char *param_1); // vtable[1]
	virtual void PrefetchSound(char *param_1); // vtable[2]
	virtual void GetSoundDuration(char *param_1); // vtable[3]
	virtual void EmitSound(IRecipientFilter *param_1, intparam_2, intparam_3, char *param_4, floatparam_5, floatparam_6, intparam_7, intparam_8, intparam_9, Vector *param_10, Vector *param_11, CUtlVector *param_12, boolparam_13, doubleparam_14, intparam_15); // vtable[4]
	virtual void EmitSound(IRecipientFilter *param_1, intparam_2, intparam_3, char *param_4, floatparam_5, soundlevel_tparam_6, intparam_7, intparam_8, intparam_9, Vector *param_10, Vector *param_11, CUtlVector *param_12, boolparam_13, doubleparam_14, intparam_15); // vtable[5]
	virtual void EmitSentenceByIndex(IRecipientFilter *param_1, intparam_2, intparam_3, intparam_4, floatparam_5, soundlevel_tparam_6, intparam_7, intparam_8, intparam_9, Vector *param_10, Vector *param_11, CUtlVector *param_12, boolparam_13, doubleparam_14, intparam_15); // vtable[6]
	virtual void StopSound(intparam_1, intparam_2, char *param_3); // vtable[7]
	virtual void StopAllSounds(boolparam_1); // vtable[8]
	virtual void SetRoomType(IRecipientFilter *param_1, intparam_2); // vtable[9]
	virtual void SetPlayerDSP(IRecipientFilter *param_1, intparam_2, boolparam_3); // vtable[10]
	virtual void EmitAmbientSound(char *param_1, floatparam_2, intparam_3, intparam_4, doubleparam_5); // vtable[11]
	virtual void GetDistGainFromSoundLevel(soundlevel_tparam_1, floatparam_2); // vtable[12]
	virtual void GetGuidForLastSoundEmitted(); // vtable[13]
	virtual void IsSoundStillPlaying(intparam_1); // vtable[14]
	virtual void StopSoundByGuid(intparam_1); // vtable[15]
	virtual void SetVolumeByGuid(intparam_1, floatparam_2); // vtable[16]
	virtual void GetActiveSounds(CUtlVector *param_1); // vtable[17]
	virtual void PrecacheSentenceGroup(char *param_1); // vtable[18]
	virtual void NotifyBeginMoviePlayback(); // vtable[19]
	virtual void NotifyEndMoviePlayback(); // vtable[20]
	virtual void RegisterSound(char *param_1, char *param_2, intparam_3, floatparam_4, intparam_5); // vtable[21]
	virtual void IsSoundRegistered(char *param_1) override; // vtable[22]
	virtual ~CEngineSoundServer(); // vtable[23]
	virtual ~CEngineSoundServer(); // vtable[24]

	CEngineSoundServer(); // size[14]
	void EmitSoundInternal(IRecipientFilter *param_1, intparam_2, intparam_3, char *param_4, floatparam_5, soundlevel_tparam_6, intparam_7, intparam_8, intparam_9, Vector *param_10, Vector *param_11, CUtlVector *param_12, boolparam_13, doubleparam_14, intparam_15); // size[273]
};
