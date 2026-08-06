// Generated header

class CAI_SentenceBase : public CAI_Component
{
public:
	virtual ~CAI_SentenceBase() override; // vtable[0]
	virtual ~CAI_SentenceBase() override; // vtable[1]
	virtual void __cxa_pure_virtual(); // vtable[6]

	void GetBaseMap(); // size[7]
	CAI_SentenceBase(); // size[28]
	void SentenceMsg(char *param_1, char *param_2); // size[196]
	void ClearQueue(); // size[15]
	void UpdateSentenceQueue(); // size[231]
	void MatchesCriteria(SentenceCriteria_t param_1); // size[233]
	void PlaySentence(char *param_1); // size[170]
	void Speak(char *param_1, SentencePriority_t param_2, SentenceCriteria_t param_3); // size[183]
	void SpeakQueued(char *param_1, SentencePriority_t param_2, SentenceCriteria_t param_3); // size[193]
};
