// Generated header

class CPointHurt : public CPointEntity
{
public:
	virtual ~CPointHurt() override; // vtable[0]
	virtual ~CPointHurt() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void HurtThink(); // size[0]
	void InputTurnOn(); // size[0]
	void InputHurt(); // size[0]
	void InputTurnOff(); // size[0]
	void InputToggle(); // size[0]
	void GetBaseMap(); // size[0]
};
