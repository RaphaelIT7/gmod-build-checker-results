// Generated header
// Estimated minimum size: 0x13CC (5068) bytes

class CLogicEventListener : public CLogicalEntity, public CGameEventListener
{
public:
	virtual ~CLogicEventListener() override; // vtable[0]
	virtual ~CLogicEventListener() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[246]
	virtual ~CLogicEventListener() override; // vtable[0]
	virtual ~CLogicEventListener() override; // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[2]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
};
