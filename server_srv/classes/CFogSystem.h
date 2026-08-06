// Generated header

class CFogSystem : public CAutoGameSystem, public CGameEventListener
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual ~CFogSystem() override; // vtable[13]
	virtual ~CFogSystem() override; // vtable[14]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[18]

	void InitMasterController(); // size[130]
	void FireGameEvent(IGameEvent *param_1); // size[7]
	void SetMasterController(CFogController *param_1); // size[43]
	~CFogSystem(); // size[10]
	~CFogSystem(); // size[7]
};
