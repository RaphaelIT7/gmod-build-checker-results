// Generated header

class CInfoTeleporterCountdown : public CPointEntity
{
public:
	virtual ~CInfoTeleporterCountdown() override; // vtable[0]
	virtual ~CInfoTeleporterCountdown() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputStopCountdown(inputdata_t *param_1); // size[99]
	void InputEnable(inputdata_t *param_1); // size[160]
	void InputDisable(inputdata_t *param_1); // size[193]
	void InputStartCountdown(inputdata_t *param_1); // size[222]
	void GetBaseMap(); // size[10]
};
