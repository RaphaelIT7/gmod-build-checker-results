// Generated header

class CEnvLaser : public CBeam
{
public:
	virtual ~CEnvLaser() override; // vtable[0]
	virtual ~CEnvLaser() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void _ZN9CEnvLaser8PrecacheEv() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void IsOn(); // size[21]
	void TurnOff(); // size[111]
	void InputTurnOff(inputdata_t *param_1); // size[23]
	void FireAtPoint(CGameTrace *param_1); // size[30]
	void StrikeThink(); // size[20]
	void TurnOn(); // size[53]
	void InputTurnOn(inputdata_t *param_1); // size[23]
	void InputToggle(inputdata_t *param_1); // size[30]
};
