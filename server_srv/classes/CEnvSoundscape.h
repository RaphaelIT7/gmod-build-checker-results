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
	virtual void KeyValue() override; // vtable[30]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]

	void InputEnable(); // size[0]
	void InputDisable(); // size[0]
	void InputToggleEnabled(); // size[0]
	void GetBaseMap(); // size[0]
	CEnvSoundscape(); // size[0]
	void IsEnabled(); // size[0]
	void Disable(); // size[0]
	void Enable(); // size[0]
	void InRangeOfPlayer(); // size[0]
	void WriteAudioParamsTo(); // size[0]
	void UpdateForPlayer(); // size[0]
};
