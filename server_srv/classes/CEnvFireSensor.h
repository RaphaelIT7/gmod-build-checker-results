// Generated header

class CEnvFireSensor : public CBaseEntity
{
public:
	virtual ~CEnvFireSensor() override; // vtable[0]
	virtual ~CEnvFireSensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Think() override; // vtable[48]

	void TurnOn(); // size[48]
	void InputEnable(inputdata_t *param_1); // size[20]
	void TurnOff(); // size[46]
	void InputDisable(inputdata_t *param_1); // size[23]
	void Think(); // size[89]
	void GetBaseMap(); // size[10]
	void TurnOn(); // size[23]
	void TurnOff(); // size[23]
};
