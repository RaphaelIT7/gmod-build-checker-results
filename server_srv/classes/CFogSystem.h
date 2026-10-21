// Generated header
// Estimated minimum size: 0x18 (24) bytes

class CFogSystem : public CAutoGameSystem, public CGameEventListener
{
public:
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual ~CFogSystem() override; // vtable[13]
	virtual ~CFogSystem() override; // vtable[14]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[18]
	virtual ~CFogSystem() override; // vtable[0]
	virtual ~CFogSystem() override; // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[2]

	void InitMasterController(); // size[86]
	void SetMasterController(CFogController *param_1); // size[43]
};
