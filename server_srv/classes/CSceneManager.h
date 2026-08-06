// Generated header

class CSceneManager : public CBaseEntity
{
public:
	virtual void ~CSceneManager() override; // vtable[0]
	virtual void ~CSceneManager() override; // vtable[1]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void ClearAllScenes();
	void RemoveScenesInvolvingActor();
	void RemoveActorFromScenes();
	void PauseActorsScenes();
	void IsInInterruptableScenes();
	void ResumeActorsScenes();
	void QueueActorsScenesToResume();
	void IsRunningScriptedScene();
	void IsRunningScriptedSceneAndNotPaused();
	void IsRunningScriptedSceneWithSpeech();
	void IsRunningScriptedSceneWithSpeechAndNotPaused();
	void RemoveSceneEntity();
	void OnClientActive();
	void AddSceneEntity();
	void QueueRestoredSound();
};
