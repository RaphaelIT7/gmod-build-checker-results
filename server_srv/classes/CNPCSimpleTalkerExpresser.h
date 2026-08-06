// Generated header

class CNPCSimpleTalkerExpresser : public CAI_ComponentWithOuter
{
public:
	virtual void IsValidResponse() override; // vtable[0]
	virtual void SpeakRawSentence() override; // vtable[1]
	virtual void IsSpeaking() override; // vtable[2]
	virtual void SetOuter() override; // vtable[3]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void BeginMonolog();
	void EndMonolog();
	void SuspendMonolog();
	void ResumeMonolog();
	void SpeakMonolog();
};
