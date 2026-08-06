// Generated header

class CAmbientGeneric : public CPointEntity
{
public:
	virtual void ~CAmbientGeneric() override; // vtable[0]
	virtual void ~CAmbientGeneric() override; // vtable[1]

	void InputFadeIn();
	void InputFadeOut();
	void GetBaseMap();
	void ComputeMaxAudibleDistance();
	void InitModulationParms();
	void SendSound();
	void InputPitch();
	void InputVolume();
	void RampThink();
	void ToggleSound();
	void InputPlaySound();
	void InputStopSound();
	void InputToggleSound();
};
