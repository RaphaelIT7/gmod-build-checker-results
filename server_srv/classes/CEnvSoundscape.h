// Generated header

class CEnvSoundscape : public CPointEntity
{
public:
	virtual ~CEnvSoundscape() override; // vtable[0]
	virtual ~CEnvSoundscape() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]

	void InputEnable(inputdata_t *param_1); // size[24]
	void InputDisable(inputdata_t *param_1); // size[24]
	void InputToggleEnabled(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
	CEnvSoundscape(); // size[28]
	void IsEnabled(); // size[18]
	void Disable(); // size[15]
	void Enable(); // size[15]
	void InRangeOfPlayer(CBasePlayer *param_1); // size[417]
	void WriteAudioParamsTo(audioparams_t *param_1); // size[169]
	void UpdateForPlayer(ss_update_t *param_1); // size[1647]
};
