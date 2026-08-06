// Generated header

class CEnvFireSource : public CBaseEntity
{
public:
	virtual ~CEnvFireSource() override; // vtable[0]
	virtual ~CEnvFireSource() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Think() override; // vtable[48]

	void TurnOn(); // size[48]
	void InputEnable(inputdata_t *param_1); // size[20]
	void TurnOff(); // size[45]
	void InputDisable(inputdata_t *param_1); // size[20]
	void Think(); // size[231]
	void GetBaseMap(); // size[10]
	void TurnOn(); // size[23]
	void TurnOff(); // size[23]
};
