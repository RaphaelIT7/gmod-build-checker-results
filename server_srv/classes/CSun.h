// Generated header

class CSun : public CBaseEntity
{
public:
	virtual ~CSun() override; // vtable[0]
	virtual ~CSun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void InputTurnOn(inputdata_t *param_1); // size[95]
	void InputTurnOff(inputdata_t *param_1); // size[90]
	void InputSetColor(inputdata_t *param_1); // size[76]
	void GetBaseMap(); // size[10]
	CSun(); // size[28]
};
