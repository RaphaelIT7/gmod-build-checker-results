// Generated header

class CLight : public CServerOnlyPointEntity
{
public:
	virtual ~CLight() override; // vtable[0]
	virtual ~CLight() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue() override; // vtable[30]
	virtual void Use() override; // vtable[100]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void FadeThink(); // size[0]
	void InputFadeToPattern(); // size[0]
	void InputSetPattern(); // size[0]
	void GetBaseMap(); // size[0]
	void TurnOn(); // size[0]
	void InputTurnOn(); // size[0]
	void TurnOff(); // size[0]
	void InputTurnOff(); // size[0]
	void Toggle(); // size[0]
	void InputToggle(); // size[0]
};
