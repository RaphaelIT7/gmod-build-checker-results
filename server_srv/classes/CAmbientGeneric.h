// Generated header

class CAmbientGeneric : public CPointEntity
{
public:
	virtual ~CAmbientGeneric() override; // vtable[0]
	virtual ~CAmbientGeneric() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void SetTransmit(CCheckTransmitInfo *param_1, boolparam_2) override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]

	void InputFadeIn(inputdata_t *param_1); // size[141]
	void InputFadeOut(inputdata_t *param_1); // size[141]
	void GetBaseMap(); // size[10]
	void ComputeMaxAudibleDistance(); // size[368]
	void InitModulationParms(); // size[619]
	void SendSound(SoundFlags_tparam_1); // size[493]
	void InputPitch(inputdata_t *param_1); // size[83]
	void InputVolume(inputdata_t *param_1); // size[105]
	void RampThink(); // size[1332]
	void ToggleSound(); // size[12]
	void InputPlaySound(inputdata_t *param_1); // size[36]
	void InputStopSound(inputdata_t *param_1); // size[23]
	void InputToggleSound(inputdata_t *param_1); // size[9]
};
