// Generated header

class CPointWorldText : public CBaseEntity
{
public:
	virtual ~CPointWorldText() override; // vtable[0]
	virtual ~CPointWorldText() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	CPointWorldText(); // size[28]
	void InputSetText(inputdata_t *param_1); // size[9]
	void InputEnable(inputdata_t *param_1); // size[37]
	void InputToggle(inputdata_t *param_1); // size[96]
	void InputDisable(inputdata_t *param_1); // size[99]
	void InputSetEnabled(inputdata_t *param_1); // size[108]
	void InputSetRainbow(inputdata_t *param_1); // size[108]
	void InputSetTextSpacingX(inputdata_t *param_1); // size[68]
	void InputSetOrientation(inputdata_t *param_1); // size[59]
	void InputSetTextSize(inputdata_t *param_1); // size[68]
	void InputSetTextSpacingY(inputdata_t *param_1); // size[68]
	void InputSetColor(inputdata_t *param_1); // size[79]
};
