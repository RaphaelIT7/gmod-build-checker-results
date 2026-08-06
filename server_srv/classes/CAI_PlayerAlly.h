// Generated header

class CAI_PlayerAlly : public CAI_BaseActor
{
public:
	virtual void ~CAI_PlayerAlly() override; // vtable[0]
	virtual void ~CAI_PlayerAlly() override; // vtable[1]
	virtual void SelectNonCombatSpeechSchedule(); // vtable[709]
	virtual void IsValidSpeechTarget(); // vtable[710]
	virtual void SelectIdleSpeech(); // vtable[711]
	virtual void SelectAlertSpeech(); // vtable[712]
	virtual void SelectInterjection(); // vtable[713]
	virtual void SelectPlayerUseSpeech(); // vtable[714]
	virtual void SelectQuestionAndAnswerSpeech(); // vtable[715]
	virtual void SpeakIfAllowed(); // vtable[716]
	virtual void OnSpokeConcept(); // vtable[717]
	virtual void OnStartSpeaking(); // vtable[718]
	virtual void InputIdleRespond(); // vtable[719]
	virtual void GetDeathMessageText(); // vtable[720]
	virtual void ShouldRegenerateHealth(); // vtable[721]

	void InputMakeGameEndAlly();
	void InputMakeRegularAlly();
	void InputSpeakResponseConcept();
	void InputEnableSpeakWhileScripting();
	void InputDisableSpeakWhileScripting();
	void OnStartSpeaking();
	void GetBaseMap();
	void DisplayDeathMessage();
	void TalkInit();
	void SetPendingSpeech();
	void ClearPendingSpeech();
	void SelectNonCombatSpeech();
	void ClearTransientConditions();
	void FindSpeechTarget();
	void DeferAllIdleSpeech();
	void IsOkToSpeak();
	void IsOkToSpeak();
	void IsOkToCombatSpeak();
	void IsOkToSpeakInResponseToPlayer();
	void ShouldSpeakRandom();
	void OnSpokeConcept();
	void IsAllowedToSpeak();
	void SelectSpeechResponse();
	void SelectQuestionFriend();
	void SelectAnswerFriend();
	void AnswerQuestion();
	void InputAnswerQuestion();
	void InputAnswerQuestionHello();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
