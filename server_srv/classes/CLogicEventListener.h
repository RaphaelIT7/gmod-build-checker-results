// Generated header

class CLogicEventListener : public CLogicalEntity, public CGameEventListener
{
public:
	virtual ~CLogicEventListener() override; // vtable[0]
	virtual ~CLogicEventListener() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void FireGameEvent(IGameEvent *param_1); // size[13]
	void GetBaseMap(); // size[10]
	~CLogicEventListener(); // size[13]
	~CLogicEventListener(); // size[13]
};
