// Generated header

class CSceneEntity : public CPointEntity, public IChoreoEventCallback
{
public:
	virtual void ~CSceneEntity() override; // vtable[0]
	virtual void ~CSceneEntity() override; // vtable[1]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void StartEvent(); // vtable[246]
	virtual void EndEvent(); // vtable[247]
	virtual void ProcessEvent(); // vtable[248]
	virtual void CheckEvent(); // vtable[249]
	virtual void OnLoaded(); // vtable[250]
	virtual void OnSceneFinished(); // vtable[251]
	virtual void DoThink(); // vtable[252]
	virtual void PauseThink(); // vtable[253]
	virtual void ClearInterrupt(); // vtable[254]
	virtual void CheckInterruptCompletion(); // vtable[255]
	virtual void InterruptThisScene(); // vtable[256]
	virtual void NotifyOfCompletion(); // vtable[257]
	virtual void StartPlayback(); // vtable[258]
	virtual void PausePlayback(); // vtable[259]
	virtual void ResumePlayback(); // vtable[260]
	virtual void CancelPlayback(); // vtable[261]
	virtual void PitchShiftPlayback(); // vtable[262]
	virtual void QueueResumePlayback(); // vtable[263]
	virtual void DispatchStartExpression(); // vtable[264]
	virtual void DispatchEndExpression(); // vtable[265]
	virtual void DispatchStartFlexAnimation(); // vtable[266]
	virtual void DispatchEndFlexAnimation(); // vtable[267]
	virtual void DispatchStartGesture(); // vtable[268]
	virtual void DispatchEndGesture(); // vtable[269]
	virtual void DispatchStartLookAt(); // vtable[270]
	virtual void DispatchEndLookAt(); // vtable[271]
	virtual void DispatchStartMoveTo(); // vtable[272]
	virtual void DispatchEndMoveTo(); // vtable[273]
	virtual void DispatchStartSpeak(); // vtable[274]
	virtual void DispatchEndSpeak(); // vtable[275]
	virtual void DispatchStartFace(); // vtable[276]
	virtual void DispatchEndFace(); // vtable[277]
	virtual void DispatchStartSequence(); // vtable[278]
	virtual void DispatchEndSequence(); // vtable[279]
	virtual void _ZN12CSceneEntity21DispatchStartSubSceneEP12CChoreoSceneP9CBaseFlexP12CChoreoEvent(); // vtable[280]
	virtual void DispatchStartInterrupt(); // vtable[281]
	virtual void DispatchEndInterrupt(); // vtable[282]
	virtual void DispatchStartGeneric(); // vtable[283]
	virtual void DispatchEndGeneric(); // vtable[284]
	virtual void DispatchStartPermitResponses(); // vtable[285]
	virtual void DispatchEndPermitResponses(); // vtable[286]
	virtual void DispatchProcessLoop(); // vtable[287]
	virtual void DispatchPauseScene(); // vtable[288]
	virtual void DispatchStopPoint(); // vtable[289]
	virtual void EstimateLength(); // vtable[290]
	virtual void GetPostSpeakDelay(); // vtable[291]
	virtual void FindNamedActor(); // vtable[292]
	virtual void FindNamedActor(); // vtable[293]
	virtual void FindNamedActor(); // vtable[294]
	virtual void FindNamedEntity(); // vtable[295]
	virtual void FindNamedEntityClosest(); // vtable[296]

	void InputPausePlayback();
	void InputResumePlayback();
	void InputPitchShiftPlayback();
	void InputStopWaitingForActor();
	void SpeakEventSoundLessFunc();
	void InputCancelPlayback();
	void InputCancelAtNextInterrupt();
	void InputTriggerEvent();
	void DispatchPauseScene();
	void ProcessEvent();
	void InputScriptPlayerDeath();
	void CheckEvent();
	void StartEvent();
	void EndEvent();
	void GetBaseMap();
	void SetCurrentTime();
	void GenerateSceneForSound();
	void GetSoundSystemLatency();
	void GenerateSoundScene();
	void HasUnplayedSpeech();
	void HasFlexAnimation();
	void SetBackground();
	void IsBackground();
	void IsInterruptable();
	void GetSoundNameForPlayer();
	void InvolvesActor();
	void CancelIfSceneInvolvesActor();
	void ValidScene();
	void ShouldNetwork();
	void FindNamedTarget();
	void ClearSceneEvents();
	void UnloadScene();
	void ClearSchedules();
	void SetRecipientFilter();
	void CheckActors();
	void LoadScene();
	void PrecacheScene();
	void PrefetchSpeakEventSounds();
	void InputSetTarget1();
	void InputSetTarget2();
	void InputSetTarget3();
	void InputSetTarget4();
	void ClearActivatorTargets();
	void InputStartPlayback();
	void CSceneEntity();
	void InputInterjectResponse();
	void RequestCompletionNotification();
	void AddListManager();
	void BuildSortedSpeakEventSoundsPrefetchList();
	void PrefetchAnimBlocks();
};
