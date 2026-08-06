// Generated header

class CBubbling : public CBaseEntity
{
public:
	virtual ~CBubbling() override; // vtable[0]
	virtual ~CBubbling() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetCurrent(inputdata_t *param_1); // size[32]
	void InputSetDensity(inputdata_t *param_1); // size[29]
	void InputSetFrequency(inputdata_t *param_1); // size[171]
	void FizzThink(); // size[50]
	void GetBaseMap(); // size[10]
	void TurnOn(); // size[69]
	void InputActivate(inputdata_t *param_1); // size[9]
	void TurnOff(); // size[69]
	void Toggle(); // size[31]
	void InputToggle(inputdata_t *param_1); // size[9]
	void InputDeactivate(inputdata_t *param_1); // size[9]
};
