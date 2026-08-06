// Generated header

class CColorCorrectionSystem : public CAutoGameSystem, public CGameEventListener
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void PostInit() override; // vtable[2]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual ~CColorCorrectionSystem() override; // vtable[13]
	virtual ~CColorCorrectionSystem() override; // vtable[14]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[18]

	void InitMasterController(); // size[84]
	void FireGameEvent(IGameEvent *param_1); // size[7]
	~CColorCorrectionSystem(); // size[10]
	~CColorCorrectionSystem(); // size[7]
};
