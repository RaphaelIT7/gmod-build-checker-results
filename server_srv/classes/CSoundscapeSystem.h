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
	virtual void AddSoundscapeFile(); // vtable[19]

	void PrintDebugInfo(); // size[0]
	void LoadManifestFile(); // size[0]
	void FlushSoundscapes(); // size[0]
	void GetSoundscapeIndex(); // size[0]
	void IsValidIndex(); // size[0]
	void RemoveSoundscapeEntity(); // size[0]
	void AddSoundscapeSounds(); // size[0]
	void PrecacheSounds(); // size[0]
	void AddSoundscapeEntity(); // size[0]
	CSoundscapeSystem(); // size[0]
};
