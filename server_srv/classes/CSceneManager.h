// Generated header

class CSceneManager : public CBaseEntity
{
public:
	virtual ~CSceneManager() override; // vtable[0]
	virtual ~CSceneManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void ClearAllScenes(); // size[0]
	void RemoveScenesInvolvingActor(); // size[0]
	void RemoveActorFromScenes(); // size[0]
	void PauseActorsScenes(); // size[0]
	void IsInInterruptableScenes(); // size[0]
	void ResumeActorsScenes(); // size[0]
	void QueueActorsScenesToResume(); // size[0]
	void IsRunningScriptedScene(); // size[0]
	void IsRunningScriptedSceneAndNotPaused(); // size[0]
	void IsRunningScriptedSceneWithSpeech(); // size[0]
	void IsRunningScriptedSceneWithSpeechAndNotPaused(); // size[0]
	void RemoveSceneEntity(); // size[0]
	void OnClientActive(); // size[0]
	void AddSceneEntity(); // size[0]
	void QueueRestoredSound(); // size[0]
};
