// Generated header

class CSoundEmitterSystem : public CBaseGameSystem
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CSoundEmitterSystem() override; // vtable[13]
	virtual ~CSoundEmitterSystem() override; // vtable[14]
	virtual void TraceEmitSound(char *param_1); // vtable[18]

	void StartLog(); // size[105]
	void EmitCloseCaption(IRecipientFilter *param_1, int param_2, bool param_3, char *param_4, CUtlVector *param_5, float param_6, bool param_7); // size[379]
};
