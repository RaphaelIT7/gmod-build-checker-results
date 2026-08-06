// Generated header

class CAI_ExpresserHost : public CBasePlayer, public CAI_ExpresserSink
{
public:
	virtual ~CAI_ExpresserHost() override; // vtable[0]
	virtual ~CAI_ExpresserHost() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetResponseSystem() override; // vtable[53]
	virtual void DispatchResponse(char *param_1) override; // vtable[54]
	virtual void ModifyOrAppendCriteria(AI_CriteriaSet *param_1) override; // vtable[121]
	virtual void CanSpeak() override; // vtable[486]
	virtual void NoteSpeaking(float param_1, float param_2); // vtable[537]
	virtual void Speak(char *param_1, char *param_2, char *param_3, uint param_4, IRecipientFilter *param_5); // vtable[538]
	virtual void PostSpeakDispatchResponse(char *param_1, AI_Response *param_2); // vtable[539]
};
