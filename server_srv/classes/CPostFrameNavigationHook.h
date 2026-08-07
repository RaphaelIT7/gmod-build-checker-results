// Generated header

class CPostFrameNavigationHook : public CBaseGameSystemPerFrame
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual ~CPostFrameNavigationHook() override; // vtable[13]
	virtual ~CPostFrameNavigationHook() override; // vtable[14]
	virtual void FrameUpdatePreEntityThink() override; // vtable[15]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]

	void EnqueueEntityNavigationQuery(CAI_BaseNPC *param_1, CFunctor *param_2); // size[162]
};
