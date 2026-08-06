// Generated header

class CLight : public CServerOnlyPointEntity
{
public:
	virtual ~CLight() override; // vtable[0]
	virtual ~CLight() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void FadeThink(); // size[216]
	void InputFadeToPattern(inputdata_t *param_1); // size[150]
	void InputSetPattern(inputdata_t *param_1); // size[148]
	void GetBaseMap(); // size[10]
	void TurnOn(); // size[137]
	void InputTurnOn(inputdata_t *param_1); // size[9]
	void TurnOff(); // size[87]
	void InputTurnOff(inputdata_t *param_1); // size[9]
	void Toggle(); // size[30]
	void InputToggle(inputdata_t *param_1); // size[9]
};
