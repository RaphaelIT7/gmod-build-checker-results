// Generated header

class CInstancedSceneEntity : public CSceneEntity
{
public:
	virtual ~CInstancedSceneEntity() override; // vtable[0]
	virtual ~CInstancedSceneEntity() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void OnRestore() override; // vtable[45]
	virtual void OnLoaded() override; // vtable[250]
	virtual void DoThink() override; // vtable[252]
	virtual void StartPlayback() override; // vtable[258]
	virtual void DispatchStartMoveTo() override; // vtable[272]
	virtual void DispatchEndMoveTo() override; // vtable[273]
	virtual void DispatchStartFace() override; // vtable[276]
	virtual void DispatchEndFace() override; // vtable[277]
	virtual void DispatchStartSequence() override; // vtable[278]
	virtual void DispatchEndSequence() override; // vtable[279]
	virtual void DispatchPauseScene() override; // vtable[288]
	virtual void EstimateLength() override; // vtable[290]
	virtual void GetPostSpeakDelay() override; // vtable[291]
	virtual void FindNamedActor() override; // vtable[294]
	virtual void FindNamedEntity(); // vtable[297]
	virtual void SetPostSpeakDelay(); // vtable[298]
	virtual void GetPreDelay(); // vtable[299]
	virtual void SetPreDelay(); // vtable[300]

	void GetBaseMap(); // size[0]
	void PassThrough(); // size[0]
};
