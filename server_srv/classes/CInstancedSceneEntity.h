// Generated header

class CInstancedSceneEntity : public CSceneEntity
{
public:
	virtual ~CInstancedSceneEntity() override; // vtable[0]
	virtual ~CInstancedSceneEntity() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void OnRestore() override; // vtable[45]
	virtual void OnLoaded() override; // vtable[250]
	virtual void DoThink(floatparam_1) override; // vtable[252]
	virtual void StartPlayback() override; // vtable[258]
	virtual void DispatchStartMoveTo(CChoreoScene *param_1, CBaseFlex *param_2, CBaseEntity *param_3, CChoreoEvent *param_4) override; // vtable[272]
	virtual void DispatchEndMoveTo(CChoreoScene *param_1, CBaseFlex *param_2, CChoreoEvent *param_3) override; // vtable[273]
	virtual void DispatchStartFace(CChoreoScene *param_1, CBaseFlex *param_2, CBaseEntity *param_3, CChoreoEvent *param_4) override; // vtable[276]
	virtual void DispatchEndFace(CChoreoScene *param_1, CBaseFlex *param_2, CChoreoEvent *param_3) override; // vtable[277]
	virtual void DispatchStartSequence(CChoreoScene *param_1, CBaseFlex *param_2, CChoreoEvent *param_3) override; // vtable[278]
	virtual void DispatchEndSequence(CChoreoScene *param_1, CBaseFlex *param_2, CChoreoEvent *param_3) override; // vtable[279]
	virtual void DispatchPauseScene(CChoreoScene *param_1, char *param_2) override; // vtable[288]
	virtual void EstimateLength() override; // vtable[290]
	virtual void GetPostSpeakDelay() override; // vtable[291]
	virtual void FindNamedActor(char *param_1) override; // vtable[294]
	virtual void FindNamedEntity(char *param_1); // vtable[297]
	virtual void SetPostSpeakDelay(floatparam_1); // vtable[298]
	virtual void GetPreDelay(); // vtable[299]
	virtual void SetPreDelay(floatparam_1); // vtable[300]

	void GetBaseMap(); // size[10]
	void PassThrough(CBaseFlex *param_1); // size[198]
};
