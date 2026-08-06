// Generated header

class CFogSystem : public CAutoGameSystem, public CGameEventListener
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void ~CFogSystem() override; // vtable[13]
	virtual void ~CFogSystem() override; // vtable[14]
	virtual void FireGameEvent(); // vtable[18]

	void InitMasterController();
	void FireGameEvent();
	void SetMasterController();
	void ~CFogSystem();
	void ~CFogSystem();
};
