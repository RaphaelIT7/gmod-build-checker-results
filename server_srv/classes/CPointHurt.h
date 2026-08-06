// Generated header

class CPointHurt : public CPointEntity
{
public:
	virtual ~CPointHurt() override; // vtable[0]
	virtual ~CPointHurt() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void HurtThink(); // size[622]
	void InputTurnOn(inputdata_t *param_1); // size[59]
	void InputHurt(inputdata_t *param_1); // size[7]
	void InputTurnOff(inputdata_t *param_1); // size[59]
	void InputToggle(inputdata_t *param_1); // size[150]
	void GetBaseMap(); // size[10]
};
