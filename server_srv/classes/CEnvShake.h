// Generated header

class CEnvShake : public CPointEntity
{
public:
	virtual ~CEnvShake() override; // vtable[0]
	virtual ~CEnvShake() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void Think() override; // vtable[48]

	void GetBaseMap(); // size[0]
	void Radius(); // size[0]
	void ApplyShake(); // size[0]
	void InputStartShake(); // size[0]
	void InputStopShake(); // size[0]
	void InputAmplitude(); // size[0]
	void InputFrequency(); // size[0]
};
