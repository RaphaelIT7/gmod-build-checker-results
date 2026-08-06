// Generated header

class CAmbientGeneric : public CPointEntity
{
public:
	virtual ~CAmbientGeneric() override; // vtable[0]
	virtual ~CAmbientGeneric() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void SetTransmit() override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]

	void InputFadeIn(); // size[0]
	void InputFadeOut(); // size[0]
	void GetBaseMap(); // size[0]
	void ComputeMaxAudibleDistance(); // size[0]
	void InitModulationParms(); // size[0]
	void SendSound(); // size[0]
	void InputPitch(); // size[0]
	void InputVolume(); // size[0]
	void RampThink(); // size[0]
	void ToggleSound(); // size[0]
	void InputPlaySound(); // size[0]
	void InputStopSound(); // size[0]
	void InputToggleSound(); // size[0]
};
