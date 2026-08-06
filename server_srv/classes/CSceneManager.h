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

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	void ClearAllScenes(); // size[18]
	void RemoveScenesInvolvingActor(CBaseFlex *param_1); // size[188]
	void RemoveActorFromScenes(CBaseFlex *param_1, bool param_2, bool param_3, char *param_4); // size[337]
	void PauseActorsScenes(CBaseFlex *param_1, bool param_2); // size[210]
	void IsInInterruptableScenes(CBaseFlex *param_1); // size[177]
	void ResumeActorsScenes(CBaseFlex *param_1, bool param_2); // size[210]
	void QueueActorsScenesToResume(CBaseFlex *param_1, bool param_2); // size[258]
	void IsRunningScriptedScene(CBaseFlex *param_1, bool param_2); // size[241]
	void IsRunningScriptedSceneAndNotPaused(CBaseFlex *param_1, bool param_2); // size[263]
	void IsRunningScriptedSceneWithSpeech(CBaseFlex *param_1, bool param_2); // size[290]
	void IsRunningScriptedSceneWithSpeechAndNotPaused(CBaseFlex *param_1, bool param_2); // size[303]
	void RemoveSceneEntity(CSceneEntity *param_1); // size[98]
	void OnClientActive(CBasePlayer *param_1); // size[209]
	void AddSceneEntity(CSceneEntity *param_1); // size[97]
	void QueueRestoredSound(CBaseFlex *param_1, char *param_2, soundlevel_t param_3, float param_4); // size[183]
};
