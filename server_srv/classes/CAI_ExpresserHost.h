// Generated header

class CAI_ExpresserHost : public CBasePlayer, public CAI_ExpresserSink
{
public:
	virtual ~CAI_ExpresserHost() override; // vtable[0]
	virtual void _ZN17CAI_ExpresserHostI11CBasePlayerED0Ev() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetResponseSystem() override; // vtable[53]
	virtual void DispatchResponse() override; // vtable[54]
	virtual void ModifyOrAppendCriteria() override; // vtable[121]
	virtual void CanSpeak() override; // vtable[486]
	virtual void NoteSpeaking(); // vtable[537]
	virtual void Speak(); // vtable[538]
	virtual void PostSpeakDispatchResponse(); // vtable[539]
};
