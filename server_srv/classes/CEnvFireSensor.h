// Generated header

class CEnvFireSensor : public CBaseEntity
{
public:
	virtual ~CEnvFireSensor() override; // vtable[0]
	virtual ~CEnvFireSensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Think() override; // vtable[48]

	void TurnOn(); // size[71]
	void InputEnable(inputdata_t *param_1); // size[20]
	void TurnOff(); // size[98]
	void InputDisable(inputdata_t *param_1); // size[23]
	void Think(); // size[7]
	void GetBaseMap(); // size[10]
	void TurnOn(); // size[23]
	void TurnOff(); // size[23]
};
