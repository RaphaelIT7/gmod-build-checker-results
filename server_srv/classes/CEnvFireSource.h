// Generated header

class CEnvFireSource : public CBaseEntity
{
public:
	virtual ~CEnvFireSource() override; // vtable[0]
	virtual ~CEnvFireSource() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Think() override; // vtable[48]

	void TurnOn(); // size[46]
	void InputEnable(inputdata_t *param_1); // size[20]
	void TurnOff(); // size[43]
	void InputDisable(inputdata_t *param_1); // size[20]
	void Think(); // size[54]
	void GetBaseMap(); // size[10]
	void TurnOn(); // size[23]
	void TurnOff(); // size[23]
};
