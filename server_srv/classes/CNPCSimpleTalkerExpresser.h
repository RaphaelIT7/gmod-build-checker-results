// Generated header

class CNPCSimpleTalkerExpresser : public CAI_ComponentWithOuter
{
public:
	virtual void IsValidResponse(ResponseType_tparam_1, char *param_2) override; // vtable[0]
	virtual void SpeakRawSentence(char *param_1, floatparam_2, floatparam_3, soundlevel_tparam_4, CBaseEntity *param_5) override; // vtable[1]
	virtual void IsSpeaking() override; // vtable[2]
	virtual void SetOuter(CBaseFlex *param_1) override; // vtable[3]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[7]
	void BeginMonolog(char *param_1, CBaseEntity *param_2); // size[98]
	void EndMonolog(); // size[30]
	void SuspendMonolog(floatparam_1); // size[132]
	void ResumeMonolog(); // size[130]
	void SpeakMonolog(); // size[259]
};
