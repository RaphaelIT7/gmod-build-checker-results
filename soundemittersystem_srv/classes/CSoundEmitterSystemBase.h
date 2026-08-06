// Generated header

class CSoundEmitterSystemBase : public ISoundEmitterSystemBase
{
public:
	virtual void Connect(); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown() override; // vtable[4]
	virtual void ModInit(); // vtable[5]
	virtual void ModShutdown(); // vtable[6]
	virtual void GetSoundIndex(); // vtable[7]
	virtual void IsValidIndex(); // vtable[8]
	virtual void GetSoundCount(); // vtable[9]
	virtual void GetSoundName(); // vtable[10]
	virtual void GetParametersForSound(); // vtable[11]
	virtual void GetWaveName(); // vtable[12]
	virtual void AddWaveName(); // vtable[13]
	virtual void LookupSoundLevel(); // vtable[14]
	virtual void GetWavFileForSound(); // vtable[15]
	virtual void GetWavFileForSound(); // vtable[16]
	virtual void CheckForMissingWavFiles(); // vtable[17]
	virtual void GetSourceFileForSound(); // vtable[18]
	virtual void First(); // vtable[19]
	virtual void Next(); // vtable[20]
	virtual void InvalidIndex(); // vtable[21]
	virtual void InternalGetParametersForSound(); // vtable[22]
	virtual void AddSound(); // vtable[23]
	virtual void RemoveSound(); // vtable[24]
	virtual void MoveSound(); // vtable[25]
	virtual void RenameSound(); // vtable[26]
	virtual void UpdateSoundParameters(); // vtable[27]
	virtual void GetNumSoundScripts(); // vtable[28]
	virtual void GetSoundScriptName(); // vtable[29]
	virtual void IsSoundScriptDirty(); // vtable[30]
	virtual void FindSoundScript(); // vtable[31]
	virtual void SaveChangesToSoundScript(); // vtable[32]
	virtual void ExpandSoundNameMacros(); // vtable[33]
	virtual void GetActorGender(); // vtable[34]
	virtual void GenderExpandString(); // vtable[35]
	virtual void GenderExpandString(); // vtable[36]
	virtual void IsUsingGenderToken(); // vtable[37]
	virtual void GetManifestFileTimeChecksum(); // vtable[38]
	virtual void AddSoundOverrides(); // vtable[39]
	virtual void ClearSoundOverrides(); // vtable[40]
	virtual void GetParametersForSoundEx(); // vtable[41]
	virtual void LookupSoundLevelByHandle(); // vtable[42]
	virtual void ReloadSoundEntriesInList(); // vtable[43]
	virtual void AddSoundOverride(); // vtable[44]
	virtual void SetActorGender(); // vtable[45]
	virtual void GMOD_ReloadSoundScripts() override; // vtable[46]
	virtual void ~CSoundEmitterSystemBase(); // vtable[47]
	virtual void ~CSoundEmitterSystemBase(); // vtable[48]

	void _GLOBAL__sub_I_CSoundEmitterSystemBase();
	void AddSoundName();
	void TranslateAttenuation();
	void InitSoundInternalParameters();
	void TranslateSoundLevel();
	void TranslateChannel();
	void CSoundEmitterSystemBase();
	void EnsureAvailableSlotsForGender();
	void FindBestSoundForGender();
	void LoadGlobalActors();
	void AddSoundsFromFile();
};
