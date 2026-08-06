// Generated header

class CToolFrameworkServer : public CAutoGameSystemPerFrame, public IToolFrameworkServer
{
public:
	virtual void Init() override; // vtable[1]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual void LevelShutdownPreEntity() override; // vtable[7]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CToolFrameworkServer() override; // vtable[13]
	virtual ~CToolFrameworkServer() override; // vtable[14]
	virtual void FrameUpdatePreEntityThink() override; // vtable[15]
	virtual void _ZN20CToolFrameworkServer26FrameUpdatePostEntityThinkEv() override; // vtable[16]
	virtual void PreClientUpdate() override; // vtable[17]
	virtual void PreSetupVisibility(); // vtable[19]

	void PreSetupVisibility(); // size[7]
};
