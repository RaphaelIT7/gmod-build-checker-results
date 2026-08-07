// Generated header

class CSoundscapeSystem : public CAutoGameSystemPerFrame
{
public:
	virtual void Init() override; // vtable[1]
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual ~CSoundscapeSystem() override; // vtable[13]
	virtual ~CSoundscapeSystem() override; // vtable[14]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]
	virtual void AddSoundscapeFile(char *param_1, char *param_2); // vtable[19]

	void PrintDebugInfo(); // size[286]
	void LoadManifestFile(char *param_1); // size[142]
	void FlushSoundscapes(); // size[25]
	void GetSoundscapeIndex(char *param_1); // size[18]
	void IsValidIndex(int param_1); // size[23]
	void RemoveSoundscapeEntity(CEnvSoundscape *param_1); // size[120]
	void AddSoundscapeSounds(KeyValues *param_1, int param_2); // size[5]
	void PrecacheSounds(int param_1); // size[5]
	void AddSoundscapeEntity(CEnvSoundscape *param_1); // size[181]
	CSoundscapeSystem(char *param_1); // size[190]
};
