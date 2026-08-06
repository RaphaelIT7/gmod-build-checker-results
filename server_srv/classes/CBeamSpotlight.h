// Generated header

class CBeamSpotlight : public CBaseEntity
{
public:
	virtual ~CBeamSpotlight() override; // vtable[0]
	virtual ~CBeamSpotlight() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputTurnOn(inputdata_t *param_1); // size[95]
	void InputTurnOff(inputdata_t *param_1); // size[90]
	void InputSetColor(inputdata_t *param_1); // size[241]
	void GetBaseMap(); // size[10]
	CBeamSpotlight(); // size[28]
	void RecalcRotation(); // size[107]
	void InputStart(inputdata_t *param_1); // size[30]
	void InputStop(inputdata_t *param_1); // size[30]
};
