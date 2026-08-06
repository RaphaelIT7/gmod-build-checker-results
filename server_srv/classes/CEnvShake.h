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

	void GetBaseMap(); // size[10]
	void Radius(bool param_1); // size[45]
	void ApplyShake(ShakeCommand_t param_1); // size[452]
	void InputStartShake(inputdata_t *param_1); // size[67]
	void InputStopShake(inputdata_t *param_1); // size[16]
	void InputAmplitude(inputdata_t *param_1); // size[47]
	void InputFrequency(inputdata_t *param_1); // size[47]
};
