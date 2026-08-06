// Generated header

class CClientEngineTools : public IClientEngineTools
{
public:
	virtual ~CClientEngineTools() override; // vtable[0]
	virtual ~CClientEngineTools() override; // vtable[1]
	virtual void LevelInitPreEntityAllTools(); // vtable[2]
	virtual void LevelInitPostEntityAllTools(); // vtable[3]
	virtual void LevelShutdownPreEntityAllTools(); // vtable[4]
	virtual void LevelShutdownPostEntityAllTools(); // vtable[5]
	virtual void PreRenderAllTools(); // vtable[6]
	virtual void PostRenderAllTools(); // vtable[7]
	virtual void PostToolMessage(uintparam_1, KeyValues *param_2); // vtable[8]
	virtual void AdjustEngineViewport(int *param_1, int *param_2, int *param_3, int *param_4); // vtable[9]
	virtual void SetupEngineView(Vector *param_1, QAngle *param_2, float *param_3); // vtable[10]
	virtual void SetupAudioState(AudioState_t *param_1); // vtable[11]
	virtual void VGui_PreRenderAllTools(intparam_1); // vtable[12]
	virtual void VGui_PostRenderAllTools(intparam_1); // vtable[13]
	virtual void IsThirdPersonCamera(); // vtable[14]
	virtual void InToolMode() override; // vtable[15]
};
